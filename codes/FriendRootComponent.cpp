void FriendRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4E720AD & 1) == 0 )
  {
    sub_1D0F0B4(&FriendRootComponent_TypeInfo);
    byte_4E720AD = 1;
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

  if ( (byte_4E7209E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E7209E = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case ',':
      this->fields.state = 23;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseNotificationDialog(Instance, 0);
        goto LABEL_12;
      }
LABEL_14:
      sub_1D0F30C(Instance, method);
    case '+':
      Instance = (CommonUI_o *)this->fields.friendWarningDialog;
      this->fields.state = 23;
      if ( Instance )
      {
        FriendWarningDialog__Close_33918340((FriendWarningDialog_o *)Instance, 0, v2);
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

  if ( (byte_4E720A3 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectSearchFriend__);
    byte_4E720A3 = 1;
  }
  if ( this->fields.state == 42 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0;
    sub_1D0F058(&this->fields.selectFriendCode, 0);
    this->fields.selectFriendEntity = 0;
    sub_1D0F058(&this->fields.selectFriendEntity, 0);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0)
      || (FriendSearchResultMenu__Close_33886436((FriendSearchResultMenu_o *)operationConfirmMenu, 0, v5),
          friendSearchMenu = this->fields.friendSearchMenu,
          v7 = (FriendSearchMenu_CallbackFunc_o *)sub_1D0F300(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            v8),
          !friendSearchMenu) )
    {
      sub_1D0F30C(operationConfirmMenu, v3);
    }
    FriendSearchMenu__Open(friendSearchMenu, v7, 1, v9);
    FriendRootComponent__RefreshInfo(this, v10);
  }
}


void FriendRootComponent__BackFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4E720A5 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4E720A5 = 1;
  }
  if ( this->fields.state == 45 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v6),
          !operationItemListViewManager) )
    {
      sub_1D0F30C(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v5;
    sub_1D0F058(&operationItemListViewManager->fields.callbackFunc, v5);
    FriendOperationItemListViewManager__SetMode_33858428(operationItemListViewManager, 2, v7);
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
      sub_1D0F30C(operationConfirmMenu, method);
    }
    FriendOperationItemListViewManager__DestroyList(
      (FriendOperationItemListViewManager_o *)operationConfirmMenu,
      method);
  }
}


void FriendRootComponent__BackFollowRemoveConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4E720A6 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FriendRootComponent_EndFriendRequest2__);
    sub_1D0F0B4(&Method_NetworkManager_getRequest_FriendTopRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4E720A6 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_FriendRootComponent_EndFriendRequest2__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !Request_object )
    sub_1D0F30C(0, v5);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void FriendRootComponent__BackFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4E7206C & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4E7206C = 1;
  }
  if ( this->fields.state == 31 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v6),
          !operationItemListViewManager) )
    {
      sub_1D0F30C(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v5;
    sub_1D0F058(&operationItemListViewManager->fields.callbackFunc, v5);
    FriendOperationItemListViewManager__SetMode_33858428(operationItemListViewManager, 2, v7);
    this->fields.state = 14;
  }
}


void FriendRootComponent__BackFriendAcceptConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v5; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4E7206D & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4E7206D = 1;
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
            v3),
          (classButtonControl = this->fields.classButtonControl) == 0)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            2,
            classButtonControl->fields.currentCursor,
            v5),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v9),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1D0F30C(operationConfirmMenu, v3);
    }
    operationItemListViewManager->fields.callbackFunc = v8;
    sub_1D0F058(&operationItemListViewManager->fields.callbackFunc, v8);
    FriendOperationItemListViewManager__SetMode_33858428(operationItemListViewManager, 2, v10);
  }
}


void FriendRootComponent__BackFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4E72072 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4E72072 = 1;
  }
  if ( this->fields.state == 37 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v6),
          !operationItemListViewManager) )
    {
      sub_1D0F30C(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v5;
    sub_1D0F058(&operationItemListViewManager->fields.callbackFunc, v5);
    FriendOperationItemListViewManager__SetMode_33858428(operationItemListViewManager, 2, v7);
    this->fields.state = 14;
  }
}


void FriendRootComponent__BackFriendCancelConfirmRefreshShowOffer(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v5; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4E72073 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4E72073 = 1;
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
            v3),
          (classButtonControl = this->fields.classButtonControl) == 0)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            1,
            classButtonControl->fields.currentCursor,
            v5),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v9),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1D0F30C(operationConfirmMenu, v3);
    }
    operationItemListViewManager->fields.callbackFunc = v8;
    sub_1D0F058(&operationItemListViewManager->fields.callbackFunc, v8);
    FriendOperationItemListViewManager__SetMode_33858428(operationItemListViewManager, 2, v10);
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
      FriendWarningDialog__Close_33918340(friendWarningDialog, 0, v2);
      goto LABEL_7;
    }
LABEL_9:
    sub_1D0F30C(friendWarningDialog, method);
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
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4E720A8 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4E720A8 = 1;
  }
  state = this->fields.state;
  if ( state == 29 || state == 27 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v6,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v7),
          !operationItemListViewManager) )
    {
      sub_1D0F30C(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v6;
    sub_1D0F058(&operationItemListViewManager->fields.callbackFunc, v6);
    FriendOperationItemListViewManager__SetMode_33858428(operationItemListViewManager, 2, v8);
    this->fields.state = 4;
  }
}


void FriendRootComponent__BackFriendOfferConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v5; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4E720A9 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4E720A9 = 1;
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
            v3),
          (classButtonControl = this->fields.classButtonControl) == 0)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            3,
            classButtonControl->fields.currentCursor,
            v5),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v9),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1D0F30C(operationConfirmMenu, v3);
    }
    operationItemListViewManager->fields.callbackFunc = v8;
    sub_1D0F058(&operationItemListViewManager->fields.callbackFunc, v8);
    FriendOperationItemListViewManager__SetMode_33858428(operationItemListViewManager, 2, v10);
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

  if ( (byte_4E7206A & 1) == 0 )
  {
    sub_1D0F0B4(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectSearchFriend__);
    byte_4E7206A = 1;
  }
  if ( this->fields.state == 27 )
  {
    this->fields.state = 23;
    this->fields.selectFriendCode = 0;
    sub_1D0F058(&this->fields.selectFriendCode, 0);
    this->fields.selectFriendEntity = 0;
    sub_1D0F058(&this->fields.selectFriendEntity, 0);
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.friendSearchResultMenu) == 0)
      || (FriendSearchResultMenu__Close_33886436((FriendSearchResultMenu_o *)operationConfirmMenu, 0, v5),
          friendSearchMenu = this->fields.friendSearchMenu,
          v7 = (FriendSearchMenu_CallbackFunc_o *)sub_1D0F300(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            v8),
          !friendSearchMenu) )
    {
      sub_1D0F30C(operationConfirmMenu, v3);
    }
    FriendSearchMenu__Open(friendSearchMenu, v7, 1, v9);
  }
}


void FriendRootComponent__BackFriendRejectConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4E7206F & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4E7206F = 1;
  }
  if ( this->fields.state == 34 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v6),
          !operationItemListViewManager) )
    {
      sub_1D0F30C(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v5;
    sub_1D0F058(&operationItemListViewManager->fields.callbackFunc, v5);
    FriendOperationItemListViewManager__SetMode_33858428(operationItemListViewManager, 2, v7);
    this->fields.state = 14;
  }
}


void FriendRootComponent__BackFriendRejectConfirmRefreshShowOffered(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v5; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4E72070 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4E72070 = 1;
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
            v3),
          (classButtonControl = this->fields.classButtonControl) == 0)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            2,
            classButtonControl->fields.currentCursor,
            v5),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v9),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1D0F30C(operationConfirmMenu, v3);
    }
    operationItemListViewManager->fields.callbackFunc = v8;
    sub_1D0F058(&operationItemListViewManager->fields.callbackFunc, v8);
    FriendOperationItemListViewManager__SetMode_33858428(operationItemListViewManager, 2, v10);
  }
}


void FriendRootComponent__BackFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2

  if ( (byte_4E72075 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4E72075 = 1;
  }
  if ( this->fields.state == 40 )
  {
    operationConfirmMenu = this->fields.operationConfirmMenu;
    if ( !operationConfirmMenu
      || (FriendOperationConfirmMenu__Close(operationConfirmMenu, 0),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v5,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v6),
          !operationItemListViewManager) )
    {
      sub_1D0F30C(operationConfirmMenu, method);
    }
    operationItemListViewManager->fields.callbackFunc = v5;
    sub_1D0F058(&operationItemListViewManager->fields.callbackFunc, v5);
    FriendOperationItemListViewManager__SetMode_33858428(operationItemListViewManager, 2, v7);
    this->fields.state = 4;
  }
}


void FriendRootComponent__BackFriendRemoveConfirmRefreshShowFriend(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x0
  const MethodInfo *v5; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4E72076 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4E72076 = 1;
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
            v3),
          (classButtonControl = this->fields.classButtonControl) == 0)
      || (operationConfirmMenu = (FriendOperationConfirmMenu_o *)this->fields.operationItemListViewManager) == 0
      || (FriendOperationItemListViewManager__CreateList(
            (FriendOperationItemListViewManager_o *)operationConfirmMenu,
            3,
            classButtonControl->fields.currentCursor,
            v5),
          operationItemListViewManager = this->fields.operationItemListViewManager,
          v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
          FriendOperationItemListViewManager_CallbackFunc___ctor(
            v8,
            (Il2CppObject *)this,
            (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
            v9),
          !operationItemListViewManager) )
    {
LABEL_11:
      sub_1D0F30C(operationConfirmMenu, v3);
    }
    operationItemListViewManager->fields.callbackFunc = v8;
    sub_1D0F058(&operationItemListViewManager->fields.callbackFunc, v8);
    FriendOperationItemListViewManager__SetMode_33858428(operationItemListViewManager, 2, v10);
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

  if ( (byte_4E72063 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4E72063 = 1;
  }
  if ( this->fields.state == 23 )
  {
    this->fields.state = 24;
    FriendRootComponent__RefreshInfo(this, method);
    this->fields.selectFriendEntity = 0;
    sub_1D0F058(&this->fields.selectFriendEntity, 0);
    friendSearchResultMenu = this->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu
      || (FriendSearchResultMenu__Close_33886436(friendSearchResultMenu, 0, v4),
          friendSearchMenu = this->fields.friendSearchMenu,
          v7 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo),
          System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0),
          !friendSearchMenu) )
    {
      sub_1D0F30C(friendSearchResultMenu, v3);
    }
    FriendSearchMenu__Close_33884272(friendSearchMenu, v7, v8);
  }
}


void FriendRootComponent__BackShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4E7205B & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4E7205B = 1;
  }
  if ( this->fields.state == 4 )
  {
    this->fields.state = 5;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
    if ( !operationItemListViewManager )
      sub_1D0F30C(v5, v6);
    operationItemListViewManager->fields.callbackFunc2 = v4;
    sub_1D0F058(&operationItemListViewManager->fields.callbackFunc2, v4);
    FriendOperationItemListViewManager__SetMode_33858428(operationItemListViewManager, 4, v7);
  }
}


void FriendRootComponent__BackShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1

  if ( (byte_4E7205D & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4E7205D = 1;
  }
  if ( this->fields.state == 9 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
    if ( !operationItemListViewManager )
      sub_1D0F30C(v5, v6);
    operationItemListViewManager->fields.callbackFunc2 = v4;
    sub_1D0F058(&operationItemListViewManager->fields.callbackFunc2, v4);
    FriendOperationItemListViewManager__SetMode_33858428(operationItemListViewManager, 4, v7);
    FriendRootComponent__RefreshInfo(this, v8);
    this->fields.state = 10;
  }
}


void FriendRootComponent__BackShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4E7205F & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4E7205F = 1;
  }
  if ( this->fields.state == 14 )
  {
    this->fields.state = 15;
    FriendRootComponent__RefreshInfo(this, method);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
    if ( !operationItemListViewManager )
      sub_1D0F30C(v5, v6);
    operationItemListViewManager->fields.callbackFunc2 = v4;
    sub_1D0F058(&operationItemListViewManager->fields.callbackFunc2, v4);
    FriendOperationItemListViewManager__SetMode_33858428(operationItemListViewManager, 4, v7);
  }
}


void FriendRootComponent__BackShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4E72061 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4E72061 = 1;
  }
  if ( this->fields.state == 19 )
  {
    this->fields.state = 20;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    v4 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
    if ( !operationItemListViewManager )
      sub_1D0F30C(v5, v6);
    operationItemListViewManager->fields.callbackFunc2 = v4;
    sub_1D0F058(&operationItemListViewManager->fields.callbackFunc2, v4);
    FriendOperationItemListViewManager__SetMode_33858428(operationItemListViewManager, 4, v7);
  }
}


void FriendRootComponent__CheckHelpUI(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_String_o **v3; // x9
  System_String_o *v4; // x20
  UILabel_o *helpLabel; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4E72053 & 1) == 0 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_6606/*"FRIEND_LOCK_HELP_TEXT"*/);
    sub_1D0F0B4(&StringLiteral_6604/*"FRIEND_HELP_TEXT"*/);
    byte_4E72053 = 1;
  }
  v3 = (System_String_o **)&StringLiteral_6604/*"FRIEND_HELP_TEXT"*/;
  if ( this->fields.isActiveModeKindButtons && this->fields.currentModeKind == 1 )
    v3 = (System_String_o **)&StringLiteral_6606/*"FRIEND_LOCK_HELP_TEXT"*/;
  v4 = *v3;
  helpLabel = this->fields.helpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get(v4, 0);
  if ( !helpLabel )
    sub_1D0F30C(v6, v7);
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

  if ( (byte_4E72087 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_17912/*"button_alllock_unreg"*/);
    sub_1D0F0B4(&StringLiteral_17918/*"button_infocheck_unreg"*/);
    sub_1D0F0B4(&StringLiteral_17917/*"button_infocheck_reg"*/);
    sub_1D0F0B4(&StringLiteral_17911/*"button_alllock_reg"*/);
    byte_4E72087 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserFollowMaster___);
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
    sub_1D0F30C(Instance, v4);
  }
LABEL_21:
  Instance = (DataManager_o *)this->fields.modeUserDetailSprite;
  if ( !Instance )
    goto LABEL_31;
  currentModeKind = this->fields.currentModeKind;
  v14 = StringLiteral_17911/*"button_alllock_reg"*/;
  v15 = StringLiteral_17912/*"button_alllock_unreg"*/;
  v16 = (System_String_o **)(currentModeKind ? &StringLiteral_17918/*"button_infocheck_unreg"*/ : &StringLiteral_17917/*"button_infocheck_reg"*/);
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

  if ( (byte_4E72057 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_8747/*"MENU_OPERATION_FRIEND"*/);
    sub_1D0F0B4(&StringLiteral_8749/*"MENU_OPERATION_OFFERED"*/);
    sub_1D0F0B4(&StringLiteral_8750/*"MENU_OPERATION_SEARCH"*/);
    byte_4E72057 = 1;
  }
  tabKind = FriendRootComponent__get_tabKind(this, method);
  switch ( tabKind )
  {
    case 2:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v6 = &StringLiteral_8750/*"MENU_OPERATION_SEARCH"*/;
        goto LABEL_12;
      }
LABEL_14:
      sub_1D0F30C(myFSM, v4);
    case 1:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v6 = &StringLiteral_8749/*"MENU_OPERATION_OFFERED"*/;
        goto LABEL_12;
      }
      goto LABEL_14;
    case 0:
      myFSM = this->fields.myFSM;
      if ( myFSM )
      {
        v6 = &StringLiteral_8747/*"MENU_OPERATION_FRIEND"*/;
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
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4E72068 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4E72068 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v5);
  if ( !operationItemListViewManager )
    sub_1D0F30C(v6, v7);
  operationItemListViewManager->fields.callbackFunc = v4;
  sub_1D0F058(&operationItemListViewManager->fields.callbackFunc, v4);
  FriendOperationItemListViewManager__SetMode_33858428(operationItemListViewManager, 2, v8);
}


void FriendRootComponent__EndCloseShowServantEquip(FriendRootComponent_o *this, const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4E72091 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4E72091 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v4 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v5);
  if ( !operationItemListViewManager )
    sub_1D0F30C(v6, v7);
  operationItemListViewManager->fields.callbackFunc = v4;
  sub_1D0F058(&operationItemListViewManager->fields.callbackFunc, v4);
  FriendOperationItemListViewManager__SetMode_33858428(operationItemListViewManager, 2, v8);
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

  if ( (byte_4E72054 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1D0F0B4(&FriendRootComponent_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E72054 = 1;
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
    Instance = (OtherUserGameEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (OtherUserGameEntity_array *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
    sub_1D0F30C(Instance, v6);
  }
LABEL_23:
  FriendRootComponent__InitModeKindButtons(this, (const MethodInfo *)result);
  FriendRootComponent__RefreshTab(this, v11);
  FriendRootComponent__RefreshInfo(this, v12);
  MainMenuBar__setMenuActive(1, 0, 0);
  SceneRootComponent__beginStartUp_42858752((SceneRootComponent_o *)this, 0);
}


void FriendRootComponent__EndFriendRequest2(
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

  if ( (byte_4E720A7 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4E720A7 = 1;
  }
  FriendRootComponent__RefreshInfo(this, (const MethodInfo *)result);
  classButtonControl = this->fields.classButtonControl;
  if ( !classButtonControl
    || (operationItemListViewManager = this->fields.operationItemListViewManager) == 0
    || (FriendOperationItemListViewManager__CreateList(
          operationItemListViewManager,
          3,
          classButtonControl->fields.currentCursor,
          v6),
        v8 = this->fields.operationItemListViewManager,
        v9 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          v10),
        !v8) )
  {
    sub_1D0F30C(operationItemListViewManager, v5);
  }
  v8->fields.callbackFunc = v9;
  sub_1D0F058(&v8->fields.callbackFunc, v9);
  FriendOperationItemListViewManager__SetMode_33858428(v8, 2, v11);
  this->fields.state = 4;
}


void FriendRootComponent__EndLoadOutGameAtlas(FriendRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4E72050 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4E72050 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1D0F30C(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__EndMaxFollowWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4E7209F & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_8744/*"MENU_CANCEL"*/);
    byte_4E7209F = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1D0F30C(0, isDecide);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8744/*"MENU_CANCEL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__EndMaxFriendWarning(FriendRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  FriendWarningDialog_o *friendWarningDialog; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x2

  if ( (byte_4E72093 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectFriendItem__);
    byte_4E72093 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close_33918340(friendWarningDialog, 0, method),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v6 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo),
        FriendOperationItemListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
          v7),
        !operationItemListViewManager) )
  {
    sub_1D0F30C(friendWarningDialog, isDecide);
  }
  operationItemListViewManager->fields.callbackFunc = v6;
  sub_1D0F058(&operationItemListViewManager->fields.callbackFunc, v6);
  FriendOperationItemListViewManager__SetMode_33858428(operationItemListViewManager, 2, v8);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__EndMaxFriendWarningOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4E72094 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_8744/*"MENU_CANCEL"*/);
    byte_4E72094 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1D0F30C(0, isDecide);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_8744/*"MENU_CANCEL"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__EndNoSearchWarning(FriendRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  FriendWarningDialog_o *friendWarningDialog; // x0
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3

  if ( (byte_4E72081 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectSearchFriend__);
    sub_1D0F0B4(&StringLiteral_11242/*"REQUEST_NG"*/);
    byte_4E72081 = 1;
  }
  friendWarningDialog = this->fields.friendWarningDialog;
  if ( !friendWarningDialog
    || (FriendWarningDialog__Close_33918340(friendWarningDialog, 0, method),
        this->fields.state = 23,
        friendSearchMenu = this->fields.friendSearchMenu,
        v6 = (FriendSearchMenu_CallbackFunc_o *)sub_1D0F300(FriendSearchMenu_CallbackFunc_TypeInfo),
        FriendSearchMenu_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_FriendRootComponent_OnSelectSearchFriend__,
          v7),
        !friendSearchMenu)
    || (FriendSearchMenu__Open(friendSearchMenu, v6, 0, v8),
        (friendWarningDialog = (FriendWarningDialog_o *)this->fields.myFSM) == 0) )
  {
    sub_1D0F30C(friendWarningDialog, isDecide);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)friendWarningDialog, (System_String_o *)StringLiteral_11242/*"REQUEST_NG"*/, 0);
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

  if ( (byte_4E720A2 & 1) == 0 )
  {
    sub_1D0F0B4(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1D0F0B4(&Method_FriendRootComponent_OnEndRequestDialog__);
    sub_1D0F0B4(&JsonManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&StringLiteral_11244/*"REQUEST_OK"*/);
    sub_1D0F0B4(&StringLiteral_11242/*"REQUEST_NG"*/);
    sub_1D0F0B4(&StringLiteral_22648/*"ng"*/);
    sub_1D0F0B4(&StringLiteral_21969/*"message"*/);
    byte_4E720A2 = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22648/*"ng"*/, 0) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11242/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1D0F30C(myFSM, v5);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !myFSM )
    goto LABEL_17;
  v7 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21969/*"message"*/,
          (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_21969/*"message"*/,
                                                                       (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      v9 = &StringLiteral_11244/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v9, 0);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_1D0F300(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v11, (Il2CppObject *)this, Method_FriendRootComponent_OnEndRequestDialog__, 0);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_32089520(
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

  if ( (byte_4E720AB & 1) == 0 )
  {
    sub_1D0F0B4(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1D0F0B4(&Method_FriendRootComponent_OnEndRequestDialog__);
    sub_1D0F0B4(&JsonManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&StringLiteral_11244/*"REQUEST_OK"*/);
    sub_1D0F0B4(&StringLiteral_11242/*"REQUEST_NG"*/);
    sub_1D0F0B4(&StringLiteral_22648/*"ng"*/);
    sub_1D0F0B4(&StringLiteral_21969/*"message"*/);
    byte_4E720AB = 1;
  }
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22648/*"ng"*/, 0) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11242/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1D0F30C(myFSM, v5);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !myFSM )
    goto LABEL_17;
  v7 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21969/*"message"*/,
          (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_21969/*"message"*/,
                                                                       (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      v9 = &StringLiteral_11244/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v9, 0);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_1D0F300(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v11, (Il2CppObject *)this, Method_FriendRootComponent_OnEndRequestDialog__, 0);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_32089520(
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

  if ( (byte_4E7207D & 1) == 0 )
  {
    sub_1D0F0B4(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1D0F0B4(&Method_FriendRootComponent_OnEndRequestDialog__);
    sub_1D0F0B4(&JsonManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&StringLiteral_11244/*"REQUEST_OK"*/);
    sub_1D0F0B4(&StringLiteral_11242/*"REQUEST_NG"*/);
    sub_1D0F0B4(&StringLiteral_22648/*"ng"*/);
    sub_1D0F0B4(&StringLiteral_21969/*"message"*/);
    byte_4E7207D = 1;
  }
  MainMenuBar__UpdateNoticeNumber(0);
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22648/*"ng"*/, 0) )
  {
    myFSM = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.myFSM;
    if ( myFSM )
    {
      v9 = &StringLiteral_11242/*"REQUEST_NG"*/;
      goto LABEL_14;
    }
LABEL_17:
    sub_1D0F30C(myFSM, v5);
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(result, 0);
  if ( !myFSM )
    goto LABEL_17;
  v7 = myFSM;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          myFSM,
          (Il2CppObject *)StringLiteral_21969/*"message"*/,
          (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_10;
  myFSM = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                       v7,
                                                                       (Il2CppObject *)StringLiteral_21969/*"message"*/,
                                                                       (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      v9 = &StringLiteral_11244/*"REQUEST_OK"*/;
LABEL_14:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myFSM, (System_String_o *)*v9, 0);
      return;
    }
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (NotificationDialog_ClickDelegate_o *)sub_1D0F300(NotificationDialog_ClickDelegate_TypeInfo);
  NotificationDialog_ClickDelegate___ctor(v11, (Il2CppObject *)this, Method_FriendRootComponent_OnEndRequestDialog__, 0);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__OpenNotificationDialog_32089520(
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
  __int64 *v9; // x8
  const MethodInfo *v10; // x1

  if ( (byte_4E72080 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_11244/*"REQUEST_OK"*/);
    sub_1D0F0B4(&StringLiteral_22821/*"ok"*/);
    sub_1D0F0B4(&StringLiteral_11242/*"REQUEST_NG"*/);
    byte_4E72080 = 1;
  }
  if ( !System_String__op_Equality(result, (System_String_o *)StringLiteral_22821/*"ok"*/, 0) )
    goto LABEL_11;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_OtherUserGameMaster___);
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
    sub_1D0F058(&this->fields.selectFriendEntity, 0);
    FriendRootComponent__StartSearchInput(this, v10);
    Instance = this->fields.myFSM;
    if ( Instance )
    {
      v9 = &StringLiteral_11242/*"REQUEST_NG"*/;
      goto LABEL_13;
    }
LABEL_14:
    sub_1D0F30C(Instance, v6);
  }
  if ( !(_DWORD)v7 )
    sub_1D0F314(Instance);
  v8 = (struct OtherUserGameEntity_o *)*((_QWORD *)Instance + 4);
  this->fields.selectFriendEntity = v8;
  sub_1D0F058(&this->fields.selectFriendEntity, v8);
  Instance = this->fields.myFSM;
  if ( !Instance )
    goto LABEL_14;
  v9 = &StringLiteral_11244/*"REQUEST_OK"*/;
LABEL_13:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v9, 0);
}


void FriendRootComponent__EndShowServant(FriendRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v11; // x21

  if ( (byte_4E72067 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_EndCloseShowServant__);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectFriendItem__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E72067 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
  FriendOperationItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
    v6);
  if ( !operationItemListViewManager
    || (operationItemListViewManager->fields.callbackFunc = v5,
        sub_1D0F058(&operationItemListViewManager->fields.callbackFunc, v5),
        FriendOperationItemListViewManager__SetMode_33858428(operationItemListViewManager, 5, v9),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo),
        System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServant__, 0),
        !Instance) )
  {
    sub_1D0F30C(v7, v8);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v11, 0);
}


void FriendRootComponent__EndShowServantEquip(FriendRootComponent_o *this, bool isDecide, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4E72090 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_EndCloseShowServantEquip__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E72090 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendRootComponent_EndCloseShowServantEquip__, 0);
  if ( !Instance )
    sub_1D0F30C(v6, v7);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void FriendRootComponent__FriendLockRequst(
        FriendRootComponent_o *this,
        System_Action_string__o *onFinishedRequest,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *items; // x1
  System_Collections_Generic_List_long__o *v8; // x21
  System_Collections_Generic_List_long__o *v9; // x22
  System_Collections_Generic_List_long__o *v10; // x23
  System_Collections_Generic_List_long__o *v11; // x24
  int32_t ItemSum; // w0
  const MethodInfo *v13; // x2
  int32_t v14; // w25
  int dragParentObject; // w8
  ListViewManager_o *v16; // x26
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x8
  struct System_Int64_array *v18; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *v22; // x8
  struct System_Int64_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  struct System_Int64_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  struct System_Int64_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8
  System_Collections_Generic_List_long__o *v33; // x0
  NetworkManager_ResultCallbackFunc_o *v34; // x19
  FirendLockSyncRequest_o *v35; // x19
  System_Int64_array *v36; // x20
  System_Int64_array *v37; // x21
  System_Int64_array *v38; // x22

  if ( (byte_4E7208D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_ActionExtensions_Call_string___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1D0F0B4(&Method_NetworkManager_getRequest_FirendLockSyncRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent___c__DisplayClass112_0__FriendLockRequst_b__0__);
    sub_1D0F0B4(&FriendRootComponent___c__DisplayClass112_0_TypeInfo);
    sub_1D0F0B4(&StringLiteral_22821/*"ok"*/);
    byte_4E7208D = 1;
  }
  v5 = sub_1D0F300(FriendRootComponent___c__DisplayClass112_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_49;
  *(_QWORD *)(v5 + 16) = this;
  sub_1D0F058(v5 + 16, this);
  *(_QWORD *)(v5 + 32) = onFinishedRequest;
  sub_1D0F058(v5 + 32, onFinishedRequest);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_49;
  if ( FriendOperationItemListViewManager__get_IsExistSwapLockUser(
         (FriendOperationItemListViewManager_o *)operationItemListViewManager,
         items) )
  {
    v8 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v8,
      (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
    v9 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v9,
      (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
    v10 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v10,
      (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
    v11 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v11,
      (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
    operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
    if ( operationItemListViewManager )
    {
      ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0);
      *(_DWORD *)(v5 + 24) = ItemSum;
      if ( ItemSum >= 1 )
      {
        v14 = 0;
        while ( 1 )
        {
          operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_49;
          operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                (FriendOperationItemListViewManager_o *)operationItemListViewManager,
                                                                v14,
                                                                v13);
          if ( !operationItemListViewManager )
            goto LABEL_49;
          dragParentObject = (int)operationItemListViewManager->fields.dragParentObject;
          v16 = operationItemListViewManager;
          if ( dragParentObject == 9 )
            break;
          if ( dragParentObject == 3 )
          {
            operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewItem__get_IsLockDisp(
                                                                  (FriendOperationItemListViewItem_o *)operationItemListViewManager,
                                                                  0);
            dropList = v16->fields.dropList;
            if ( !dropList )
              goto LABEL_49;
            items = (const MethodInfo *)dropList->fields._items;
            if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
            {
              if ( !v8 )
                goto LABEL_49;
              v18 = v8->fields._items;
              v19 = Method_System_Collections_Generic_List_long__Add__;
              ++v8->fields._version;
              if ( !v18 )
                goto LABEL_49;
              size = v8->fields._size;
              if ( (unsigned int)size >= LODWORD(v18->max_length) )
              {
                v32 = v19[4];
                v33 = v8;
LABEL_38:
                System_Collections_Generic_List_long___AddWithResize(
                  v33,
                  (int64_t)items,
                  *(const MethodInfo_3944444 **)(*(_QWORD *)(v32 + 192) + 112LL));
                goto LABEL_39;
              }
              v21 = &v18->obj.klass + size;
              v8->fields._size = size + 1;
            }
            else
            {
              if ( !v9 )
                goto LABEL_49;
              v26 = v9->fields._items;
              v27 = Method_System_Collections_Generic_List_long__Add__;
              ++v9->fields._version;
              if ( !v26 )
                goto LABEL_49;
              v28 = v9->fields._size;
              if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
              {
                v32 = v27[4];
                v33 = v9;
                goto LABEL_38;
              }
              v21 = &v26->obj.klass + v28;
              v9->fields._size = v28 + 1;
            }
LABEL_33:
            v21[4] = (Il2CppClass *)items;
          }
LABEL_39:
          if ( ++v14 >= *(_DWORD *)(v5 + 24) )
            goto LABEL_40;
        }
        operationItemListViewManager = (ListViewManager_o *)FriendOperationItemListViewItem__get_IsLockDisp(
                                                              (FriendOperationItemListViewItem_o *)operationItemListViewManager,
                                                              0);
        v22 = v16->fields.dropList;
        if ( !v22 )
          goto LABEL_49;
        items = (const MethodInfo *)v22->fields._items;
        if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_49;
          v23 = v10->fields._items;
          v24 = Method_System_Collections_Generic_List_long__Add__;
          ++v10->fields._version;
          if ( !v23 )
            goto LABEL_49;
          v25 = v10->fields._size;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            v32 = v24[4];
            v33 = v10;
            goto LABEL_38;
          }
          v21 = &v23->obj.klass + v25;
          v10->fields._size = v25 + 1;
        }
        else
        {
          if ( !v11 )
            goto LABEL_49;
          v29 = v11->fields._items;
          v30 = Method_System_Collections_Generic_List_long__Add__;
          ++v11->fields._version;
          if ( !v29 )
            goto LABEL_49;
          v31 = v11->fields._size;
          if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
          {
            v32 = v30[4];
            v33 = v11;
            goto LABEL_38;
          }
          v21 = &v29->obj.klass + v31;
          v11->fields._size = v31 + 1;
        }
        goto LABEL_33;
      }
LABEL_40:
      v34 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v34,
        (Il2CppObject *)v5,
        Method_FriendRootComponent___c__DisplayClass112_0__FriendLockRequst_b__0__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_object_(
                                                            v34,
                                                            (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_FirendLockSyncRequest___);
      if ( v8 )
      {
        v35 = (FirendLockSyncRequest_o *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v8,
                                                              (const MethodInfo_3945EFC *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v9 )
        {
          v36 = (System_Int64_array *)operationItemListViewManager;
          operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                v9,
                                                                (const MethodInfo_3945EFC *)Method_System_Collections_Generic_List_long__ToArray__);
          if ( v10 )
          {
            v37 = (System_Int64_array *)operationItemListViewManager;
            operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                  v10,
                                                                  (const MethodInfo_3945EFC *)Method_System_Collections_Generic_List_long__ToArray__);
            if ( v11 )
            {
              v38 = (System_Int64_array *)operationItemListViewManager;
              operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                                    v11,
                                                                    (const MethodInfo_3945EFC *)Method_System_Collections_Generic_List_long__ToArray__);
              if ( v35 )
              {
                FirendLockSyncRequest__beginRequest(
                  v35,
                  v36,
                  v37,
                  v38,
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
    sub_1D0F30C(operationItemListViewManager, items);
  }
  ActionExtensions__Call_object_(
    *(System_Action_T__o **)(v5 + 32),
    (Il2CppObject *)StringLiteral_22821/*"ok"*/,
    (const MethodInfo_31932D8 *)Method_ActionExtensions_Call_string___);
}


UnityEngine_Vector3_o FriendRootComponent__GetDisplayPositionModeKindButtons(
        FriendRootComponent_o *this,
        const MethodInfo *method)
{
  FriendRootComponent_o *v2; // x19
  struct UISprite_o *modeEditLockSprite; // x8
  int mWidth; // w20
  float y; // s8
  float z; // s9
  float v7; // s10
  float v8; // s1
  float v9; // s2
  float v10; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4E72088 & 1) == 0 )
  {
    this = (FriendRootComponent_o *)sub_1D0F0B4(&FSUtility_TypeInfo);
    byte_4E72088 = 1;
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
    sub_1D0F30C(this, method);
  }
  v12 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  z = v12.fields.z;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  v7 = (float)mWidth;
  if ( !FSUtility__IsUnderVista(0) )
  {
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v7 = v7 - FSUtility__GetOffsetX(74.0, 1, 0);
  }
  v8 = y;
  v9 = z;
  v10 = v7;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v10;
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
    sub_1D0F30C(modeButtonParent, method);
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
    sub_1D0F30C(modeButtonParent, method);
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

  if ( (byte_4E72083 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FriendRootComponent_OnClickBack__);
    sub_1D0F0B4(&Method_FriendRootComponent__OnClickBack_b__99_0__);
    sub_1D0F0B4(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_4E72083 = 1;
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
    v4 = (_QWORD *)sub_1D0F0CC(Method_FriendRootComponent_OnClickBack__);
  v5 = (System_Reflection_MethodBase_o *)sub_1D0F098(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  v6 = (FriendRootComponent_messageRequestCallback_o *)sub_1D0F300(FriendRootComponent_messageRequestCallback_TypeInfo);
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

  if ( (byte_4E720AC & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FriendRootComponent_OnClickHelp__);
    byte_4E720AC = 1;
  }
  v2 = Method_FriendRootComponent_OnClickHelp__;
  if ( (*((_BYTE *)Method_FriendRootComponent_OnClickHelp__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1D0F0CC(Method_FriendRootComponent_OnClickHelp__);
  v3 = (System_Reflection_MethodBase_o *)sub_1D0F098(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  EventTutorialMaster__ShowTutorialWithoutCheck(-1, 49, 0, 0, 0);
}


void FriendRootComponent__OnClickModeEditLock(FriendRootComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4E72086 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FriendRootComponent_OnClickModeEditLock__);
    byte_4E72086 = 1;
  }
  if ( this->fields.currentModeKind != 1 )
  {
    v3 = Method_FriendRootComponent_OnClickModeEditLock__;
    if ( (*((_BYTE *)Method_FriendRootComponent_OnClickModeEditLock__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_FriendRootComponent_OnClickModeEditLock__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    this->fields.currentModeKind = 1;
    FriendRootComponent__RefreshInfo(this, v5);
  }
}


void FriendRootComponent__OnClickModeUserDetail(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4E72085 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_string__TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent__OnClickModeUserDetail_b__101_0__);
    byte_4E72085 = 1;
  }
  if ( this->fields.currentModeKind )
  {
    v3 = (System_Action_object__o *)sub_1D0F300(System_Action_string__TypeInfo);
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

  if ( (byte_4E72089 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_string__TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent__OnClickTabFriend_b__108_0__);
    byte_4E72089 = 1;
  }
  v3 = (System_Action_object__o *)sub_1D0F300(System_Action_string__TypeInfo);
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

  if ( (byte_4E7208A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FriendRootComponent__OnClickTabOffered_b__109_0__);
    sub_1D0F0B4(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_4E7208A = 1;
  }
  v3 = (FriendRootComponent_messageRequestCallback_o *)sub_1D0F300(FriendRootComponent_messageRequestCallback_TypeInfo);
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

  if ( (byte_4E7208B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FriendRootComponent__OnClickTabSearch_b__110_0__);
    sub_1D0F0B4(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_4E7208B = 1;
  }
  v3 = (FriendRootComponent_messageRequestCallback_o *)sub_1D0F300(FriendRootComponent_messageRequestCallback_TypeInfo);
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

  if ( (byte_4E7207E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&StringLiteral_11244/*"REQUEST_OK"*/);
    byte_4E7207E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.myFSM) == 0) )
    sub_1D0F30C(Instance, v5);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_11244/*"REQUEST_OK"*/, 0);
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
  const MethodInfo *v10; // x2
  FriendOperationItemListViewManager_o *v11; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v12; // x21
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  FriendSearchMenu_o *friendSearchMenu; // x20
  FriendSearchMenu_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  FriendOperationItemListViewManager_o *v20; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x1
  struct ClassButtonControlComponent_o *v25; // x8
  FriendSearchMenu_o *v26; // x20
  FriendSearchMenu_CallbackFunc_o *v27; // x21
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3

  v3 = this;
  if ( (byte_4E72082 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectFriendItem__);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectSearchFriend__);
    this = (FriendRootComponent_o *)sub_1D0F0B4(&StringLiteral_5490/*"END_ACTION"*/);
    byte_4E72082 = 1;
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
                                                                               0);
      if ( !operationItemListViewManager )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0);
      goto LABEL_27;
    case 7:
    case 8:
      v3->fields.state = 9;
      v7 = v3->fields.operationItemListViewManager;
      v8 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v8,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v9);
      if ( !v7 )
        goto LABEL_39;
      v7->fields.callbackFunc = v8;
      sub_1D0F058(&v7->fields.callbackFunc, v8);
      FriendOperationItemListViewManager__SetMode_33858428(v7, 2, v10);
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
      v12 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v13);
      if ( !v11 )
        goto LABEL_39;
      v11->fields.callbackFunc = v12;
      sub_1D0F058(&v11->fields.callbackFunc, v12);
      FriendOperationItemListViewManager__SetMode_33858428(v11, 2, v14);
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
      v20 = v3->fields.operationItemListViewManager;
      v21 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      FriendOperationItemListViewManager_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)v3,
        (intptr_t)Method_FriendRootComponent_OnSelectFriendItem__,
        v22);
      if ( !v20 )
        goto LABEL_39;
      v20->fields.callbackFunc = v21;
      sub_1D0F058(&v20->fields.callbackFunc, v21);
      FriendOperationItemListViewManager__SetMode_33858428(v20, 2, v23);
      goto LABEL_28;
    case 0x14:
    case 0x15:
      v3->fields.state = 23;
      friendSearchMenu = v3->fields.friendSearchMenu;
      v17 = (FriendSearchMenu_CallbackFunc_o *)sub_1D0F300(FriendSearchMenu_CallbackFunc_TypeInfo);
      FriendSearchMenu_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        v18);
      if ( !friendSearchMenu )
        goto LABEL_39;
      FriendSearchMenu__Open(friendSearchMenu, v17, 0, v19);
      operationItemListViewManager = v3->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_39;
      FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, method);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5490/*"END_ACTION"*/, 0);
      break;
    case 0x16:
      jumpTabKind = v3->fields.jumpTabKind;
      v3->fields.state = 23;
      if ( jumpTabKind == 3 )
        FriendRootComponent__set_tabKind(this, 2, v2);
      FriendRootComponent__RefreshTab(v3, method);
      FriendRootComponent__RefreshInfo(v3, v24);
      v25 = v3->fields.classButtonControl;
      if ( !v25 )
        goto LABEL_39;
      v25->fields.updateEnable = 1;
      v26 = v3->fields.friendSearchMenu;
      v27 = (FriendSearchMenu_CallbackFunc_o *)sub_1D0F300(FriendSearchMenu_CallbackFunc_TypeInfo);
      FriendSearchMenu_CallbackFunc___ctor(
        v27,
        (Il2CppObject *)v3,
        Method_FriendRootComponent_OnSelectSearchFriend__,
        v28);
      if ( !v26 )
        goto LABEL_39;
      FriendSearchMenu__Open(v26, v27, 1, v29);
LABEL_18:
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)v3->fields.myFSM;
      if ( !operationItemListViewManager )
LABEL_39:
        sub_1D0F30C(operationItemListViewManager, method);
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5490/*"END_ACTION"*/, 0);
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
  const MethodInfo *v10; // x2
  Il2CppObject *MasterData_object; // x22
  __int64 v12; // x8
  __int64 v13; // x20
  SkillInfo_o *v14; // x22
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  System_String_o *v17; // x20
  System_String_o *v18; // x21
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x20
  FriendOperationItemListViewManager_CallbackFunc_o *v24; // x0
  const MethodInfo *v25; // x3
  void *v26; // x2
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  const MethodInfo *v29; // x2
  FriendOperationItemListViewItem_o *v30; // x22
  __int64 v31; // x8
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v33; // x21
  __int64 v34; // x20
  SkillInfo_o *v35; // x25
  Il2CppObject *v36; // x22
  DataManager_o *v37; // x20
  int32_t ServantId; // w22
  int32_t DispLimitCountStageSealAfterAtStageLimitCount; // w21
  System_String_o *v40; // x21
  System_String_o *v41; // x22
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  System_String_o *v44; // x21
  Il2CppObject *v45; // x0
  System_String_o *v46; // x20
  _QWORD *v47; // x0
  System_Reflection_MethodBase_o *v48; // x0
  __int64 *v49; // x8
  _QWORD *v50; // x0
  System_Reflection_MethodBase_o *v51; // x0
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  _QWORD *v54; // x0
  System_Reflection_MethodBase_o *v55; // x0
  _QWORD *v56; // x0
  System_Reflection_MethodBase_o *v57; // x0
  const MethodInfo *v58; // x2
  DataManager_o *v59; // x8
  const MethodInfo *v60; // x2
  _QWORD *v61; // x0
  System_Reflection_MethodBase_o *v62; // x0
  const MethodInfo *v63; // x2
  DataManager_o *v64; // x8
  __int64 v65; // x9
  ServantLeaderInfo_o *v66; // x0
  const MethodInfo *v67; // x2
  _QWORD *v68; // x0
  System_Reflection_MethodBase_o *v69; // x0
  const MethodInfo *v70; // x2
  FriendOperationItemListViewItem_o *v71; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  EquipTargetInfo_o *EquipTargetInfo; // x0
  EquipTargetInfo_o *v74; // x21
  __int64 v75; // x22
  __int64 v76; // x23
  _QWORD *v77; // x0
  System_Reflection_MethodBase_o *v78; // x0
  const MethodInfo *v79; // x3
  int32_t v80; // w2
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v82; // x21
  const MethodInfo *v83; // x3
  const MethodInfo *v84; // x3
  _QWORD *v85; // x0
  System_Reflection_MethodBase_o *v86; // x0
  struct FriendOperationItemListViewManager_CallbackFunc_o *v87; // x21
  const MethodInfo *v88; // x2
  FriendOperationItemListViewItem_o *Item; // x0
  FriendOperationItemListViewItem_o *v90; // x20
  _QWORD *v91; // x0
  System_Reflection_MethodBase_o *v92; // x0
  int m_CancellationTokenSource; // [xsp+0h] [xbp-80h] BYREF
  int32_t lv; // [xsp+4h] [xbp-7Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-78h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-70h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-68h] BYREF
  ServantLimitAddEntity_o *entity; // [xsp+20h] [xbp-60h] BYREF
  System_String_o *v99; // [xsp+28h] [xbp-58h] BYREF
  System_String_o *defaultName; // [xsp+30h] [xbp-50h] BYREF
  SkillInfo_array *v101; // [xsp+38h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16

  if ( (byte_4E72092 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_ServantLimitAddMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_FriendRootComponent_EndMaxFriendWarning__);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectFriendItem__);
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_8758/*"MENU_SELECT_ITEM_ACCEPT"*/);
    sub_1D0F0B4(&StringLiteral_113/*" "*/);
    sub_1D0F0B4(&StringLiteral_8764/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/);
    sub_1D0F0B4(&StringLiteral_8759/*"MENU_SELECT_ITEM_CANCEL"*/);
    sub_1D0F0B4(&StringLiteral_8652/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_1D0F0B4(&StringLiteral_8761/*"MENU_SELECT_ITEM_OFFER"*/);
    sub_1D0F0B4(&StringLiteral_2890/*"BATTLE_SKILLCHARGETURN"*/);
    sub_1D0F0B4(&StringLiteral_8762/*"MENU_SELECT_ITEM_REJECT"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    sub_1D0F0B4(&StringLiteral_8763/*"MENU_SELECT_ITEM_REMOVE"*/);
    byte_4E72092 = 1;
  }
  defaultName = 0;
  v101 = 0;
  entity = 0;
  v99 = 0;
  name = 0;
  skillInfoList = 0;
  detail = 0;
  this->fields.selectItemNum = n;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_141;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  switch ( kind )
  {
    case 1:
    case 2:
    case 3:
      v27 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v27 = (_QWORD *)sub_1D0F0CC(Method_FriendRootComponent_OnSelectFriendItem__);
      v28 = (System_Reflection_MethodBase_o *)sub_1D0F098(v27, v27[4]);
      OverwriteAssetSoundName__PlaySystemSe(v28, 0, 0, 0);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_141;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v29);
      if ( !Instance )
        goto LABEL_141;
      v30 = (FriendOperationItemListViewItem_o *)Instance;
      Instance = (DataManager_o *)Instance->fields.writeMasterDataThread;
      if ( !Instance )
        goto LABEL_141;
      v31 = *(_QWORD *)&Instance->fields.nowLoadCount;
      if ( !v31 )
        goto LABEL_141;
      if ( !*(_DWORD *)(v31 + 24) )
        goto LABEL_142;
      ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                            (OtherUserGameEntity_o *)Instance,
                            v30->fields.classPos,
                            0,
                            0,
                            *(_DWORD *)(v31 + 32),
                            0,
                            0);
      if ( !ServantLeaderInfo )
        goto LABEL_63;
      v33 = ServantLeaderInfo;
      if ( kind == 2 )
        v34 = 1;
      else
        v34 = 2LL * (kind == 3);
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetSkillInfo(v30, &v101, 0);
      if ( !v101 )
        goto LABEL_141;
      if ( (unsigned int)v34 >= LODWORD(v101->max_length) )
        goto LABEL_142;
      v35 = v101->m_Items[v34];
      if ( !v35 || v35->fields.id < 1 || v35->fields.lv < 1 )
        goto LABEL_63;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_141;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !Instance )
        goto LABEL_141;
      v36 = DataMasterBase_object__object__int___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
              v35->fields.id,
              (const MethodInfo_3535B7C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_141;
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !Instance )
        goto LABEL_141;
      Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                    (SkillLvMaster_o *)Instance,
                                    v35->fields.id,
                                    v35->fields.lv,
                                    0);
      if ( !v36 )
        goto LABEL_141;
      v37 = Instance;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)v36, &defaultName, &v99, v35->fields.lv, 0);
      ServantId = ServantLeaderInfo__GetServantId(v33, -1, 0);
      DispLimitCountStageSealAfterAtStageLimitCount = ServantLeaderInfo__GetDispLimitCountStageSealAfterAtStageLimitCount(
                                                        v33,
                                                        0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      if ( !Instance )
        goto LABEL_141;
      if ( !ServantLimitAddMaster__TryGetEntity(
              (ServantLimitAddMaster_o *)Instance,
              &entity,
              ServantId,
              DispLimitCountStageSealAfterAtStageLimitCount,
              0) )
        goto LABEL_58;
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_141;
      if ( !ServantLimitAddEntity__HasKeyOverwriteSkillName(entity, 0) )
        goto LABEL_58;
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_141;
      defaultName = ServantLimitAddEntity__GetOverwriteSkillName(entity, v35->fields.id, defaultName, 0);
LABEL_58:
      v40 = defaultName;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v41 = LocalizationManager__Get((System_String_o *)StringLiteral_8652/*"MASTER_EQSKILL_LV_TXT"*/, 0);
      lv = v35->fields.lv;
      v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
      v43 = System_String__Format(v41, v42, 0);
      defaultName = System_String__Concat_65601036(v40, (System_String_o *)StringLiteral_113/*" "*/, v43, 0);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2890/*"BATTLE_SKILLCHARGETURN"*/, 0);
      if ( !v37 )
        goto LABEL_141;
      v44 = (System_String_o *)Instance;
      m_CancellationTokenSource = (int)v37->fields.m_CancellationTokenSource;
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource);
      v46 = System_String__Format(v44, v45, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_141;
      CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, defaultName, v46, v99, 1, 0, 0);
LABEL_63:
      operationItemListViewManager = this->fields.operationItemListViewManager;
      v24 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
      v26 = Method_FriendRootComponent_OnSelectFriendItem__;
      goto LABEL_131;
    case 4:
      v47 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v47 = (_QWORD *)sub_1D0F0CC(Method_FriendRootComponent_OnSelectFriendItem__);
      v48 = (System_Reflection_MethodBase_o *)sub_1D0F098(v47, v47[4]);
      OverwriteAssetSoundName__PlaySystemSe(v48, 0, 0, 0);
      if ( !MasterData_object )
        goto LABEL_141;
      Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)MasterData_object, 3, 0);
      if ( !Instance || !SelfUserGame )
        goto LABEL_141;
      if ( SelfUserGame->fields.friendKeep <= SLODWORD(Instance->fields.m_CancellationTokenSource) )
        goto LABEL_125;
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_141;
      v49 = &StringLiteral_8761/*"MENU_SELECT_ITEM_OFFER"*/;
      goto LABEL_134;
    case 5:
      v50 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v50 = (_QWORD *)sub_1D0F0CC(Method_FriendRootComponent_OnSelectFriendItem__);
      v51 = (System_Reflection_MethodBase_o *)sub_1D0F098(v50, v50[4]);
      OverwriteAssetSoundName__PlaySystemSe(v51, 0, 0, 0);
      if ( !MasterData_object )
        goto LABEL_141;
      Instance = (DataManager_o *)TblFriendMaster__GetList((TblFriendMaster_o *)MasterData_object, 3, 0);
      if ( !Instance || !SelfUserGame )
        goto LABEL_141;
      if ( SelfUserGame->fields.friendKeep <= SLODWORD(Instance->fields.m_CancellationTokenSource) )
      {
LABEL_125:
        friendWarningDialog = this->fields.friendWarningDialog;
        v82 = (FriendWarningDialog_CallbackFunc_o *)sub_1D0F300(FriendWarningDialog_CallbackFunc_TypeInfo);
        FriendWarningDialog_CallbackFunc___ctor(
          v82,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndMaxFriendWarning__,
          v83);
        if ( friendWarningDialog )
        {
          FriendWarningDialog__Open(friendWarningDialog, 1, v82, v84);
          return;
        }
LABEL_141:
        sub_1D0F30C(Instance, v9);
      }
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_141;
      v49 = &StringLiteral_8758/*"MENU_SELECT_ITEM_ACCEPT"*/;
LABEL_134:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v49, 0);
      return;
    case 6:
      v52 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v52 = (_QWORD *)sub_1D0F0CC(Method_FriendRootComponent_OnSelectFriendItem__);
      v53 = (System_Reflection_MethodBase_o *)sub_1D0F098(v52, v52[4]);
      OverwriteAssetSoundName__PlaySystemSe(v53, 0, 0, 0);
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_141;
      v49 = &StringLiteral_8762/*"MENU_SELECT_ITEM_REJECT"*/;
      goto LABEL_134;
    case 7:
      v54 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v54 = (_QWORD *)sub_1D0F0CC(Method_FriendRootComponent_OnSelectFriendItem__);
      v55 = (System_Reflection_MethodBase_o *)sub_1D0F098(v54, v54[4]);
      OverwriteAssetSoundName__PlaySystemSe(v55, 0, 0, 0);
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_141;
      v49 = &StringLiteral_8759/*"MENU_SELECT_ITEM_CANCEL"*/;
      goto LABEL_134;
    case 8:
      v56 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v56 = (_QWORD *)sub_1D0F0CC(Method_FriendRootComponent_OnSelectFriendItem__);
      v57 = (System_Reflection_MethodBase_o *)sub_1D0F098(v56, v56[4]);
      OverwriteAssetSoundName__PlaySystemSe(v57, 0, 0, 0);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_141;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v58);
      if ( !Instance )
        goto LABEL_141;
      v59 = Instance;
      Instance = (DataManager_o *)this->fields.myFSM;
      if ( !Instance )
        goto LABEL_141;
      if ( LODWORD(v59->fields.context) == 9 )
        v49 = &StringLiteral_8764/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/;
      else
        v49 = &StringLiteral_8763/*"MENU_SELECT_ITEM_REMOVE"*/;
      goto LABEL_134;
    case 11:
      v68 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v68 = (_QWORD *)sub_1D0F0CC(Method_FriendRootComponent_OnSelectFriendItem__);
      v69 = (System_Reflection_MethodBase_o *)sub_1D0F098(v68, v68[4]);
      OverwriteAssetSoundName__PlaySystemSe(v69, 0, 0, 0);
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_141;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v70);
      if ( !Instance )
        goto LABEL_141;
      FriendOperationItemListViewItem__set_isSwapMessageDisp(
        (FriendOperationItemListViewItem_o *)Instance,
        !Instance[1].fields._DispLog,
        0);
      goto LABEL_130;
    case 12:
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_141;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v10);
      if ( !Instance )
        goto LABEL_141;
      v71 = (FriendOperationItemListViewItem_o *)Instance;
      ServantLeader = FriendOperationItemListViewItem__get_ServantLeader(
                        (FriendOperationItemListViewItem_o *)Instance,
                        0);
      if ( !ServantLeader || !ServantLeaderInfo__IsHideEquip(ServantLeader, 0) )
      {
        EquipTargetInfo = FriendOperationItemListViewItem__get_EquipTargetInfo(v71, 0);
        if ( EquipTargetInfo )
        {
          v74 = EquipTargetInfo;
          v76 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.currentCryptoKey;
          v75 = *(_QWORD *)&EquipTargetInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v102.fields.currentCryptoKey = v76;
          *(_QWORD *)&v102.fields.fakeValue = v75;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v102, 0) >= 1 )
          {
            v77 = Method_FriendRootComponent_OnSelectFriendItem__;
            if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
              v77 = (_QWORD *)sub_1D0F0CC(Method_FriendRootComponent_OnSelectFriendItem__);
            v78 = (System_Reflection_MethodBase_o *)sub_1D0F098(v77, v77[4]);
            OverwriteAssetSoundName__PlaySystemSe(v78, 0, 0, 0);
            if ( v71->fields.kind == 9 )
              v80 = 14;
            else
              v80 = 13;
            FriendRootComponent__SelectShowServantEquip(this, v74, v80, v79);
            return;
          }
        }
      }
      v85 = Method_FriendRootComponent_OnSelectFriendItem__;
      if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
        v85 = (_QWORD *)sub_1D0F0CC(Method_FriendRootComponent_OnSelectFriendItem__);
      v86 = (System_Reflection_MethodBase_o *)sub_1D0F098(v85, v85[4]);
      OverwriteAssetSoundName__PlaySystemSe(v86, 2, 0, 0);
      goto LABEL_130;
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
      Instance = (DataManager_o *)this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_141;
      Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                    (FriendOperationItemListViewManager_o *)Instance,
                                    this->fields.selectItemNum,
                                    v10);
      v12 = (unsigned int)(kind - 14);
      v13 = (unsigned int)v12 < 4 ? v12 + 1 : 0LL;
      if ( !Instance )
        goto LABEL_141;
      Instance = (DataManager_o *)FriendOperationItemListViewItem__GetAppendSkillInfo(
                                    (FriendOperationItemListViewItem_o *)Instance,
                                    &skillInfoList,
                                    0);
      if ( !skillInfoList )
        goto LABEL_141;
      if ( (unsigned int)v13 >= LODWORD(skillInfoList->max_length) )
        goto LABEL_142;
      v14 = skillInfoList->m_Items[v13];
      if ( v14 && v14->fields.id >= 1 && v14->fields.lv >= 1 )
      {
        v15 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v15 = (_QWORD *)sub_1D0F0CC(Method_FriendRootComponent_OnSelectFriendItem__);
        v16 = (System_Reflection_MethodBase_o *)sub_1D0F098(v15, v15[4]);
        OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !Instance )
          goto LABEL_141;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      v14->fields.id,
                                      (const MethodInfo_3535B7C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_141;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)Instance, &name, &detail, v14->fields.lv, 0);
        v17 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8652/*"MASTER_EQSKILL_LV_TXT"*/, 0);
        lv = v14->fields.lv;
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v20 = System_String__Format(v18, v19, 0);
        name = System_String__Concat_65601036(v17, (System_String_o *)StringLiteral_113/*" "*/, v20, 0);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_141;
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
        v21 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v21 = (_QWORD *)sub_1D0F0CC(Method_FriendRootComponent_OnSelectFriendItem__);
        v22 = (System_Reflection_MethodBase_o *)sub_1D0F098(v21, v21[4]);
        OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0, 0);
      }
      goto LABEL_28;
    default:
      if ( this->fields.currentModeKind == 1 && !FriendRootComponent__get_tabKind(this, v9) )
      {
        Instance = (DataManager_o *)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_141;
        Item = FriendOperationItemListViewManager__GetItem(
                 (FriendOperationItemListViewManager_o *)Instance,
                 this->fields.selectItemNum,
                 v60);
        if ( Item )
        {
          v90 = Item;
          v91 = Method_FriendRootComponent_OnSelectFriendItem__;
          if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
            v91 = (_QWORD *)sub_1D0F0CC(Method_FriendRootComponent_OnSelectFriendItem__);
          v92 = (System_Reflection_MethodBase_o *)sub_1D0F098(v91, v91[4]);
          OverwriteAssetSoundName__PlaySystemSe(v92, 11, 0, 0);
          FriendOperationItemListViewItem__SwapLock(v90, 0);
        }
LABEL_28:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        v24 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
        v26 = Method_FriendRootComponent_OnSelectFriendItem__;
      }
      else
      {
        v61 = Method_FriendRootComponent_OnSelectFriendItem__;
        if ( (*((_BYTE *)Method_FriendRootComponent_OnSelectFriendItem__ + 83) & 2) != 0 )
          v61 = (_QWORD *)sub_1D0F0CC(Method_FriendRootComponent_OnSelectFriendItem__);
        v62 = (System_Reflection_MethodBase_o *)sub_1D0F098(v61, v61[4]);
        OverwriteAssetSoundName__PlaySystemSe(v62, 0, 0, 0);
        Instance = (DataManager_o *)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_141;
        Instance = (DataManager_o *)FriendOperationItemListViewManager__GetItem(
                                      (FriendOperationItemListViewManager_o *)Instance,
                                      this->fields.selectItemNum,
                                      v63);
        if ( !Instance )
          goto LABEL_141;
        v64 = Instance;
        Instance = (DataManager_o *)Instance->fields.writeMasterDataThread;
        if ( !Instance )
          goto LABEL_141;
        v65 = *(_QWORD *)&Instance->fields.nowLoadCount;
        if ( !v65 )
          goto LABEL_141;
        if ( !*(_DWORD *)(v65 + 24) )
LABEL_142:
          sub_1D0F314(Instance);
        v66 = OtherUserGameEntity__getServantLeaderInfo(
                (OtherUserGameEntity_o *)Instance,
                (int32_t)v64[1].fields.m_CancellationTokenSource,
                0,
                0,
                *(_DWORD *)(v65 + 32),
                0,
                0);
        if ( v66 )
        {
          FriendRootComponent__SelectShowServant(this, v66, v67);
          return;
        }
LABEL_130:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        v24 = (FriendOperationItemListViewManager_CallbackFunc_o *)sub_1D0F300(FriendOperationItemListViewManager_CallbackFunc_TypeInfo);
        v26 = Method_FriendRootComponent_OnSelectFriendItem__;
      }
LABEL_131:
      v87 = v24;
      FriendOperationItemListViewManager_CallbackFunc___ctor(v24, (Il2CppObject *)this, (intptr_t)v26, v25);
      if ( operationItemListViewManager )
      {
        operationItemListViewManager->fields.callbackFunc = v87;
        sub_1D0F058(&operationItemListViewManager->fields.callbackFunc, v87);
        FriendOperationItemListViewManager__SetMode_33858428(operationItemListViewManager, 2, v88);
        return;
      }
      goto LABEL_141;
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

  if ( (byte_4E7209C & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_8760/*"MENU_SELECT_ITEM_FOLLOW"*/);
    sub_1D0F0B4(&StringLiteral_8761/*"MENU_SELECT_ITEM_OFFER"*/);
    sub_1D0F0B4(&StringLiteral_8744/*"MENU_CANCEL"*/);
    byte_4E7209C = 1;
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
      v8 = &StringLiteral_8760/*"MENU_SELECT_ITEM_FOLLOW"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1D0F30C(classButtonControl, *(_QWORD *)&state);
  }
  if ( state != 2 )
  {
    classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
    if ( classButtonControl )
    {
      v8 = &StringLiteral_8744/*"MENU_CANCEL"*/;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  classButtonControl = (ClassButtonControlComponent_o *)this->fields.myFSM;
  if ( !classButtonControl )
    goto LABEL_13;
  v8 = &StringLiteral_8761/*"MENU_SELECT_ITEM_OFFER"*/;
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

  if ( (byte_4E7209B & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_8745/*"MENU_DECIDE"*/);
    sub_1D0F0B4(&StringLiteral_8744/*"MENU_CANCEL"*/);
    byte_4E7209B = 1;
  }
  this->fields.selectFriendCode = friendCode;
  sub_1D0F058(&this->fields.selectFriendCode, friendCode);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1D0F30C(0, v7);
  v9 = &StringLiteral_8745/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v9 = &StringLiteral_8744/*"MENU_CANCEL"*/;
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
    || (FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, method),
        (operationItemListViewManager = this->fields.operationItemListViewManager) == 0)
    || (operationItemListViewManager = (FriendOperationItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                 0)) == 0 )
  {
    sub_1D0F30C(operationItemListViewManager, method);
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

  if ( (byte_4E72059 & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_6639/*"FRIEND_SHOW_INFOMATION"*/);
    byte_4E72059 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_TblFriendMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v7 = DataManager__GetMasterData_object_(
         Instance,
         (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserFollowMaster___);
  friendCountLabel = this->fields.friendCountLabel;
  v9 = (UserFollowMaster_o *)v7;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6639/*"FRIEND_SHOW_INFOMATION"*/, 0);
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
  Instance = (DataManager_o *)System_String__Format_65604080(v10, v11, v12, 0);
  if ( !friendCountLabel )
    goto LABEL_16;
  UILabel__set_text(friendCountLabel, (System_String_o *)Instance, 0);
  followCountLabel = this->fields.followCountLabel;
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6639/*"FRIEND_SHOW_INFOMATION"*/, 0);
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
  Instance = (DataManager_o *)System_String__Format_65604080(v14, v17, v18, 0);
  if ( !followCountLabel
    || (UILabel__set_text(followCountLabel, (System_String_o *)Instance, 0),
        Instance = (DataManager_o *)TblFriendMaster__GetSum((TblFriendMaster_o *)MasterData_object, 2, 0),
        !this->fields.noticeNumber) )
  {
LABEL_16:
    sub_1D0F30C(Instance, v5);
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

  if ( (byte_4E72058 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17836/*"btn_txt_friendsearch_on"*/);
    sub_1D0F0B4(&StringLiteral_17835/*"btn_txt_friendsearch_off"*/);
    sub_1D0F0B4(&StringLiteral_17703/*"btn_bg_09"*/);
    sub_1D0F0B4(&StringLiteral_17834/*"btn_txt_friendrequest_on"*/);
    sub_1D0F0B4(&StringLiteral_17832/*"btn_txt_friendlist_on"*/);
    sub_1D0F0B4(&StringLiteral_17833/*"btn_txt_friendrequest_off"*/);
    sub_1D0F0B4(&StringLiteral_17831/*"btn_txt_friendlist_off"*/);
    sub_1D0F0B4(&StringLiteral_17725/*"btn_bg_on"*/);
    byte_4E72058 = 1;
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17831/*"btn_txt_friendlist_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17833/*"btn_txt_friendrequest_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17836/*"btn_txt_friendsearch_on"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17703/*"btn_bg_09"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17703/*"btn_bg_09"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v7 = (System_String_o *)StringLiteral_17725/*"btn_bg_on"*/;
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
      sub_1D0F30C(tabFriendButton, v4);
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17831/*"btn_txt_friendlist_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17834/*"btn_txt_friendrequest_on"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17835/*"btn_txt_friendsearch_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17703/*"btn_bg_09"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v6 = (System_String_o *)StringLiteral_17725/*"btn_bg_on"*/;
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
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17832/*"btn_txt_friendlist_on"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17833/*"btn_txt_friendrequest_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchTitleSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17835/*"btn_txt_friendsearch_off"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabFriendSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, (System_String_o *)StringLiteral_17725/*"btn_bg_on"*/, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabOfferedSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v6 = (System_String_o *)StringLiteral_17703/*"btn_bg_09"*/;
LABEL_43:
      UISprite__set_spriteName((UISprite_o *)tabFriendButton, v6, 0);
      tabFriendButton = (UnityEngine_Behaviour_o *)this->fields.tabSearchSprite;
      if ( !tabFriendButton )
        goto LABEL_53;
      v7 = (System_String_o *)StringLiteral_17703/*"btn_bg_09"*/;
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

  if ( (byte_4E720A1 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FriendRootComponent_EndRequestFollowAssign__);
    sub_1D0F0B4(&Method_NetworkManager_getRequest_FollowAssignRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1D0F0B4(&StringLiteral_11242/*"REQUEST_NG"*/);
    byte_4E720A1 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndRequestFollowAssign__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (FollowAssignRequest_o *)NetworkManager__getRequest_object_(
                                                v3,
                                                (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_FollowAssignRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_object )
    {
      FollowAssignRequest__beginRequest(Request_object, selectFriendEntity->fields.userId, 0);
      return;
    }
LABEL_11:
    sub_1D0F30C(Request_object, method);
  }
  Request_object = (FollowAssignRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11242/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFollowRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4E720AA & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_string__TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent__RequestFollowRemove_b__142_0__);
    byte_4E720AA = 1;
  }
  v3 = (System_Action_object__o *)sub_1D0F300(System_Action_string__TypeInfo);
  System_Action_object____ctor(v3, (Il2CppObject *)this, Method_FriendRootComponent__RequestFollowRemove_b__142_0__, 0);
  FriendRootComponent__FriendLockRequst(this, (System_Action_string__o *)v3, v4);
}


void FriendRootComponent__RequestFriendAccept(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v7; // x20

  if ( (byte_4E72079 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1D0F0B4(&Method_NetworkManager_getRequest_FriendAcceptRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1D0F0B4(&StringLiteral_11242/*"REQUEST_NG"*/);
    byte_4E72079 = 1;
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
      v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                               v7,
                                                                               (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_FriendAcceptRequest___);
      if ( operationItemListViewManager )
      {
        FriendAcceptRequest__beginRequest(
          (FriendAcceptRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0);
        return;
      }
LABEL_12:
      sub_1D0F30C(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11242/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFriendCancel(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v7; // x20

  if ( (byte_4E7207B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1D0F0B4(&Method_NetworkManager_getRequest_FriendCancelRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1D0F0B4(&StringLiteral_11242/*"REQUEST_NG"*/);
    byte_4E7207B = 1;
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
      v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriend__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                               v7,
                                                                               (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_FriendCancelRequest___);
      if ( operationItemListViewManager )
      {
        FriendCancelRequest__beginRequest(
          (FriendCancelRequest_o *)operationItemListViewManager,
          otherUserGameEntity->fields.userId,
          0);
        return;
      }
LABEL_12:
      sub_1D0F30C(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11242/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFriendOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  FriendOfferRequest_o *Request_object; // x0
  struct OtherUserGameEntity_o *selectFriendEntity; // x8

  if ( (byte_4E72077 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1D0F0B4(&Method_NetworkManager_getRequest_FriendOfferRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1D0F0B4(&StringLiteral_11242/*"REQUEST_NG"*/);
    byte_4E72077 = 1;
  }
  if ( this->fields.selectFriendEntity )
  {
    v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_FriendRootComponent_EndRequestFriend__, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (FriendOfferRequest_o *)NetworkManager__getRequest_object_(
                                               v3,
                                               (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
    selectFriendEntity = this->fields.selectFriendEntity;
    if ( selectFriendEntity && Request_object )
    {
      FriendOfferRequest__beginRequest(Request_object, selectFriendEntity->fields.userId, 0);
      return;
    }
LABEL_11:
    sub_1D0F30C(Request_object, method);
  }
  Request_object = (FriendOfferRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11242/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFriendOffer2(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4E72078 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_string__TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent__RequestFriendOffer2_b__88_0__);
    byte_4E72078 = 1;
  }
  v3 = (System_Action_object__o *)sub_1D0F300(System_Action_string__TypeInfo);
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

  if ( (byte_4E7207F & 1) == 0 )
  {
    sub_1D0F0B4(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_EndNoSearchWarning__);
    sub_1D0F0B4(&Method_FriendRootComponent_EndRequestFriendProfile__);
    sub_1D0F0B4(&Method_NetworkManager_getRequest_ProfileTopRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1D0F0B4(&StringLiteral_113/*" "*/);
    sub_1D0F0B4(&StringLiteral_11242/*"REQUEST_NG"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E7207F = 1;
  }
  selectFriendCode = this->fields.selectFriendCode;
  if ( selectFriendCode )
  {
    v4 = System_String__Replace_65609336(
           selectFriendCode,
           (System_String_o *)StringLiteral_113/*" "*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0);
    if ( System_String__op_Inequality(v4, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v5,
        (Il2CppObject *)this,
        Method_FriendRootComponent_EndRequestFriendProfile__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Request_object = (ProfileTopRequest_o *)NetworkManager__getRequest_object_(
                                                v5,
                                                (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_ProfileTopRequest___);
      if ( Request_object )
      {
        ProfileTopRequest__beginRequestFriendCode(Request_object, this->fields.selectFriendCode, 0);
        return;
      }
LABEL_13:
      sub_1D0F30C(Request_object, v7);
    }
    friendWarningDialog = this->fields.friendWarningDialog;
    v9 = (FriendWarningDialog_CallbackFunc_o *)sub_1D0F300(FriendWarningDialog_CallbackFunc_TypeInfo);
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
  sub_1D0F058(&this->fields.selectFriendEntity, 0);
  Request_object = (ProfileTopRequest_o *)this->fields.myFSM;
  if ( !Request_object )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11242/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFriendReject(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationItemListViewItem_o *Item; // x0
  struct OtherUserGameEntity_o *otherUserGameEntity; // x21
  NetworkManager_ResultCallbackFunc_o *v7; // x20

  if ( (byte_4E7207A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1D0F0B4(&Method_NetworkManager_getRequest_FriendRejectRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&StringLiteral_11242/*"REQUEST_NG"*/);
    byte_4E7207A = 1;
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
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)operationItemListViewManager, 0, 0);
        v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_FriendRootComponent_EndRequestFriend__,
          0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        operationItemListViewManager = (FriendOperationItemListViewManager_o *)NetworkManager__getRequest_object_(
                                                                                 v7,
                                                                                 (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_FriendRejectRequest___);
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
      sub_1D0F30C(operationItemListViewManager, method);
    }
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_11242/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent__RequestFriendRemove(FriendRootComponent_o *this, const MethodInfo *method)
{
  System_Action_object__o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4E7207C & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_string__TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent__RequestFriendRemove_b__92_0__);
    byte_4E7207C = 1;
  }
  v3 = (System_Action_object__o *)sub_1D0F300(System_Action_string__TypeInfo);
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

  if ( (byte_4E7209D & 1) == 0 )
  {
    sub_1D0F0B4(&BalanceConfig_TypeInfo);
    sub_1D0F0B4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1D0F0B4(&Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__);
    sub_1D0F0B4(&Method_FriendRootComponent_SelectedFollowOfferConfirm__);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_1945/*"ALREADY_FOLLOWED_TITLE"*/);
    sub_1D0F0B4(&StringLiteral_1944/*"ALREADY_FOLLOWED_MESSAGE"*/);
    byte_4E7209D = 1;
  }
  if ( this->fields.state == 23 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserFollowMaster___);
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
          v15 = (FriendWarningDialog_CallbackFunc_o *)sub_1D0F300(FriendWarningDialog_CallbackFunc_TypeInfo);
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
            v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v11 = LocalizationManager__Get((System_String_o *)StringLiteral_1945/*"ALREADY_FOLLOWED_TITLE"*/, 0);
            v12 = LocalizationManager__Get((System_String_o *)StringLiteral_1944/*"ALREADY_FOLLOWED_MESSAGE"*/, 0);
            v13 = (NotificationDialog_ClickDelegate_o *)sub_1D0F300(NotificationDialog_ClickDelegate_TypeInfo);
            NotificationDialog_ClickDelegate___ctor(
              v13,
              (Il2CppObject *)this,
              Method_FriendRootComponent_EndMaxFollowWarningOfferConfirm__,
              0);
            if ( v10 )
            {
              CommonUI__OpenNotificationDialog_32089520(
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
            v20 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1D0F300(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
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
    sub_1D0F30C(Instance, v4);
  }
}


void FriendRootComponent__SelectFollowRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v7; // x22

  if ( (byte_4E720A4 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_SelectedFollowRemoveConfirm__);
    byte_4E720A4 = 1;
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
          dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          v7 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1D0F300(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFollowRemoveConfirm__,
            0),
          !operationConfirmMenu) )
    {
      sub_1D0F30C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 7, dropList, v7, 0);
  }
}


void FriendRootComponent__SelectFriendAcceptConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v7; // x22

  if ( (byte_4E7206B & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_SelectedFriendAcceptConfirm__);
    byte_4E7206B = 1;
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
          dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          v7 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1D0F300(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendAcceptConfirm__,
            0),
          !operationConfirmMenu) )
    {
      sub_1D0F30C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 2, dropList, v7, 0);
  }
}


void FriendRootComponent__SelectFriendCancelConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v7; // x22

  if ( (byte_4E72071 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_SelectedFriendCancelConfirm__);
    byte_4E72071 = 1;
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
          dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          v7 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1D0F300(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendCancelConfirm__,
            0),
          !operationConfirmMenu) )
    {
      sub_1D0F30C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 4, dropList, v7, 0);
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
  const MethodInfo *v13; // x2
  struct FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *writeMasterDataThread; // x21
  FriendWarningDialog_o *friendWarningDialog; // x20
  FriendWarningDialog_CallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3

  if ( (byte_4E72069 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&FriendWarningDialog_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1D0F0B4(&Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__);
    sub_1D0F0B4(&Method_FriendRootComponent_SelectedFriendOfferConfirm__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E72069 = 1;
  }
  state = this->fields.state;
  if ( state == 4 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
                                      v13);
        this->fields.state = 27;
        if ( Instance )
        {
          operationConfirmMenu = this->fields.operationConfirmMenu;
          writeMasterDataThread = (OtherUserGameEntity_o *)Instance->fields.writeMasterDataThread;
          v9 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1D0F300(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
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
      sub_1D0F30C(Instance, v6);
    }
LABEL_24:
    this->fields.state = 29;
    friendWarningDialog = this->fields.friendWarningDialog;
    v17 = (FriendWarningDialog_CallbackFunc_o *)sub_1D0F300(FriendWarningDialog_CallbackFunc_TypeInfo);
    FriendWarningDialog_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      Method_FriendRootComponent_EndMaxFriendWarningOfferConfirm__,
      v18);
    if ( !friendWarningDialog )
      goto LABEL_27;
    FriendWarningDialog__Open(friendWarningDialog, 1, v17, v19);
    return;
  }
  if ( state != 23 )
    return;
  v4 = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_TblFriendMaster___);
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
    v9 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1D0F300(FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
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
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v7; // x22

  if ( (byte_4E7206E & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_SelectedFriendRejectConfirm__);
    byte_4E7206E = 1;
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
          dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          v7 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1D0F300(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRejectConfirm__,
            0),
          !operationConfirmMenu) )
    {
      sub_1D0F30C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 3, dropList, v7, 0);
  }
}


void FriendRootComponent__SelectFriendRemoveConfirm(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0
  FriendOperationConfirmMenu_o *operationConfirmMenu; // x20
  OtherUserGameEntity_o *dropList; // x21
  FriendOperationConfirmMenu_CallbackFunc_o *v7; // x22

  if ( (byte_4E72074 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_SelectedFriendRemoveConfirm__);
    byte_4E72074 = 1;
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
          dropList = (OtherUserGameEntity_o *)operationItemListViewManager->fields.dropList,
          v7 = (FriendOperationConfirmMenu_CallbackFunc_o *)sub_1D0F300(FriendOperationConfirmMenu_CallbackFunc_TypeInfo),
          FriendOperationConfirmMenu_CallbackFunc___ctor(
            v7,
            (Il2CppObject *)this,
            Method_FriendRootComponent_SelectedFriendRemoveConfirm__,
            0),
          !operationConfirmMenu) )
    {
      sub_1D0F30C(operationItemListViewManager, method);
    }
    FriendOperationConfirmMenu__Open(operationConfirmMenu, 5, dropList, v7, 0);
  }
}


void FriendRootComponent__SelectSearchFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4E72062 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_5490/*"END_ACTION"*/);
    byte_4E72062 = 1;
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
      sub_1D0F30C(0, method);
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_5490/*"END_ACTION"*/, 0);
  }
}


void FriendRootComponent__SelectShowFriend(FriendRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *operationItemListViewManager; // x0
  const MethodInfo *v4; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v6; // x20
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_4E7205A & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnMoveEnd__);
    sub_1D0F0B4(&StringLiteral_5490/*"END_ACTION"*/);
    byte_4E7205A = 1;
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
              v4);
            v6 = this->fields.operationItemListViewManager;
            v7 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
            System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
            if ( v6 )
            {
              v6->fields.callbackFunc2 = v7;
              sub_1D0F058(&v6->fields.callbackFunc2, v7);
              FriendOperationItemListViewManager__SetMode_33858428(v6, 1, v8);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_1D0F30C(operationItemListViewManager, method);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5490/*"END_ACTION"*/, 0);
}


void FriendRootComponent__SelectShowOffer(FriendRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *operationItemListViewManager; // x0
  const MethodInfo *v5; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v7; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x2

  if ( (byte_4E7205C & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4E7205C = 1;
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
            v5),
          v7 = this->fields.operationItemListViewManager,
          v8 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo),
          System_Action___ctor(v8, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0),
          !v7) )
    {
LABEL_11:
      sub_1D0F30C(operationItemListViewManager, v3);
    }
    v7->fields.callbackFunc2 = v8;
    sub_1D0F058(&v7->fields.callbackFunc2, v8);
    FriendOperationItemListViewManager__SetMode_33858428(v7, 1, v9);
  }
}


void FriendRootComponent__SelectShowOffered(FriendRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *operationItemListViewManager; // x0
  const MethodInfo *v4; // x3
  struct ClassButtonControlComponent_o *classButtonControl; // x8
  struct FriendOperationItemListViewManager_o *v6; // x20
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_4E7205E & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnMoveEnd__);
    sub_1D0F0B4(&StringLiteral_5490/*"END_ACTION"*/);
    byte_4E7205E = 1;
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
              v4);
            v6 = this->fields.operationItemListViewManager;
            v7 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
            System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
            if ( v6 )
            {
              v6->fields.callbackFunc2 = v7;
              sub_1D0F058(&v6->fields.callbackFunc2, v7);
              FriendOperationItemListViewManager__SetMode_33858428(v6, 1, v8);
              return;
            }
          }
        }
      }
    }
LABEL_12:
    sub_1D0F30C(operationItemListViewManager, method);
  }
  operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_5490/*"END_ACTION"*/, 0);
}


void FriendRootComponent__SelectShowSearch(FriendRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *operationItemListViewManager; // x0
  struct FriendOperationItemListViewManager_o *v4; // x20
  struct System_String_o *selectFriendCode; // x1
  const MethodInfo *v6; // x3
  FriendSearchMenu_o *friendSearchMenu; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x2
  struct FriendOperationItemListViewManager_o *v10; // x20
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_4E72060 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnMoveEnd__);
    byte_4E72060 = 1;
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
    v4 = this->fields.operationItemListViewManager;
    if ( !v4 )
      goto LABEL_11;
    selectFriendCode = this->fields.selectFriendCode;
    v4->fields.friendCode = selectFriendCode;
    sub_1D0F058(&v4->fields.friendCode, selectFriendCode);
    FriendOperationItemListViewManager__CreateList(v4, 0, 0, v6);
    this->fields.state = 17;
    friendSearchMenu = this->fields.friendSearchMenu;
    v8 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0);
    if ( !friendSearchMenu
      || (FriendSearchMenu__Close_33884272(friendSearchMenu, v8, v9),
          v10 = this->fields.operationItemListViewManager,
          v11 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo),
          System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendRootComponent_OnMoveEnd__, 0),
          !v10) )
    {
LABEL_11:
      sub_1D0F30C(operationItemListViewManager, method);
    }
    v10->fields.callbackFunc2 = v11;
    sub_1D0F058(&v10->fields.callbackFunc2, v11);
    FriendOperationItemListViewManager__SetMode_33858428(v10, 1, v12);
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

  if ( (byte_4E72066 & 1) == 0 )
  {
    sub_1D0F0B4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_EndShowServant__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E72066 = 1;
  }
  state = this->fields.state;
  if ( state <= 0x13 && ((1 << state) & 0x84210) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (ServantStatusDialog_EndDelegate_o *)sub_1D0F300(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_EndShowServant__, 0);
    if ( !Instance )
      sub_1D0F30C(v8, v9);
    if ( state == 4 )
      v10 = 4;
    else
      v10 = 5;
    CommonUI__OpenServantStatusDialog_32099052((CommonUI_o *)Instance, v10, servantLeaderInfo, v7, 0);
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

  if ( (byte_4E7208F & 1) == 0 )
  {
    sub_1D0F0B4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_EndShowServantEquip__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E7208F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (ServantStatusDialog_EndDelegate_o *)sub_1D0F300(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v8, (Il2CppObject *)this, Method_FriendRootComponent_EndShowServantEquip__, 0);
  if ( !Instance )
    sub_1D0F30C(v9, v10);
  CommonUI__OpenServantEquipStatusDialog_32102160((CommonUI_o *)Instance, statusKind, equipInfo, v8, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void FriendRootComponent__SelectedFollowOfferConfirm(
        FriendRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v6; // x8

  if ( (byte_4E720A0 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_8745/*"MENU_DECIDE"*/);
    sub_1D0F0B4(&StringLiteral_8744/*"MENU_CANCEL"*/);
    byte_4E720A0 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1D0F30C(0, isDecide);
  v6 = &StringLiteral_8745/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8744/*"MENU_CANCEL"*/;
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

  if ( (byte_4E7209A & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_8745/*"MENU_DECIDE"*/);
    sub_1D0F0B4(&StringLiteral_8744/*"MENU_CANCEL"*/);
    byte_4E7209A = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1D0F30C(0, isDecide);
  v6 = &StringLiteral_8745/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8744/*"MENU_CANCEL"*/;
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

  if ( (byte_4E72096 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_8745/*"MENU_DECIDE"*/);
    sub_1D0F0B4(&StringLiteral_8744/*"MENU_CANCEL"*/);
    byte_4E72096 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1D0F30C(0, isDecide);
  v6 = &StringLiteral_8745/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8744/*"MENU_CANCEL"*/;
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

  if ( (byte_4E72098 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_8745/*"MENU_DECIDE"*/);
    sub_1D0F0B4(&StringLiteral_8744/*"MENU_CANCEL"*/);
    byte_4E72098 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1D0F30C(0, isDecide);
  v6 = &StringLiteral_8745/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8744/*"MENU_CANCEL"*/;
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

  if ( (byte_4E72095 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_8745/*"MENU_DECIDE"*/);
    sub_1D0F0B4(&StringLiteral_8744/*"MENU_CANCEL"*/);
    byte_4E72095 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1D0F30C(0, isDecide);
  v6 = &StringLiteral_8745/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8744/*"MENU_CANCEL"*/;
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

  if ( (byte_4E72097 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_8745/*"MENU_DECIDE"*/);
    sub_1D0F0B4(&StringLiteral_8744/*"MENU_CANCEL"*/);
    byte_4E72097 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1D0F30C(0, isDecide);
  v6 = &StringLiteral_8745/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8744/*"MENU_CANCEL"*/;
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

  if ( (byte_4E72099 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_8745/*"MENU_DECIDE"*/);
    sub_1D0F0B4(&StringLiteral_8744/*"MENU_CANCEL"*/);
    byte_4E72099 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1D0F30C(0, isDecide);
  v6 = &StringLiteral_8745/*"MENU_DECIDE"*/;
  if ( !isDecide )
    v6 = &StringLiteral_8744/*"MENU_CANCEL"*/;
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
  float x; // s8
  float y; // s9
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
    modeButtonParent = this->fields.modeButtonParent;
    x = DisplayPositionModeKindButtons.fields.x;
    y = DisplayPositionModeKindButtons.fields.y;
    z = DisplayPositionModeKindButtons.fields.z;
    if ( !modeButtonParent
      || (gameObject = UnityEngine_GameObject__get_gameObject(modeButtonParent, 0),
          v12.fields.x = x,
          v12.fields.y = y,
          v12.fields.z = z,
          (modeButtonParent = (UnityEngine_GameObject_o *)TweenPosition__Begin(gameObject, 0.2, v12, 0)) == 0) )
    {
      sub_1D0F30C(modeButtonParent, v5);
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
  if ( (byte_4E72064 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&FriendSearchResultMenu_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectOffer__);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectSearchFriend__);
    sub_1D0F0B4(&Method_FriendRootComponent_ShowSearchResult__);
    this = (FriendRootComponent_o *)sub_1D0F0B4(&StringLiteral_5490/*"END_ACTION"*/);
    byte_4E72064 = 1;
  }
  if ( v2->fields.state == 23 )
  {
    friendSearchResultMenu = v2->fields.friendSearchResultMenu;
    if ( !friendSearchResultMenu )
      goto LABEL_14;
    if ( friendSearchResultMenu->fields.isOpen )
    {
      v4 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
      System_Action___ctor(v4, (Il2CppObject *)v2, Method_FriendRootComponent_ShowSearchResult__, 0);
      FriendSearchResultMenu__Close_33886436(friendSearchResultMenu, v4, v5);
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
    v10 = (FriendSearchResultMenu_CallbackFunc_o *)sub_1D0F300(FriendSearchResultMenu_CallbackFunc_TypeInfo);
    FriendSearchResultMenu_CallbackFunc___ctor(v10, (Il2CppObject *)v2, Method_FriendRootComponent_OnSelectOffer__, v11);
    if ( !v8
      || (FriendSearchResultMenu__Open(v8, selectFriendEntity, currentCursor, v10, v12),
          friendSearchMenu = v2->fields.friendSearchMenu,
          v14 = (FriendSearchMenu_CallbackFunc_o *)sub_1D0F300(FriendSearchMenu_CallbackFunc_TypeInfo),
          FriendSearchMenu_CallbackFunc___ctor(
            v14,
            (Il2CppObject *)v2,
            Method_FriendRootComponent_OnSelectSearchFriend__,
            v15),
          !friendSearchMenu)
      || (FriendSearchMenu__Open(friendSearchMenu, v14, 0, v16), (this = (FriendRootComponent_o *)v2->fields.myFSM) == 0) )
    {
LABEL_14:
      sub_1D0F30C(this, method);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5490/*"END_ACTION"*/, 0);
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
  if ( (byte_4E72065 & 1) == 0 )
  {
    sub_1D0F0B4(&FriendSearchResultMenu_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&FriendSearchMenu_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_OnSelectOffer__);
    this = (FriendRootComponent_o *)sub_1D0F0B4(&Method_FriendRootComponent_OnSelectSearchFriend__);
    byte_4E72065 = 1;
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
      v8 = (FriendSearchResultMenu_CallbackFunc_o *)sub_1D0F300(FriendSearchResultMenu_CallbackFunc_TypeInfo);
      FriendSearchResultMenu_CallbackFunc___ctor(v8, (Il2CppObject *)v3, Method_FriendRootComponent_OnSelectOffer__, v9);
      FriendSearchResultMenu__Open(friendSearchResultMenu, selectFriendEntity, currentCursor, v8, v10);
    }
    else
    {
      FriendSearchResultMenu__Close_33886436(v3->fields.friendSearchResultMenu, 0, v2);
    }
  }
  friendSearchMenu = v3->fields.friendSearchMenu;
  v12 = (FriendSearchMenu_CallbackFunc_o *)sub_1D0F300(FriendSearchMenu_CallbackFunc_TypeInfo);
  FriendSearchMenu_CallbackFunc___ctor(v12, (Il2CppObject *)v3, Method_FriendRootComponent_OnSelectSearchFriend__, v13);
  if ( !friendSearchMenu )
LABEL_11:
    sub_1D0F30C(this, method);
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
  if ( (byte_4E720B0 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_string__TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent__OnClickBack_b__99_1__);
    this = (FriendRootComponent_o *)sub_1D0F0B4(&StringLiteral_22821/*"ok"*/);
    byte_4E720B0 = 1;
  }
  if ( !result )
    sub_1D0F30C(this, result);
  if ( System_String__Equals_65598092(result, (System_String_o *)StringLiteral_22821/*"ok"*/, 0) )
  {
    v5 = (System_Action_object__o *)sub_1D0F300(System_Action_string__TypeInfo);
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
  if ( (byte_4E720B1 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_22821/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1D0F0B4(&StringLiteral_3472/*"CLICK_BACK"*/);
    byte_4E720B1 = 1;
  }
  if ( !res )
    goto LABEL_9;
  if ( System_String__Equals_65598092(res, (System_String_o *)StringLiteral_22821/*"ok"*/, 0) )
  {
    this = (FriendRootComponent_o *)v4->fields.friendSearchMenu;
    if ( this )
    {
      FriendSearchMenu__BlockInput((FriendSearchMenu_o *)this, (const MethodInfo *)res);
      this = (FriendRootComponent_o *)v4->fields.myFSM;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3472/*"CLICK_BACK"*/, 0);
        return;
      }
    }
LABEL_9:
    sub_1D0F30C(this, res);
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
  if ( (byte_4E720B4 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FriendRootComponent__OnClickModeUserDetail_b__101_0__);
    this = (FriendRootComponent_o *)sub_1D0F0B4(&StringLiteral_22821/*"ok"*/);
    byte_4E720B4 = 1;
  }
  if ( !res )
    sub_1D0F30C(this, res);
  if ( System_String__Equals_65598092(res, (System_String_o *)StringLiteral_22821/*"ok"*/, 0) )
  {
    v5 = Method_FriendRootComponent__OnClickModeUserDetail_b__101_0__;
    if ( (*((_BYTE *)Method_FriendRootComponent__OnClickModeUserDetail_b__101_0__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1D0F0CC(Method_FriendRootComponent__OnClickModeUserDetail_b__101_0__);
    v6 = (System_Reflection_MethodBase_o *)sub_1D0F098(v5, v5[4]);
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
  if ( (byte_4E720B5 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FriendRootComponent__OnClickTabFriend_b__108_0__);
    sub_1D0F0B4(&StringLiteral_22821/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1D0F0B4(&StringLiteral_3528/*"CLICK_TAB"*/);
    byte_4E720B5 = 1;
  }
  if ( !res )
    goto LABEL_24;
  this = (FriendRootComponent_o *)System_String__Equals_65598092(res, (System_String_o *)StringLiteral_22821/*"ok"*/, 0);
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
      v9 = (_QWORD *)sub_1D0F0CC(Method_FriendRootComponent__OnClickTabFriend_b__108_0__);
    v10 = (System_Reflection_MethodBase_o *)sub_1D0F098(v9, v9[4]);
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3528/*"CLICK_TAB"*/, 0);
        return;
      }
    }
LABEL_24:
    sub_1D0F30C(this, res);
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
  if ( (byte_4E720B6 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_string__TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent__OnClickTabOffered_b__109_1__);
    this = (FriendRootComponent_o *)sub_1D0F0B4(&StringLiteral_22821/*"ok"*/);
    byte_4E720B6 = 1;
  }
  if ( !result )
    sub_1D0F30C(this, result);
  if ( System_String__Equals_65598092(result, (System_String_o *)StringLiteral_22821/*"ok"*/, 0) )
  {
    v5 = (System_Action_object__o *)sub_1D0F300(System_Action_string__TypeInfo);
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
  if ( (byte_4E720B7 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FriendRootComponent__OnClickTabOffered_b__109_1__);
    sub_1D0F0B4(&StringLiteral_22821/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1D0F0B4(&StringLiteral_3528/*"CLICK_TAB"*/);
    byte_4E720B7 = 1;
  }
  if ( !res )
    goto LABEL_24;
  this = (FriendRootComponent_o *)System_String__Equals_65598092(res, (System_String_o *)StringLiteral_22821/*"ok"*/, 0);
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
      v9 = (_QWORD *)sub_1D0F0CC(Method_FriendRootComponent__OnClickTabOffered_b__109_1__);
    v10 = (System_Reflection_MethodBase_o *)sub_1D0F098(v9, v9[4]);
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3528/*"CLICK_TAB"*/, 0);
        return;
      }
    }
LABEL_24:
    sub_1D0F30C(this, res);
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
  if ( (byte_4E720B8 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_string__TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent__OnClickTabSearch_b__110_1__);
    this = (FriendRootComponent_o *)sub_1D0F0B4(&StringLiteral_22821/*"ok"*/);
    byte_4E720B8 = 1;
  }
  if ( !result )
    sub_1D0F30C(this, result);
  if ( System_String__Equals_65598092(result, (System_String_o *)StringLiteral_22821/*"ok"*/, 0) )
  {
    v5 = (System_Action_object__o *)sub_1D0F300(System_Action_string__TypeInfo);
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
  if ( (byte_4E720B9 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FriendRootComponent__OnClickTabSearch_b__110_1__);
    sub_1D0F0B4(&StringLiteral_22821/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1D0F0B4(&StringLiteral_3528/*"CLICK_TAB"*/);
    byte_4E720B9 = 1;
  }
  if ( !res )
    goto LABEL_17;
  if ( !System_String__Equals_65598092(res, (System_String_o *)StringLiteral_22821/*"ok"*/, 0) )
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
      v6 = (_QWORD *)sub_1D0F0CC(Method_FriendRootComponent__OnClickTabSearch_b__110_1__);
    v7 = (System_Reflection_MethodBase_o *)sub_1D0F098(v6, v6[4]);
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
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3528/*"CLICK_TAB"*/, 0);
        return;
      }
    }
LABEL_17:
    sub_1D0F30C(this, res);
  }
}


void FriendRootComponent___RequestFollowRemove_b__142_0(
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
  if ( (byte_4E720BA & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FriendRootComponent_EndRequestFollowRemove__);
    sub_1D0F0B4(&Method_NetworkManager_getRequest_FollowdRemoveRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&StringLiteral_22821/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1D0F0B4(&StringLiteral_11242/*"REQUEST_NG"*/);
    byte_4E720BA = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_65598092(res, (System_String_o *)StringLiteral_22821/*"ok"*/, 0) )
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
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0);
          v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v8,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFollowRemove__,
            0);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                            v8,
                                            (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_FollowdRemoveRequest___);
          if ( this )
          {
            FollowdRemoveRequest__beginRequest((FollowdRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0);
            return;
          }
        }
LABEL_15:
        sub_1D0F30C(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11242/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent___RequestFriendOffer2_b__88_0(
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
  if ( (byte_4E720AE & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1D0F0B4(&Method_NetworkManager_getRequest_FriendOfferRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1D0F0B4(&StringLiteral_22821/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1D0F0B4(&StringLiteral_11242/*"REQUEST_NG"*/);
    byte_4E720AE = 1;
  }
  if ( !res )
    goto LABEL_14;
  if ( System_String__Equals_65598092(res, (System_String_o *)StringLiteral_22821/*"ok"*/, 0) )
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
        v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
        NetworkManager_ResultCallbackFunc___ctor(
          v8,
          (Il2CppObject *)v4,
          Method_FriendRootComponent_EndRequestFriend__,
          0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                          v8,
                                          (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_FriendOfferRequest___);
        if ( this )
        {
          FriendOfferRequest__beginRequest((FriendOfferRequest_o *)this, otherUserGameEntity->fields.userId, 0);
          return;
        }
LABEL_14:
        sub_1D0F30C(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11242/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent___RequestFriendRemove_b__92_0(
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
  if ( (byte_4E720AF & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FriendRootComponent_EndRequestFriend__);
    sub_1D0F0B4(&Method_NetworkManager_getRequest_FriendRemoveRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&StringLiteral_22821/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1D0F0B4(&StringLiteral_11242/*"REQUEST_NG"*/);
    byte_4E720AF = 1;
  }
  if ( !res )
    goto LABEL_15;
  if ( System_String__Equals_65598092(res, (System_String_o *)StringLiteral_22821/*"ok"*/, 0) )
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
        this = (FriendRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)this, 0, 0);
          v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v8,
            (Il2CppObject *)v4,
            Method_FriendRootComponent_EndRequestFriend__,
            0);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          this = (FriendRootComponent_o *)NetworkManager__getRequest_object_(
                                            v8,
                                            (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_FriendRemoveRequest___);
          if ( this )
          {
            FriendRemoveRequest__beginRequest((FriendRemoveRequest_o *)this, otherUserGameEntity->fields.userId, 0);
            return;
          }
        }
LABEL_15:
        sub_1D0F30C(this, res);
      }
    }
  }
  this = (FriendRootComponent_o *)v4->fields.myFSM;
  if ( !this )
    goto LABEL_15;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11242/*"REQUEST_NG"*/, 0);
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
  if ( (byte_4E720B2 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_string__TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent__afterMainMenubarSelect_b__100_1__);
    sub_1D0F0B4(&StringLiteral_22821/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1D0F0B4(&StringLiteral_11242/*"REQUEST_NG"*/);
    byte_4E720B2 = 1;
  }
  if ( !result )
    goto LABEL_8;
  if ( System_String__Equals_65598092(result, (System_String_o *)StringLiteral_22821/*"ok"*/, 0) )
  {
    v5 = (System_Action_object__o *)sub_1D0F300(System_Action_string__TypeInfo);
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
    sub_1D0F30C(this, result);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11242/*"REQUEST_NG"*/, 0);
}


void FriendRootComponent___afterMainMenubarSelect_b__100_1(
        FriendRootComponent_o *this,
        System_String_o *res,
        const MethodInfo *method)
{
  FriendRootComponent_o *v4; // x19
  PlayMakerFSM_o *myFSM; // x8
  __int64 *v6; // x9

  v4 = this;
  if ( (byte_4E720B3 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_11244/*"REQUEST_OK"*/);
    sub_1D0F0B4(&StringLiteral_22821/*"ok"*/);
    this = (FriendRootComponent_o *)sub_1D0F0B4(&StringLiteral_11242/*"REQUEST_NG"*/);
    byte_4E720B3 = 1;
  }
  if ( !res
    || (this = (FriendRootComponent_o *)System_String__Equals_65598092(res, (System_String_o *)StringLiteral_22821/*"ok"*/, 0),
        (myFSM = v4->fields.myFSM) == 0) )
  {
    sub_1D0F30C(this, res);
  }
  v6 = &StringLiteral_11244/*"REQUEST_OK"*/;
  if ( ((unsigned __int8)this & 1) == 0 )
    v6 = &StringLiteral_11242/*"REQUEST_NG"*/;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v6, 0);
}


void FriendRootComponent__afterMainMenubarSelect(FriendRootComponent_o *this, const MethodInfo *method)
{
  FriendRootComponent_messageRequestCallback_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_4E72084 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FriendRootComponent__afterMainMenubarSelect_b__100_0__);
    sub_1D0F0B4(&FriendRootComponent_messageRequestCallback_TypeInfo);
    byte_4E72084 = 1;
  }
  v3 = (FriendRootComponent_messageRequestCallback_o *)sub_1D0F300(FriendRootComponent_messageRequestCallback_TypeInfo);
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
  OtherUserServantLimitCountManager_c *v4; // x0

  if ( (byte_4E72055 & 1) == 0 )
  {
    sub_1D0F0B4(&OtherUserServantLimitCountManager_TypeInfo);
    sub_1D0F0B4(&RandomLimitCountManager_TypeInfo);
    byte_4E72055 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_19;
  operationItemListViewManager->fields._isMessageApply_k__BackingField = 0;
  FriendOperationItemListViewManager__DestroyList(operationItemListViewManager, method);
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
    sub_1D0F30C(operationItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0);
  this->fields.state = 0;
  this->fields.selectFriendEntity = 0;
  sub_1D0F058(&this->fields.selectFriendEntity, 0);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0);
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
  if ( !byte_4E71F5D )
  {
    sub_1D0F0B4(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4E71F5D = 1;
  }
  v4 = OtherUserServantLimitCountManager_TypeInfo;
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
    v4 = OtherUserServantLimitCountManager_TypeInfo;
  }
  v4->static_fields->_IsEnableAdjustSupportLimitCount_k__BackingField = 0;
  OtherUserServantLimitCountManager__Clear(0);
}


void FriendRootComponent__beginInitialize(FriendRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  ClassButtonControlComponent_o *classButtonControl; // x20
  ClassButtonControlComponent_CallbackFunc_o *v8; // x21
  System_Action_o *v9; // x20

  if ( (byte_4E7204F & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&AtlasManager_TypeInfo);
    sub_1D0F0B4(&ClassButtonControlComponent_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_EndLoadOutGameAtlas__);
    sub_1D0F0B4(&Method_FriendRootComponent_changeClass__);
    byte_4E7204F = 1;
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
        v8 = (ClassButtonControlComponent_CallbackFunc_o *)sub_1D0F300(ClassButtonControlComponent_CallbackFunc_TypeInfo),
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
    sub_1D0F30C(bgTxtSprite, v4);
  }
  FriendOperationItemListViewManager__SetupClassBoardInfo((FriendOperationItemListViewManager_o *)bgTxtSprite, v4);
  v9 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
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
  const MethodInfo *v10; // x2

  if ( (byte_4E72056 & 1) == 0 )
  {
    sub_1D0F0B4(&AvalonSceneManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1D0F0B4(&SupportInfoJump_TypeInfo);
    byte_4E72056 = 1;
  }
  if ( data
    && (naturalAligment = SupportInfoJump_TypeInfo->_2.naturalAligment,
        data->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (SupportInfoJump_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == SupportInfoJump_TypeInfo )
  {
    this->fields.isReturnSupport = 1;
    Instance = (FriendOperationItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v8
      || (CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0),
          FriendRootComponent__RefreshTab(this, v9),
          (Instance = this->fields.operationItemListViewManager) == 0) )
    {
      sub_1D0F30C(Instance, v7);
    }
    FriendOperationItemListViewManager__SetMode_33858428(Instance, 2, v10);
    SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 7, 39, 0);
    MainMenuBar__setMenuActive(1, 0, 0);
    SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0);
  }
  else
  {
    SceneRootComponent__beginResume_42858936((SceneRootComponent_o *)this, 0);
    this->fields.isReturnSupport = 0;
  }
}


void FriendRootComponent__beginStartUp(FriendRootComponent_o *this, const MethodInfo *method)
{
  OtherUserServantLimitCountManager_c *v3; // x0
  System_String_o *MainBgmName; // x20
  __int64 v5; // x1
  TitleInfoControl_o *titleInfo; // x0
  NetworkManager_ResultCallbackFunc_o *v7; // x20

  if ( (byte_4E72051 & 1) == 0 )
  {
    sub_1D0F0B4(&BgmManager_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent_EndFriendRequest__);
    sub_1D0F0B4(&Method_NetworkManager_getRequest_FriendTopRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&OtherUserServantLimitCountManager_TypeInfo);
    sub_1D0F0B4(&RandomLimitCountManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1D0F0B4(&SoundManager_TypeInfo);
    byte_4E72051 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0);
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
  if ( !byte_4E71F5D )
  {
    sub_1D0F0B4(&OtherUserServantLimitCountManager_TypeInfo);
    byte_4E71F5D = 1;
  }
  v3 = OtherUserServantLimitCountManager_TypeInfo;
  if ( !OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo);
    v3 = OtherUserServantLimitCountManager_TypeInfo;
  }
  v3->static_fields->_IsEnableAdjustSupportLimitCount_k__BackingField = 0;
  OtherUserServantLimitCountManager__Clear(0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  MainBgmName = BgmManager__GetMainBgmName(0, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MainBgmName, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_21;
  TitleInfoControl__setTitleInfo(titleInfo, this->fields.myFSM, 1, 0, 43, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_21;
  TitleInfoControl__setBackBtnSprite_41257740(titleInfo, 1, 0, 0, 0);
  this->fields.state = 0;
  this->fields.currentModeKind = 0;
  this->fields.selectFriendEntity = 0;
  sub_1D0F058(&this->fields.selectFriendEntity, 0);
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_FriendRootComponent_EndFriendRequest__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  titleInfo = (TitleInfoControl_o *)NetworkManager__getRequest_object_(
                                      v7,
                                      (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_FriendTopRequest___);
  if ( !titleInfo )
LABEL_21:
    sub_1D0F30C(titleInfo, v5);
  RequestBase__beginRequest((RequestBase_o *)titleInfo, 0);
}


void FriendRootComponent__beginStartUp_33876764(
        FriendRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  struct SceneJumpInfo_o **p_jumpInfo; // x20
  Il2CppClass *v6; // x8
  __int64 naturalAligment; // x9
  Il2CppObject *v8; // x1

  if ( (byte_4E72052 & 1) == 0 )
  {
    sub_1D0F0B4(&SceneJumpInfo_TypeInfo);
    byte_4E72052 = 1;
  }
  p_jumpInfo = &this->fields.jumpInfo;
  this->fields.jumpInfo = 0;
  sub_1D0F058(&this->fields.jumpInfo, 0);
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
      sub_1D0F058(&this->fields.jumpInfo, v8);
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
  const MethodInfo *v8; // x3
  FriendOperationItemListViewManager_o *operationItemListViewManager; // x0

  if ( (byte_4E7208E & 1) == 0 )
  {
    sub_1D0F0B4(&Method_FriendRootComponent_changeClass__);
    byte_4E7208E = 1;
  }
  v5 = Method_FriendRootComponent_changeClass__;
  if ( (*((_BYTE *)Method_FriendRootComponent_changeClass__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1D0F0CC(Method_FriendRootComponent_changeClass__);
  v6 = (System_Reflection_MethodBase_o *)sub_1D0F098(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_1D0F30C(0, v7);
  FriendOperationItemListViewManager__SetClassId(operationItemListViewManager, classPos, 0, v8);
}


int32_t FriendRootComponent__get_tabKind(FriendRootComponent_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  FriendRootComponent_c *v4; // x0

  if ( (byte_4E7204E & 1) == 0 )
  {
    sub_1D0F0B4(&FriendRootComponent_TypeInfo);
    byte_4E7204E = 1;
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
  const MethodInfo *v12; // x2
  int32_t i; // w24
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x8
  struct System_Int64_array *v15; // x8
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

  if ( (byte_4E7208C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1D0F0B4(&Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___);
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_FriendRootComponent___c__DisplayClass111_0__messageDispChangeRequest_b__0__);
    sub_1D0F0B4(&FriendRootComponent___c__DisplayClass111_0_TypeInfo);
    sub_1D0F0B4(&StringLiteral_22821/*"ok"*/);
    byte_4E7208C = 1;
  }
  v5 = (Il2CppObject *)sub_1D0F300(FriendRootComponent___c__DisplayClass111_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_35;
  v5[1].klass = (Il2CppClass *)this;
  sub_1D0F058(&v5[1], this);
  v5[1].monitor = callback;
  p_monitor = &v5[1].monitor;
  sub_1D0F058(&v5[1].monitor, callback);
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_35;
  if ( LOBYTE(operationItemListViewManager[1].fields.emptyMessageLabel) )
  {
    ItemSum = ListViewManager__get_ItemSum(operationItemListViewManager, 0);
    v10 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v10,
      (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
    v11 = (System_Collections_Generic_List_long__o *)sub_1D0F300(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v11,
      (const MethodInfo_3943BF0 *)Method_System_Collections_Generic_List_long___ctor__);
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
            v15 = v10->fields._items;
            v16 = Method_System_Collections_Generic_List_long__Add__;
            ++v10->fields._version;
            if ( !v15 )
              goto LABEL_35;
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(v15->max_length) )
            {
              v22 = v16[4];
              v23 = v10;
LABEL_24:
              System_Collections_Generic_List_long___AddWithResize(
                v23,
                items,
                *(const MethodInfo_3944444 **)(*(_QWORD *)(v22 + 192) + 112LL));
              continue;
            }
            v18 = &v15->obj.klass + size;
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
            if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
            {
              v22 = v20[4];
              v23 = v11;
              goto LABEL_24;
            }
            v18 = &v19->obj.klass + v21;
            v11->fields._size = v21 + 1;
          }
          v18[4] = (Il2CppClass *)items;
        }
      }
    }
    v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1D0F300(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v24,
      v5,
      Method_FriendRootComponent___c__DisplayClass111_0__messageDispChangeRequest_b__0__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    operationItemListViewManager = (ListViewManager_o *)NetworkManager__getRequest_object_(
                                                          v24,
                                                          (const MethodInfo_32DC000 *)Method_NetworkManager_getRequest_FriendMessageHideSyncRequest___);
    if ( v11 )
    {
      v25 = (FriendMessageHideSyncRequest_o *)operationItemListViewManager;
      operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                            v11,
                                                            (const MethodInfo_3945EFC *)Method_System_Collections_Generic_List_long__ToArray__);
      if ( v10 )
      {
        v26 = (System_Int64_array *)operationItemListViewManager;
        operationItemListViewManager = (ListViewManager_o *)System_Collections_Generic_List_long___ToArray(
                                                              v10,
                                                              (const MethodInfo_3945EFC *)Method_System_Collections_Generic_List_long__ToArray__);
        if ( v25 )
        {
          FriendMessageHideSyncRequest__beginRequest(v25, v26, (System_Int64_array *)operationItemListViewManager, 0);
          return;
        }
      }
    }
LABEL_35:
    sub_1D0F30C(operationItemListViewManager, items);
  }
  if ( *p_monitor )
    (*((void (__fastcall **)(_QWORD, __int64, _QWORD))*p_monitor + 3))(
      *((_QWORD *)*p_monitor + 8),
      StringLiteral_22821/*"ok"*/,
      *((_QWORD *)*p_monitor + 5));
}


void FriendRootComponent__set_tabKind(FriendRootComponent_o *this, int32_t value, const MethodInfo *method)
{
  FriendRootComponent_c *v4; // x0

  if ( (byte_4E7204D & 1) == 0 )
  {
    sub_1D0F0B4(&FriendRootComponent_TypeInfo);
    byte_4E7204D = 1;
  }
  v4 = FriendRootComponent_TypeInfo;
  if ( !FriendRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FriendRootComponent_TypeInfo);
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
  struct FriendOperationItemListViewManager_o *operationItemListViewManager; // x8
  struct FriendRootComponent_messageRequestCallback_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (operationItemListViewManager = _4__this->fields.operationItemListViewManager) == 0 )
    sub_1D0F30C(this, result);
  operationItemListViewManager->fields._isMessageApply_k__BackingField = 0;
  callback = this->fields.callback;
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
  const MethodInfo *v7; // x2
  int32_t v8; // w21
  struct FriendRootComponent_o *_4__this; // x8

  if ( (byte_4E720BB & 1) == 0 )
  {
    sub_1D0F0B4(&Method_ActionExtensions_Call_string___);
    sub_1D0F0B4(&StringLiteral_22821/*"ok"*/);
    byte_4E720BB = 1;
  }
  operationItemListViewManager = (FriendOperationItemListViewManager_o *)System_String__op_Equality(
                                                                           result,
                                                                           (System_String_o *)StringLiteral_22821/*"ok"*/,
                                                                           0);
  if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 && this->fields.sum >= 1 )
  {
    v8 = 0;
    do
    {
      _4__this = this->fields.__4__this;
      if ( !_4__this || (operationItemListViewManager = _4__this->fields.operationItemListViewManager) == 0 )
        sub_1D0F30C(operationItemListViewManager, v6);
      operationItemListViewManager = (FriendOperationItemListViewManager_o *)FriendOperationItemListViewManager__GetItem(
                                                                               operationItemListViewManager,
                                                                               v8,
                                                                               v7);
      if ( operationItemListViewManager )
        FriendOperationItemListViewItem__RefreshLockInfo(
          (FriendOperationItemListViewItem_o *)operationItemListViewManager,
          0);
      ++v8;
    }
    while ( v8 < this->fields.sum );
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)this->fields.onFinishedRequest,
    (Il2CppObject *)result,
    (const MethodInfo_31932D8 *)Method_ActionExtensions_Call_string___);
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
  sub_1D0F058(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1D0F174(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1B35170;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1B35150;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1D0F328(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1D0F1DC(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1B35108;
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
  return (System_IAsyncResult_o *)sub_1D0F068(this, &v6, callback, object);
}


void FriendRootComponent_messageRequestCallback__EndInvoke(
        FriendRootComponent_messageRequestCallback_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1D0F06C(result, 0, method);
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