void AccountLinkageComponent___cctor(const MethodInfo *method)
{
  struct AccountLinkageComponent_StaticFields *static_fields; // x8

  if ( (byte_4C32874 & 1) == 0 )
  {
    sub_1C32C20(&AccountLinkageComponent_TypeInfo);
    byte_4C32874 = 1;
  }
  static_fields = AccountLinkageComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ACCOUNT_LINKAGE_DATA_SPACING_Y = 0xFFFFFFFC00000003LL;
  static_fields->isLinked = 0;
}


void AccountLinkageComponent___ctor(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AccountLinkageComponent__AutoDelinkAccountLinkage(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_c *v3; // x0
  System_String_o *v4; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v6; // x22
  System_Nullable_int__o p_msgFontSize; // x0
  __int64 v8; // x0
  System_Nullable_int__o v9; // x4
  System_Nullable_float__o v10; // x3
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C32871 & 1) == 0 )
  {
    sub_1C32C20(&Method_AccountLinkageComponent__AutoDelinkAccountLinkage_b__27_0__);
    sub_1C32C20(&AccountLinkageComponent_TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_int___ctor__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_1872/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/);
    byte_4C32871 = 1;
  }
  v3 = AccountLinkageComponent_TypeInfo;
  msgFontSize = 0;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
    v3 = AccountLinkageComponent_TypeInfo;
  }
  v3->static_fields->isLinked = 0;
  AccountLinkageComponent__HideMenu(this, method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1872/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_AccountLinkageComponent__AutoDelinkAccountLinkage_b__27_0__, 0);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__);
  if ( !Instance )
    sub_1C32E7C(v8);
  v9 = msgFontSize;
  v10 = 0;
  CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v4, v6, v10, v9, 0, 0);
}


void AccountLinkageComponent__Awake(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  ;
}


void AccountLinkageComponent__CheckCsUnlink(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  _BOOL8 SelfUserAccountLinkage; // x0
  int v3; // w8
  AccountLinkageComponent_c *v4; // x0
  struct AccountLinkageComponent_StaticFields *static_fields; // x9
  char v6; // w8
  UserAccountLinkageEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C3285F & 1) == 0 )
  {
    sub_1C32C20(&AccountLinkageComponent_TypeInfo);
    byte_4C3285F = 1;
  }
  entity = 0;
  SelfUserAccountLinkage = UserAccountLinkageMaster__TryGetSelfUserAccountLinkage(&entity, 0);
  if ( SelfUserAccountLinkage )
  {
    if ( !entity )
      sub_1C32E7C(SelfUserAccountLinkage);
    v3 = *(_DWORD *)((char *)&off_18 + (_QWORD)entity);
    if ( v3 == 1 )
    {
      v4 = AccountLinkageComponent_TypeInfo;
      if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
        v4 = AccountLinkageComponent_TypeInfo;
      }
      v6 = 1;
      goto LABEL_19;
    }
    if ( !v3 )
    {
      v4 = AccountLinkageComponent_TypeInfo;
      if ( AccountLinkageComponent_TypeInfo->_2.cctor_finished )
      {
LABEL_15:
        v6 = 0;
LABEL_19:
        static_fields = v4->static_fields;
        goto LABEL_20;
      }
LABEL_14:
      j_il2cpp_runtime_class_init_0(v4);
      v4 = AccountLinkageComponent_TypeInfo;
      goto LABEL_15;
    }
  }
  v4 = AccountLinkageComponent_TypeInfo;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
    v4 = AccountLinkageComponent_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( static_fields->isLinked )
  {
    if ( v4->_2.cctor_finished )
    {
      v6 = 0;
LABEL_20:
      static_fields->isLinked = v6;
      return;
    }
    goto LABEL_14;
  }
}


void AccountLinkageComponent__CheckMaintenanceInfo(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_4C32863 & 1) == 0 )
  {
    sub_1C32C20(&Method_AccountLinkageComponent_ProcessAccountLinkage__);
    sub_1C32C20(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C32863 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_ProcessAccountLinkage__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1C32E7C(0);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0);
}


void AccountLinkageComponent__CloseMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  BaseMenu_o *accountLinkageMenu; // x0

  if ( (byte_4C32860 & 1) == 0 )
  {
    sub_1C32C20(&Method_AccountLinkageComponent__CloseMenu_b__10_0__);
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C32860 = 1;
  }
  AccountLinkageParams__ResetParams(0);
  v3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_AccountLinkageComponent__CloseMenu_b__10_0__, 0);
  accountLinkageMenu = (BaseMenu_o *)this->fields.accountLinkageMenu;
  if ( !accountLinkageMenu )
    sub_1C32E7C(0);
  BaseMenu__Close(accountLinkageMenu, v3, 0);
}


void AccountLinkageComponent__CloseWebViewCallback(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_String_o *v4; // x19
  Il2CppObject *Instance; // x20
  AccountLinkageComponent___c_c *v6; // x8
  System_Action_o *_9__18_0; // x21
  Il2CppObject *v8; // x22
  struct AccountLinkageComponent___c_StaticFields *static_fields; // x0
  System_Nullable_int__o p_msgFontSize; // x0
  __int64 v11; // x0
  System_Nullable_int__o v12; // x4
  System_Nullable_float__o v13; // x3
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C32868 & 1) == 0 )
  {
    sub_1C32C20(&AccountLinkageParams_TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_int___ctor__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_AccountLinkageComponent___c__CloseWebViewCallback_b__18_0__);
    sub_1C32C20(&AccountLinkageComponent___c_TypeInfo);
    sub_1C32C20(&StringLiteral_1877/*"ACCOUNT_LINKAGE_ERROR_MESSAGE"*/);
    byte_4C32868 = 1;
  }
  msgFontSize = 0;
  if ( System_String__IsNullOrEmpty(AccountLinkageParams_TypeInfo->static_fields->authorizationCode, 0) )
  {
    AccountLinkageParams__ResetParams(0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1877/*"ACCOUNT_LINKAGE_ERROR_MESSAGE"*/, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = AccountLinkageComponent___c_TypeInfo;
    if ( !AccountLinkageComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageComponent___c_TypeInfo);
      v6 = AccountLinkageComponent___c_TypeInfo;
    }
    _9__18_0 = v6->static_fields->__9__18_0;
    if ( !_9__18_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = AccountLinkageComponent___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__18_0 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(_9__18_0, v8, Method_AccountLinkageComponent___c__CloseWebViewCallback_b__18_0__, 0);
      static_fields = AccountLinkageComponent___c_TypeInfo->static_fields;
      static_fields->__9__18_0 = _9__18_0;
      sub_1C32BC4(&static_fields->__9__18_0, _9__18_0);
    }
    p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
    System_Nullable_int____ctor(p_msgFontSize, 30, (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__);
    if ( !Instance )
      sub_1C32E7C(v11);
    v12 = msgFontSize;
    v13 = 0;
    CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v4, _9__18_0, v13, v12, 0, 0);
  }
  else
  {
    AccountLinkageComponent__SendIssueTokenRequest(this, v3);
  }
}


void AccountLinkageComponent__ConfirmUnlinkAccountLinkage(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_String_o *v4; // x21
  System_String_o *v5; // x0
  System_String_o *v6; // x21
  System_String_o *v7; // x22
  System_String_o *v8; // x23
  Il2CppObject *Instance; // x24
  AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *v10; // x25
  __int64 v11; // x0
  UnityEngine_Vector2Int_o v12; // x6

  if ( (byte_4C3286D & 1) == 0 )
  {
    sub_1C32C20(&Method_AccountLinkageComponent__ConfirmUnlinkAccountLinkage_b__23_0__);
    sub_1C32C20(&AccountLinkageUnlinkConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_1874/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_1871/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_44/*"\n\n"*/);
    sub_1C32C20(&StringLiteral_1873/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_1875/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_TITLE"*/);
    sub_1C32C20(&StringLiteral_1876/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_WARNING"*/);
    byte_4C3286D = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_1875/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_TITLE"*/, 0);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1874/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_MESSAGE"*/, 0);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_1876/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_WARNING"*/, 0);
  v6 = System_String__Concat_63556792(v4, (System_String_o *)StringLiteral_44/*"\n\n"*/, v5, 0);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_1873/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_DECIDE"*/, 0);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_1871/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_CANCEL"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *)sub_1C32E6C(AccountLinkageUnlinkConfirmDialog_ClickDelegate_TypeInfo);
  AccountLinkageUnlinkConfirmDialog_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent__ConfirmUnlinkAccountLinkage_b__23_0__,
    0);
  if ( !Instance )
    sub_1C32E7C(v11);
  v12 = (UnityEngine_Vector2Int_o)0xF0000002BCLL;
  CommonUI__OpenAccountLinkageUnlinkConfirmDlg((CommonUI_o *)Instance, v3, v6, v7, v8, v10, v12, 0);
}


void AccountLinkageComponent__DoAccountLinkage(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_4C3286B & 1) == 0 )
  {
    sub_1C32C20(&Method_AccountLinkageComponent_SuccessedAccountLinkage__);
    sub_1C32C20(&AccountLinkageParams_TypeInfo);
    sub_1C32C20(&Method_NetworkManager_getRequest_AccountLinkageLinkRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C3286B = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_SuccessedAccountLinkage__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_AccountLinkageLinkRequest___);
  if ( !Request_object )
    sub_1C32E7C(0);
  AccountLinkageLinkRequest__beginRequest(
    (AccountLinkageLinkRequest_o *)Request_object,
    AccountLinkageParams_TypeInfo->static_fields->accountLinkageToken,
    0);
}


void AccountLinkageComponent__HideMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void AccountLinkageComponent__IssueTokenCallback(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  AccountLinkageComponent_o *v4; // x19
  const MethodInfo *v5; // x1

  v4 = this;
  if ( (byte_4C3286A & 1) == 0 )
  {
    sub_1C32C20(&AccountLinkageParams_TypeInfo);
    this = (AccountLinkageComponent_o *)sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    byte_4C3286A = 1;
  }
  if ( !result )
    sub_1C32E7C(this);
  if ( System_String__Equals_63553848(result, (System_String_o *)StringLiteral_22379/*"ok"*/, 0) )
  {
    if ( AccountLinkageParams_TypeInfo->static_fields->isRequestedAccountLinked )
      AccountLinkageComponent__ReConfirmAccountLinkage(v4, v5);
    else
      AccountLinkageComponent__DoAccountLinkage(v4, v5);
  }
  else
  {
    AccountLinkageParams__ResetParams(0);
  }
}


void AccountLinkageComponent__LinkageStatusCheck(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_4C32861 & 1) == 0 )
  {
    sub_1C32C20(&Method_AccountLinkageComponent_SetupMenu__);
    sub_1C32C20(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C32861 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_AccountLinkageComponent_SetupMenu__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1C32E7C(0);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0);
}


void AccountLinkageComponent__OnPartialMaintenance(
        AccountLinkageComponent_o *this,
        System_String_o *mainteMessage,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AccountLinkageComponent___c_c *v5; // x8
  CommonUI_o *v6; // x20
  System_Action_o *_9__29_0; // x21
  Il2CppObject *v8; // x22
  struct AccountLinkageComponent___c_StaticFields *static_fields; // x0
  System_Nullable_float__o v10; // x0
  System_Nullable_int__o v11; // x0
  __int64 v12; // x0
  System_Nullable_float__o v13; // x3
  System_Nullable_int__o v14; // x4
  System_Nullable_int__o v15; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_float__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C32873 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_int___ctor__);
    sub_1C32C20(&Method_System_Nullable_float___ctor__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_AccountLinkageComponent___c__OnPartialMaintenance_b__29_0__);
    sub_1C32C20(&AccountLinkageComponent___c_TypeInfo);
    byte_4C32873 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AccountLinkageComponent___c_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AccountLinkageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent___c_TypeInfo);
    v5 = AccountLinkageComponent___c_TypeInfo;
  }
  _9__29_0 = v5->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = AccountLinkageComponent___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__29_0 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(_9__29_0, v8, Method_AccountLinkageComponent___c__OnPartialMaintenance_b__29_0__, 0);
    static_fields = AccountLinkageComponent___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = _9__29_0;
    sub_1C32BC4(&static_fields->__9__29_0, _9__29_0);
  }
  v10 = (System_Nullable_float__o)&v16;
  v16 = 0;
  System_Nullable_float____ctor(v10, 36.0, (const MethodInfo_38C063C *)Method_System_Nullable_float___ctor__);
  v11 = (System_Nullable_int__o)&v15;
  v15 = 0;
  System_Nullable_int____ctor(v11, 26, (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__);
  if ( !v6 )
    sub_1C32E7C(v12);
  v14 = v15;
  v13 = v16;
  CommonUI__OpenAccountLinkageNotificationDialog(v6, mainteMessage, _9__29_0, v13, v14, 0, 0);
}


void AccountLinkageComponent__OnSiteMaintenance(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x19
  Il2CppObject *Instance; // x0
  AccountLinkageComponent___c_c *v4; // x8
  CommonUI_o *v5; // x20
  System_Action_o *_9__28_0; // x21
  Il2CppObject *v7; // x22
  struct AccountLinkageComponent___c_StaticFields *static_fields; // x0
  System_Nullable_int__o p_msgFontSize; // x0
  __int64 v10; // x0
  System_Nullable_int__o v11; // x4
  System_Nullable_float__o v12; // x3
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C32872 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_int___ctor__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_AccountLinkageComponent___c__OnSiteMaintenance_b__28_0__);
    sub_1C32C20(&AccountLinkageComponent___c_TypeInfo);
    sub_1C32C20(&StringLiteral_1878/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/);
    byte_4C32872 = 1;
  }
  msgFontSize = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v2 = LocalizationManager__Get((System_String_o *)StringLiteral_1878/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AccountLinkageComponent___c_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AccountLinkageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent___c_TypeInfo);
    v4 = AccountLinkageComponent___c_TypeInfo;
  }
  _9__28_0 = v4->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = AccountLinkageComponent___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__28_0 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(_9__28_0, v7, Method_AccountLinkageComponent___c__OnSiteMaintenance_b__28_0__, 0);
    static_fields = AccountLinkageComponent___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = _9__28_0;
    sub_1C32BC4(&static_fields->__9__28_0, _9__28_0);
  }
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 28, (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__);
  if ( !v5 )
    sub_1C32E7C(v10);
  v11 = msgFontSize;
  v12 = 0;
  CommonUI__OpenAccountLinkageNotificationDialog(v5, v2, _9__28_0, v12, v11, 0, 0);
}


void AccountLinkageComponent__OpenLoginWebview(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_4C32866 & 1) == 0 )
  {
    sub_1C32C20(&Method_AccountLinkageComponent_OpenWebViewCallback__);
    sub_1C32C20(&Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C32866 = 1;
  }
  AccountLinkageParams__ResetParams(0);
  AccountLinkageParams__GetCodeChallenge(0);
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_OpenWebViewCallback__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___);
  if ( !Request_object )
    sub_1C32E7C(0);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void AccountLinkageComponent__OpenMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  BaseMenu_o *accountLinkageMenu; // x20
  AccountLinkageComponent_o *v6; // x0
  const MethodInfo *v7; // x1
  int32_t notificationType; // w8

  if ( (byte_4C3285E & 1) == 0 )
  {
    sub_1C32C20(&AccountLinkageParams_TypeInfo);
    sub_1C32C20(&StringLiteral_5452/*"END_OPEN_ACCOUNT_LINKAGE_MENU"*/);
    byte_4C3285E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  accountLinkageMenu = (BaseMenu_o *)this->fields.accountLinkageMenu;
  if ( !accountLinkageMenu )
    goto LABEL_12;
  AccountLinkageMenu__InitView(this->fields.accountLinkageMenu, v4);
  BaseMenu__Open(accountLinkageMenu, 0, 0);
  notificationType = AccountLinkageParams_TypeInfo->static_fields->notificationType;
  if ( notificationType == 2 )
  {
    AccountLinkageComponent__OverrideAccountLinkage(this, v7);
  }
  else if ( notificationType == 1 )
  {
    AccountLinkageComponent__AutoDelinkAccountLinkage(this, v7);
  }
  else
  {
    AccountLinkageComponent__CheckCsUnlink(v6, v7);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myRoomFsm;
  if ( !gameObject )
LABEL_12:
    sub_1C32E7C(gameObject);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5452/*"END_OPEN_ACCOUNT_LINKAGE_MENU"*/, 0);
}


void AccountLinkageComponent__OpenWebViewCallback(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_String_o *AuthURL; // x20
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  System_String_o *basicUserName; // x21
  System_String_o *basicPassword; // x22
  System_Action_o *v9; // x23

  v4 = (Il2CppObject *)this;
  if ( (byte_4C32867 & 1) == 0 )
  {
    sub_1C32C20(&Method_AccountLinkageComponent_CloseWebViewCallback__);
    sub_1C32C20(&AccountLinkageParams_TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&WebViewManager_TypeInfo);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    this = (AccountLinkageComponent_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C32867 = 1;
  }
  if ( !result )
    sub_1C32E7C(this);
  if ( System_String__Equals_63553848(result, (System_String_o *)StringLiteral_22379/*"ok"*/, 0) )
  {
    AuthURL = AccountLinkageParams__GetAuthURL(0, 0);
    static_fields = AccountLinkageParams_TypeInfo->static_fields;
    basicUserName = static_fields->basicUserName;
    basicPassword = static_fields->basicPassword;
    v9 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v9, v4, Method_AccountLinkageComponent_CloseWebViewCallback__, 0);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    if ( basicUserName == 0 || basicPassword == 0 )
      WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, AuthURL, v9, 0);
    else
      WebViewManager__OpenViewWithBasicAuth(
        (System_String_o *)StringLiteral_1/*""*/,
        AuthURL,
        basicUserName,
        basicPassword,
        v9,
        0);
  }
}


void AccountLinkageComponent__OverrideAccountLinkage(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_c *v3; // x0
  System_String_o *v4; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v6; // x22
  System_Nullable_int__o p_msgFontSize; // x0
  __int64 v8; // x0
  System_Nullable_int__o v9; // x4
  System_Nullable_float__o v10; // x3
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C32870 & 1) == 0 )
  {
    sub_1C32C20(&Method_AccountLinkageComponent__OverrideAccountLinkage_b__26_0__);
    sub_1C32C20(&AccountLinkageComponent_TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_int___ctor__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_1883/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/);
    byte_4C32870 = 1;
  }
  v3 = AccountLinkageComponent_TypeInfo;
  msgFontSize = 0;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
    v3 = AccountLinkageComponent_TypeInfo;
  }
  v3->static_fields->isLinked = 0;
  AccountLinkageComponent__HideMenu(this, method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1883/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_AccountLinkageComponent__OverrideAccountLinkage_b__26_0__, 0);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 24, (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__);
  if ( !Instance )
    sub_1C32E7C(v8);
  v9 = msgFontSize;
  v10 = 0;
  CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v4, v6, v10, v9, 0, 0);
}


void AccountLinkageComponent__ProcessAccountLinkage(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  AccountLinkageComponent_o *v4; // x19
  PartialMaintenanceMaster_o *v5; // x20
  _BOOL8 isAniplexPlusAccountLinkageMaintenanceNow; // x0
  const MethodInfo *v7; // x1
  AccountLinkageComponent_o *AniplexPlusAccountLinkageMaintenanceMessage; // x0
  const MethodInfo *v9; // x2
  AccountLinkageComponent_c *v10; // x0
  int32_t notificationType; // w8

  v4 = this;
  if ( (byte_4C32865 & 1) == 0 )
  {
    sub_1C32C20(&AccountLinkageComponent_TypeInfo);
    sub_1C32C20(&AccountLinkageParams_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (AccountLinkageComponent_o *)sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    byte_4C32865 = 1;
  }
  if ( !result )
    goto LABEL_21;
  if ( !System_String__Equals_63553848(result, (System_String_o *)StringLiteral_22379/*"ok"*/, 0) )
    return;
  this = (AccountLinkageComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (AccountLinkageComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___)) == 0 )
  {
LABEL_21:
    sub_1C32E7C(this);
  }
  v5 = (PartialMaintenanceMaster_o *)this;
  isAniplexPlusAccountLinkageMaintenanceNow = PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow(
                                                (PartialMaintenanceMaster_o *)this,
                                                0);
  if ( isAniplexPlusAccountLinkageMaintenanceNow )
  {
    AniplexPlusAccountLinkageMaintenanceMessage = (AccountLinkageComponent_o *)PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
                                                                                 v5,
                                                                                 0);
    AccountLinkageComponent__OnPartialMaintenance(
      AniplexPlusAccountLinkageMaintenanceMessage,
      (System_String_o *)AniplexPlusAccountLinkageMaintenanceMessage,
      v9);
  }
  else if ( AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError )
  {
    AccountLinkageComponent__OnSiteMaintenance(
      (AccountLinkageComponent_o *)isAniplexPlusAccountLinkageMaintenanceNow,
      v7);
  }
  else
  {
    v10 = AccountLinkageComponent_TypeInfo;
    if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
      v10 = AccountLinkageComponent_TypeInfo;
    }
    if ( v10->static_fields->isLinked )
    {
      notificationType = AccountLinkageParams_TypeInfo->static_fields->notificationType;
      if ( notificationType == 2 )
      {
        AccountLinkageComponent__OverrideAccountLinkage(v4, v7);
      }
      else if ( notificationType == 1 )
      {
        AccountLinkageComponent__AutoDelinkAccountLinkage(v4, v7);
      }
      else
      {
        AccountLinkageComponent__ConfirmUnlinkAccountLinkage(v4, v7);
      }
    }
    else
    {
      AccountLinkageComponent__OpenLoginWebview(v4, v7);
    }
  }
}


void AccountLinkageComponent__ReConfirmAccountLinkage(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x21
  System_String_o *SelfUserGame; // x0
  System_String_o *v5; // x20
  Il2CppObject *v6; // x20
  System_String_o *v7; // x23
  System_String_o *v8; // x24
  System_String_o *v9; // x25
  System_String_o *v10; // x26
  System_String_o *buttonCancel; // x27
  System_String_o *buttonDecide; // x28
  System_String_o *v13; // x19
  Il2CppObject *v14; // x29
  Il2CppObject *NumberFormat_41175184; // x20
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  Il2CppObject *v22; // x0
  System_String_o *v23; // x29
  System_String_o *v24; // x20
  Il2CppObject *Instance; // x21
  AccountLinkageReConfirmDialog_ClickDelegate_o *v26; // x22
  Il2CppObject *v27; // [xsp+18h] [xbp-88h]
  Il2CppObject *v28; // [xsp+20h] [xbp-80h]
  Il2CppObject *object; // [xsp+28h] [xbp-78h]
  int32_t requestedAccountLevel; // [xsp+34h] [xbp-6Ch] BYREF
  UserGameEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C3286F & 1) == 0 )
  {
    sub_1C32C20(&Method_AccountLinkageComponent__ReConfirmAccountLinkage_b__25_0__);
    sub_1C32C20(&AccountLinkageParams_TypeInfo);
    sub_1C32C20(&AccountLinkageReConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_14844/*"USER_DATA_INFO"*/);
    sub_1C32C20(&StringLiteral_1893/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING"*/);
    sub_1C32C20(&StringLiteral_1889/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE"*/);
    sub_1C32C20(&StringLiteral_1884/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_1890/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/);
    sub_1C32C20(&StringLiteral_1892/*"ACCOUNT_LINKAGE_RECONFIRM_TITLE"*/);
    sub_1C32C20(&StringLiteral_1887/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3286F = 1;
  }
  v3 = (Il2CppObject *)StringLiteral_1/*""*/;
  entity = 0;
  SelfUserGame = (System_String_o *)UserGameMaster__TryGetSelfUserGame(&entity, 0);
  object = (Il2CppObject *)this;
  if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_15;
    v5 = *(System_String_o **)((char *)&qword_70 + (_QWORD)entity);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = LocalizationManager__GetNumberFormat_41175184(v5, 0);
    if ( !entity
      || (v6 = (Il2CppObject *)SelfUserGame,
          SelfUserGame = AccountLinkageParams__AddColorCodeBracket(
                           *(System_String_o **)((char *)&off_18 + (_QWORD)entity),
                           0),
          !entity) )
    {
LABEL_15:
      sub_1C32E7C(SelfUserGame);
    }
    v27 = (Il2CppObject *)SelfUserGame;
    v28 = v6;
    v3 = (Il2CppObject *)System_Int32__ToString((int)entity + 80, 0);
  }
  else
  {
    v27 = v3;
    v28 = v3;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_1892/*"ACCOUNT_LINKAGE_RECONFIRM_TITLE"*/, 0);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_1887/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_1889/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_1893/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING"*/, 0);
  buttonCancel = LocalizationManager__Get((System_String_o *)StringLiteral_1884/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/, 0);
  buttonDecide = LocalizationManager__Get((System_String_o *)StringLiteral_1890/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/, 0);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_14844/*"USER_DATA_INFO"*/, 0);
  v14 = (Il2CppObject *)AccountLinkageParams__AddColorCodeBracket(
                          AccountLinkageParams_TypeInfo->static_fields->requestedAccountName,
                          0);
  NumberFormat_41175184 = (Il2CppObject *)LocalizationManager__GetNumberFormat_41175184(
                                            AccountLinkageParams_TypeInfo->static_fields->requestedAccountFriendCode,
                                            0);
  requestedAccountLevel = AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &requestedAccountLevel, v16, v17, v18, v19, v20, v21);
  v23 = System_String__Format_63559904(v13, NumberFormat_41175184, v14, v22, 0);
  v24 = System_String__Format_63559904(v13, v28, v27, v3, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = (AccountLinkageReConfirmDialog_ClickDelegate_o *)sub_1C32E6C(AccountLinkageReConfirmDialog_ClickDelegate_TypeInfo);
  AccountLinkageReConfirmDialog_ClickDelegate___ctor(
    v26,
    object,
    Method_AccountLinkageComponent__ReConfirmAccountLinkage_b__25_0__,
    0);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__OpenAccountLinkageReConfirmDialog(
    (CommonUI_o *)Instance,
    v26,
    v7,
    v8,
    v23,
    v24,
    v9,
    v10,
    buttonCancel,
    buttonDecide,
    0);
}


void AccountLinkageComponent__SendIssueTokenRequest(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_4C32869 & 1) == 0 )
  {
    sub_1C32C20(&Method_AccountLinkageComponent_IssueTokenCallback__);
    sub_1C32C20(&AccountLinkageParams_TypeInfo);
    sub_1C32C20(&Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C32869 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_IssueTokenCallback__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___);
  if ( !Request_object )
    sub_1C32E7C(0);
  AccountLinkageIssueTokenRequest__beginRequest(
    (AccountLinkageIssueTokenRequest_o *)Request_object,
    AccountLinkageParams_TypeInfo->static_fields->authorizationCode,
    AccountLinkageParams_TypeInfo->static_fields->codeVerifier,
    0);
}


void AccountLinkageComponent__SetupMenu(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  PartialMaintenanceMaster_o *v6; // x20
  AccountLinkageComponent_o *AniplexPlusAccountLinkageMaintenanceMessage; // x0
  const MethodInfo *v8; // x2
  __int64 *v9; // x8

  if ( (byte_4C32862 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    sub_1C32C20(&StringLiteral_1949/*"ANIPLEX_PLUS_STATUS_OK"*/);
    sub_1C32C20(&StringLiteral_1948/*"ANIPLEX_PLUS_STATUS_NG"*/);
    byte_4C32862 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22379/*"ok"*/, 0) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
      if ( Instance )
      {
        v6 = (PartialMaintenanceMaster_o *)Instance;
        if ( PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow(
               (PartialMaintenanceMaster_o *)Instance,
               0) )
        {
          AniplexPlusAccountLinkageMaintenanceMessage = (AccountLinkageComponent_o *)PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
                                                                                       v6,
                                                                                       0);
          AccountLinkageComponent__OnPartialMaintenance(
            AniplexPlusAccountLinkageMaintenanceMessage,
            (System_String_o *)AniplexPlusAccountLinkageMaintenanceMessage,
            v8);
          goto LABEL_8;
        }
        Instance = (DataManager_o *)this->fields.myRoomFsm;
        if ( Instance )
        {
          v9 = &StringLiteral_1949/*"ANIPLEX_PLUS_STATUS_OK"*/;
          goto LABEL_12;
        }
      }
    }
LABEL_13:
    sub_1C32E7C(Instance);
  }
LABEL_8:
  Instance = (DataManager_o *)this->fields.myRoomFsm;
  if ( !Instance )
    goto LABEL_13;
  v9 = &StringLiteral_1948/*"ANIPLEX_PLUS_STATUS_NG"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v9, 0);
}


void AccountLinkageComponent__ShowMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void AccountLinkageComponent__StartAccountLinkage(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v5; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C32864 & 1) == 0 )
  {
    sub_1C32C20(&Method_AccountLinkageComponent_StartAccountLinkage__);
    sub_1C32C20(&StringLiteral_15565/*"Wait_Action"*/);
    sub_1C32C20(&StringLiteral_7300/*"Help"*/);
    byte_4C32864 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_10;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15565/*"Wait_Action"*/, 0) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v5 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0);
      if ( System_String__op_Inequality(v5, (System_String_o *)StringLiteral_7300/*"Help"*/, 0) )
        return;
      goto LABEL_7;
    }
LABEL_10:
    sub_1C32E7C(myRoomFsm);
  }
LABEL_7:
  v6 = Method_AccountLinkageComponent_StartAccountLinkage__;
  if ( (*((_BYTE *)Method_AccountLinkageComponent_StartAccountLinkage__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C32C38(Method_AccountLinkageComponent_StartAccountLinkage__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  AccountLinkageComponent__CheckMaintenanceInfo(this, v8);
}


void AccountLinkageComponent__SuccessedAccountLinkage(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  AccountLinkageComponent_c *v5; // x0
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v10; // x22
  System_Nullable_int__o p_msgFontSize; // x0
  System_Nullable_int__o v12; // x4
  System_Nullable_float__o v13; // x3
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-28h] BYREF

  v4 = (Il2CppObject *)this;
  if ( (byte_4C3286C & 1) == 0 )
  {
    sub_1C32C20(&Method_AccountLinkageComponent__SuccessedAccountLinkage_b__22_0__);
    sub_1C32C20(&AccountLinkageComponent_TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_int___ctor__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    sub_1C32C20(&StringLiteral_1868/*"ACCOUNT_LINKAGE_COMPLETE_WARNING"*/);
    this = (AccountLinkageComponent_o *)sub_1C32C20(&StringLiteral_1867/*"ACCOUNT_LINKAGE_COMPLETE_MESSAGE"*/);
    byte_4C3286C = 1;
  }
  msgFontSize = 0;
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_63553848(result, (System_String_o *)StringLiteral_22379/*"ok"*/, 0) )
  {
    v5 = AccountLinkageComponent_TypeInfo;
    if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
      v5 = AccountLinkageComponent_TypeInfo;
    }
    v5->static_fields->isLinked = 1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1867/*"ACCOUNT_LINKAGE_COMPLETE_MESSAGE"*/, 0);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_1868/*"ACCOUNT_LINKAGE_COMPLETE_WARNING"*/, 0);
    v8 = System_String__Concat_63518544(v6, v7, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v10, v4, Method_AccountLinkageComponent__SuccessedAccountLinkage_b__22_0__, 0);
    p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
    System_Nullable_int____ctor(p_msgFontSize, 30, (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__);
    if ( Instance )
    {
      v12 = msgFontSize;
      v13 = 0;
      CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v8, v10, v13, v12, 0, 0);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C32E7C(this);
  }
LABEL_11:
  AccountLinkageParams__ResetParams(0);
}


void AccountLinkageComponent__UnlinkedAccountLinkage(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  AccountLinkageComponent_c *v5; // x0
  System_String_o *v6; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v8; // x22
  System_Nullable_int__o p_msgFontSize; // x0
  System_Nullable_int__o v10; // x4
  System_Nullable_float__o v11; // x3
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-28h] BYREF

  v4 = (Il2CppObject *)this;
  if ( (byte_4C3286E & 1) == 0 )
  {
    sub_1C32C20(&Method_AccountLinkageComponent__UnlinkedAccountLinkage_b__24_0__);
    sub_1C32C20(&AccountLinkageComponent_TypeInfo);
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_int___ctor__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_1872/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/);
    this = (AccountLinkageComponent_o *)sub_1C32C20(&StringLiteral_22379/*"ok"*/);
    byte_4C3286E = 1;
  }
  msgFontSize = 0;
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_63553848(result, (System_String_o *)StringLiteral_22379/*"ok"*/, 0) )
  {
    v5 = AccountLinkageComponent_TypeInfo;
    if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
      v5 = AccountLinkageComponent_TypeInfo;
    }
    v5->static_fields->isLinked = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1872/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v8, v4, Method_AccountLinkageComponent__UnlinkedAccountLinkage_b__24_0__, 0);
    p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
    System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__);
    if ( Instance )
    {
      v10 = msgFontSize;
      v11 = 0;
      CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v6, v8, v11, v10, 0, 0);
      return;
    }
LABEL_12:
    sub_1C32E7C(this);
  }
  AccountLinkageParams__ResetParams(0);
}


void AccountLinkageComponent___AutoDelinkAccountLinkage_b__27_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4C3287A & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3287A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0, 0),
        AccountLinkageComponent__ShowMenu(this, v4),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v5);
}


void AccountLinkageComponent___CloseMenu_b__10_0(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void AccountLinkageComponent___ConfirmUnlinkAccountLinkage_b__23_0(
        AccountLinkageComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  NetworkManager_ResultCallbackFunc_o *v6; // x20

  if ( (byte_4C32876 & 1) == 0 )
  {
    sub_1C32C20(&Method_AccountLinkageComponent_UnlinkedAccountLinkage__);
    sub_1C32C20(&Method_NetworkManager_getRequest_AccountLinkageUnlinkRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C32876 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseAccountLinkageUnlinkConfirmDialog((CommonUI_o *)Instance, 0, 0);
  if ( isDecide )
  {
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_AccountLinkageComponent_UnlinkedAccountLinkage__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__getRequest_object_(
                 v6,
                 (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_AccountLinkageUnlinkRequest___);
    if ( Instance )
    {
      RequestBase__beginRequest((RequestBase_o *)Instance, 0);
      return;
    }
LABEL_10:
    sub_1C32E7C(Instance);
  }
}


void AccountLinkageComponent___OverrideAccountLinkage_b__26_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4C32879 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C32879 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0, 0),
        AccountLinkageComponent__ShowMenu(this, v4),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v5);
}


void AccountLinkageComponent___ReConfirmAccountLinkage_b__25_0(
        AccountLinkageComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C32878 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C32878 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__CloseAccountLinkageReConfirmDialog((CommonUI_o *)Instance, 0, 0);
  if ( isDecide )
    AccountLinkageComponent__DoAccountLinkage(this, v6);
}


void AccountLinkageComponent___SuccessedAccountLinkage_b__22_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C32875 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_3498/*"CLOSE_ACCOUNT_LINKAGE"*/);
    byte_4C32875 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0, 0),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0)
    || (AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v4),
        (Instance = (CommonUI_o *)this->fields.myRoomFsm) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3498/*"CLOSE_ACCOUNT_LINKAGE"*/, 0);
}


void AccountLinkageComponent___UnlinkedAccountLinkage_b__24_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C32877 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C32877 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0, 0),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v4);
}


void AccountLinkageComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C3287B & 1) == 0 )
  {
    sub_1C32C20(&AccountLinkageComponent___c_TypeInfo);
    byte_4C3287B = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(AccountLinkageComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AccountLinkageComponent___c_TypeInfo->static_fields->__9 = (struct AccountLinkageComponent___c_o *)v1;
  sub_1C32BC4(AccountLinkageComponent___c_TypeInfo->static_fields, v1);
}


void AccountLinkageComponent___c___ctor(AccountLinkageComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AccountLinkageComponent___c___CloseWebViewCallback_b__18_0(
        AccountLinkageComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3287C & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3287C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0, 0);
}


void AccountLinkageComponent___c___OnPartialMaintenance_b__29_0(
        AccountLinkageComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3287E & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3287E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0, 0);
}


void AccountLinkageComponent___c___OnSiteMaintenance_b__28_0(
        AccountLinkageComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3287D & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3287D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0, 0);
}