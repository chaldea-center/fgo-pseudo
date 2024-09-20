void __fastcall AccountLinkageComponent___cctor(const MethodInfo *method)
{
  struct AccountLinkageComponent_StaticFields *static_fields; // x8

  if ( (byte_4A56623 & 1) == 0 )
  {
    sub_1B885B0(&AccountLinkageComponent_TypeInfo);
    byte_4A56623 = 1;
  }
  static_fields = AccountLinkageComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ACCOUNT_LINKAGE_DATA_SPACING_Y = 0xFFFFFFFC00000003LL;
  static_fields->isLinked = 0;
}


void __fastcall AccountLinkageComponent___ctor(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall AccountLinkageComponent__AutoDelinkAccountLinkage(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  AccountLinkageComponent_c *v3; // x0
  System_String_o *v4; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v11; // 0:x3.8
  System_Nullable_int__o v12; // 0:x4.8

  if ( (byte_4A56620 & 1) == 0 )
  {
    sub_1B885B0(&Method_AccountLinkageComponent__AutoDelinkAccountLinkage_b__27_0__);
    sub_1B885B0(&AccountLinkageComponent_TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_int___ctor__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_1999/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/);
    byte_4A56620 = 1;
  }
  v3 = AccountLinkageComponent_TypeInfo;
  msgFontSize = 0LL;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
    v3 = AccountLinkageComponent_TypeInfo;
  }
  v3->static_fields->isLinked = 0;
  AccountLinkageComponent__HideMenu(this, method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1999/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent__AutoDelinkAccountLinkage_b__27_0__,
    0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_361A2C0 *)Method_System_Nullable_int___ctor__);
  if ( !Instance )
    sub_1B8880C(v7, v8);
  v12 = msgFontSize;
  v11 = 0LL;
  CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v4, v6, v11, v12, 0, 0LL);
}


void __fastcall AccountLinkageComponent__Awake(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall AccountLinkageComponent__CheckCsUnlink(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  _BOOL8 SelfUserAccountLinkage; // x0
  __int64 v3; // x1
  int32_t type; // w8
  AccountLinkageComponent_c *v5; // x0
  struct AccountLinkageComponent_StaticFields *static_fields; // x9
  char v7; // w8
  UserAccountLinkageEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A5660E & 1) == 0 )
  {
    sub_1B885B0(&AccountLinkageComponent_TypeInfo);
    byte_4A5660E = 1;
  }
  entity = 0LL;
  SelfUserAccountLinkage = UserAccountLinkageMaster__TryGetSelfUserAccountLinkage(&entity, 0LL);
  if ( SelfUserAccountLinkage )
  {
    if ( !entity )
      sub_1B8880C(SelfUserAccountLinkage, v3);
    type = entity->fields.type;
    if ( type == 1 )
    {
      v5 = AccountLinkageComponent_TypeInfo;
      if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
        v5 = AccountLinkageComponent_TypeInfo;
      }
      v7 = 1;
      goto LABEL_19;
    }
    if ( !type )
    {
      v5 = AccountLinkageComponent_TypeInfo;
      if ( AccountLinkageComponent_TypeInfo->_2.cctor_finished )
      {
LABEL_15:
        v7 = 0;
LABEL_19:
        static_fields = v5->static_fields;
        goto LABEL_20;
      }
LABEL_14:
      j_il2cpp_runtime_class_init_0(v5);
      v5 = AccountLinkageComponent_TypeInfo;
      goto LABEL_15;
    }
  }
  v5 = AccountLinkageComponent_TypeInfo;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
    v5 = AccountLinkageComponent_TypeInfo;
  }
  static_fields = v5->static_fields;
  if ( static_fields->isLinked )
  {
    if ( v5->_2.cctor_finished )
    {
      v7 = 0;
LABEL_20:
      static_fields->isLinked = v7;
      return;
    }
    goto LABEL_14;
  }
}


void __fastcall AccountLinkageComponent__CheckMaintenanceInfo(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4A56612 & 1) == 0 )
  {
    sub_1B885B0(&Method_AccountLinkageComponent_ProcessAccountLinkage__);
    sub_1B885B0(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A56612 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_ProcessAccountLinkage__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1B8880C(0LL, v5);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0LL);
}


void __fastcall AccountLinkageComponent__CloseMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  __int64 v4; // x1
  BaseMenu_o *accountLinkageMenu; // x0

  if ( (byte_4A5660F & 1) == 0 )
  {
    sub_1B885B0(&Method_AccountLinkageComponent__CloseMenu_b__10_0__);
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5660F = 1;
  }
  AccountLinkageParams__ResetParams(0LL);
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_AccountLinkageComponent__CloseMenu_b__10_0__, 0LL);
  accountLinkageMenu = (BaseMenu_o *)this->fields.accountLinkageMenu;
  if ( !accountLinkageMenu )
    sub_1B8880C(0LL, v4);
  BaseMenu__Close(accountLinkageMenu, v3, 0LL);
}


void __fastcall AccountLinkageComponent__CloseWebViewCallback(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_String_o *v4; // x19
  Il2CppObject *Instance; // x20
  AccountLinkageComponent___c_c *v6; // x8
  System_Action_o *_9__18_0; // x21
  Il2CppObject *v8; // x22
  struct AccountLinkageComponent___c_StaticFields *static_fields; // x0
  __int64 v10; // x0
  __int64 v11; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v14; // 0:x3.8
  System_Nullable_int__o v15; // 0:x4.8

  if ( (byte_4A56617 & 1) == 0 )
  {
    sub_1B885B0(&AccountLinkageParams_TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_int___ctor__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_AccountLinkageComponent___c__CloseWebViewCallback_b__18_0__);
    sub_1B885B0(&AccountLinkageComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_2004/*"ACCOUNT_LINKAGE_ERROR_MESSAGE"*/);
    byte_4A56617 = 1;
  }
  msgFontSize = 0LL;
  if ( System_String__IsNullOrEmpty(AccountLinkageParams_TypeInfo->static_fields->authorizationCode, 0LL) )
  {
    AccountLinkageParams__ResetParams(0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2004/*"ACCOUNT_LINKAGE_ERROR_MESSAGE"*/, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      _9__18_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(_9__18_0, v8, Method_AccountLinkageComponent___c__CloseWebViewCallback_b__18_0__, 0LL);
      static_fields = AccountLinkageComponent___c_TypeInfo->static_fields;
      static_fields->__9__18_0 = _9__18_0;
      sub_1B88554(&static_fields->__9__18_0, _9__18_0);
    }
    p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
    System_Nullable_int____ctor(p_msgFontSize, 30, (const MethodInfo_361A2C0 *)Method_System_Nullable_int___ctor__);
    if ( !Instance )
      sub_1B8880C(v10, v11);
    v15 = msgFontSize;
    v14 = 0LL;
    CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v4, _9__18_0, v14, v15, 0, 0LL);
  }
  else
  {
    AccountLinkageComponent__SendIssueTokenRequest(this, v3);
  }
}


void __fastcall AccountLinkageComponent__ConfirmUnlinkAccountLinkage(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
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
  __int64 v12; // x1
  UnityEngine_Vector2Int_o v13; // 0:x6.8

  if ( (byte_4A5661C & 1) == 0 )
  {
    sub_1B885B0(&Method_AccountLinkageComponent__ConfirmUnlinkAccountLinkage_b__23_0__);
    sub_1B885B0(&AccountLinkageUnlinkConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_2001/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_1998/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_44/*"\n\n"*/);
    sub_1B885B0(&StringLiteral_2000/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_2002/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_TITLE"*/);
    sub_1B885B0(&StringLiteral_2003/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_WARNING"*/);
    byte_4A5661C = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_2002/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_TITLE"*/, 0LL);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2001/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_MESSAGE"*/, 0LL);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2003/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_WARNING"*/, 0LL);
  v6 = System_String__Concat_61718292(v4, (System_String_o *)StringLiteral_44/*"\n\n"*/, v5, 0LL);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_2000/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_DECIDE"*/, 0LL);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_1998/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *)sub_1B887FC(AccountLinkageUnlinkConfirmDialog_ClickDelegate_TypeInfo);
  AccountLinkageUnlinkConfirmDialog_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent__ConfirmUnlinkAccountLinkage_b__23_0__,
    0LL);
  if ( !Instance )
    sub_1B8880C(v11, v12);
  v13 = (UnityEngine_Vector2Int_o)0xF0000002BCLL;
  CommonUI__OpenAccountLinkageUnlinkConfirmDlg((CommonUI_o *)Instance, v3, v6, v7, v8, v10, v13, 0LL);
}


void __fastcall AccountLinkageComponent__DoAccountLinkage(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4A5661A & 1) == 0 )
  {
    sub_1B885B0(&Method_AccountLinkageComponent_SuccessedAccountLinkage__);
    sub_1B885B0(&AccountLinkageParams_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_AccountLinkageLinkRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A5661A = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_SuccessedAccountLinkage__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_AccountLinkageLinkRequest___);
  if ( !Request_object )
    sub_1B8880C(0LL, v5);
  AccountLinkageLinkRequest__beginRequest(
    (AccountLinkageLinkRequest_o *)Request_object,
    AccountLinkageParams_TypeInfo->static_fields->accountLinkageToken,
    0LL);
}


void __fastcall AccountLinkageComponent__HideMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall AccountLinkageComponent__IssueTokenCallback(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  AccountLinkageComponent_o *v4; // x19
  const MethodInfo *v5; // x1

  v4 = this;
  if ( (byte_4A56619 & 1) == 0 )
  {
    sub_1B885B0(&AccountLinkageParams_TypeInfo);
    this = (AccountLinkageComponent_o *)sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    byte_4A56619 = 1;
  }
  if ( !result )
    sub_1B8880C(this, result);
  if ( System_String__Equals_61715348(result, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
  {
    if ( AccountLinkageParams_TypeInfo->static_fields->isRequestedAccountLinked )
      AccountLinkageComponent__ReConfirmAccountLinkage(v4, v5);
    else
      AccountLinkageComponent__DoAccountLinkage(v4, v5);
  }
  else
  {
    AccountLinkageParams__ResetParams(0LL);
  }
}


void __fastcall AccountLinkageComponent__LinkageStatusCheck(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4A56610 & 1) == 0 )
  {
    sub_1B885B0(&Method_AccountLinkageComponent_SetupMenu__);
    sub_1B885B0(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A56610 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_AccountLinkageComponent_SetupMenu__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1B8880C(0LL, v5);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0LL);
}


void __fastcall AccountLinkageComponent__OnPartialMaintenance(
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
  __int64 v10; // x0
  __int64 v11; // x1
  System_Nullable_int__o v12; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_float__o v13; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_float__o v14; // 0:x0.8
  System_Nullable_int__o v15; // 0:x0.8
  System_Nullable_float__o v16; // 0:x3.8
  System_Nullable_int__o v17; // 0:x4.8

  if ( (byte_4A56622 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_int___ctor__);
    sub_1B885B0(&Method_System_Nullable_float___ctor__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_AccountLinkageComponent___c__OnPartialMaintenance_b__29_0__);
    sub_1B885B0(&AccountLinkageComponent___c_TypeInfo);
    byte_4A56622 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__29_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__29_0, v8, Method_AccountLinkageComponent___c__OnPartialMaintenance_b__29_0__, 0LL);
    static_fields = AccountLinkageComponent___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = _9__29_0;
    sub_1B88554(&static_fields->__9__29_0, _9__29_0);
  }
  v14 = (System_Nullable_float__o)&v13;
  v13 = 0LL;
  System_Nullable_float____ctor(v14, 36.0, (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
  v15 = (System_Nullable_int__o)&v12;
  v12 = 0LL;
  System_Nullable_int____ctor(v15, 26, (const MethodInfo_361A2C0 *)Method_System_Nullable_int___ctor__);
  if ( !v6 )
    sub_1B8880C(v10, v11);
  v17 = v12;
  v16 = v13;
  CommonUI__OpenAccountLinkageNotificationDialog(v6, mainteMessage, _9__29_0, v16, v17, 0, 0LL);
}


void __fastcall AccountLinkageComponent__OnSiteMaintenance(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x19
  Il2CppObject *Instance; // x0
  AccountLinkageComponent___c_c *v4; // x8
  CommonUI_o *v5; // x20
  System_Action_o *_9__28_0; // x21
  Il2CppObject *v7; // x22
  struct AccountLinkageComponent___c_StaticFields *static_fields; // x0
  __int64 v9; // x0
  __int64 v10; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v13; // 0:x3.8
  System_Nullable_int__o v14; // 0:x4.8

  if ( (byte_4A56621 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_int___ctor__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_AccountLinkageComponent___c__OnSiteMaintenance_b__28_0__);
    sub_1B885B0(&AccountLinkageComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_2005/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/);
    byte_4A56621 = 1;
  }
  msgFontSize = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v2 = LocalizationManager__Get((System_String_o *)StringLiteral_2005/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    _9__28_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__28_0, v7, Method_AccountLinkageComponent___c__OnSiteMaintenance_b__28_0__, 0LL);
    static_fields = AccountLinkageComponent___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = _9__28_0;
    sub_1B88554(&static_fields->__9__28_0, _9__28_0);
  }
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 28, (const MethodInfo_361A2C0 *)Method_System_Nullable_int___ctor__);
  if ( !v5 )
    sub_1B8880C(v9, v10);
  v14 = msgFontSize;
  v13 = 0LL;
  CommonUI__OpenAccountLinkageNotificationDialog(v5, v2, _9__28_0, v13, v14, 0, 0LL);
}


void __fastcall AccountLinkageComponent__OpenLoginWebview(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4A56615 & 1) == 0 )
  {
    sub_1B885B0(&Method_AccountLinkageComponent_OpenWebViewCallback__);
    sub_1B885B0(&Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A56615 = 1;
  }
  AccountLinkageParams__ResetParams(0LL);
  AccountLinkageParams__GetCodeChallenge(0LL);
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_OpenWebViewCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___);
  if ( !Request_object )
    sub_1B8880C(0LL, v5);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


void __fastcall AccountLinkageComponent__OpenMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  BaseMenu_o *accountLinkageMenu; // x20
  AccountLinkageComponent_o *v6; // x0
  const MethodInfo *v7; // x1
  int32_t notificationType; // w8

  if ( (byte_4A5660D & 1) == 0 )
  {
    sub_1B885B0(&AccountLinkageParams_TypeInfo);
    sub_1B885B0(&StringLiteral_5486/*"END_OPEN_ACCOUNT_LINKAGE_MENU"*/);
    byte_4A5660D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  accountLinkageMenu = (BaseMenu_o *)this->fields.accountLinkageMenu;
  if ( !accountLinkageMenu )
    goto LABEL_12;
  AccountLinkageMenu__InitView(this->fields.accountLinkageMenu, v4);
  BaseMenu__Open(accountLinkageMenu, 0LL, 0LL);
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
    sub_1B8880C(gameObject, v4);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5486/*"END_OPEN_ACCOUNT_LINKAGE_MENU"*/, 0LL);
}


void __fastcall AccountLinkageComponent__OpenWebViewCallback(
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
  if ( (byte_4A56616 & 1) == 0 )
  {
    sub_1B885B0(&Method_AccountLinkageComponent_CloseWebViewCallback__);
    sub_1B885B0(&AccountLinkageParams_TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&WebViewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    this = (AccountLinkageComponent_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A56616 = 1;
  }
  if ( !result )
    sub_1B8880C(this, result);
  if ( System_String__Equals_61715348(result, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
  {
    AuthURL = AccountLinkageParams__GetAuthURL(0, 0LL);
    static_fields = AccountLinkageParams_TypeInfo->static_fields;
    basicUserName = static_fields->basicUserName;
    basicPassword = static_fields->basicPassword;
    v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v9, v4, Method_AccountLinkageComponent_CloseWebViewCallback__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    if ( basicUserName == 0LL || basicPassword == 0LL )
      WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, AuthURL, v9, 0LL);
    else
      WebViewManager__OpenViewWithBasicAuth(
        (System_String_o *)StringLiteral_1/*""*/,
        AuthURL,
        basicUserName,
        basicPassword,
        v9,
        0LL);
  }
}


void __fastcall AccountLinkageComponent__OverrideAccountLinkage(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  AccountLinkageComponent_c *v3; // x0
  System_String_o *v4; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v11; // 0:x3.8
  System_Nullable_int__o v12; // 0:x4.8

  if ( (byte_4A5661F & 1) == 0 )
  {
    sub_1B885B0(&Method_AccountLinkageComponent__OverrideAccountLinkage_b__26_0__);
    sub_1B885B0(&AccountLinkageComponent_TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_int___ctor__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_2010/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/);
    byte_4A5661F = 1;
  }
  v3 = AccountLinkageComponent_TypeInfo;
  msgFontSize = 0LL;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
    v3 = AccountLinkageComponent_TypeInfo;
  }
  v3->static_fields->isLinked = 0;
  AccountLinkageComponent__HideMenu(this, method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_2010/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_AccountLinkageComponent__OverrideAccountLinkage_b__26_0__, 0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 24, (const MethodInfo_361A2C0 *)Method_System_Nullable_int___ctor__);
  if ( !Instance )
    sub_1B8880C(v7, v8);
  v12 = msgFontSize;
  v11 = 0LL;
  CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v4, v6, v11, v12, 0, 0LL);
}


void __fastcall AccountLinkageComponent__ProcessAccountLinkage(
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
  if ( (byte_4A56614 & 1) == 0 )
  {
    sub_1B885B0(&AccountLinkageComponent_TypeInfo);
    sub_1B885B0(&AccountLinkageParams_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (AccountLinkageComponent_o *)sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    byte_4A56614 = 1;
  }
  if ( !result )
    goto LABEL_21;
  if ( !System_String__Equals_61715348(result, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
    return;
  this = (AccountLinkageComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (AccountLinkageComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___)) == 0LL )
  {
LABEL_21:
    sub_1B8880C(this, result);
  }
  v5 = (PartialMaintenanceMaster_o *)this;
  isAniplexPlusAccountLinkageMaintenanceNow = PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow(
                                                (PartialMaintenanceMaster_o *)this,
                                                0LL);
  if ( isAniplexPlusAccountLinkageMaintenanceNow )
  {
    AniplexPlusAccountLinkageMaintenanceMessage = (AccountLinkageComponent_o *)PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
                                                                                 v5,
                                                                                 0LL);
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


void __fastcall AccountLinkageComponent__ReConfirmAccountLinkage(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x21
  System_String_o *SelfUserGame; // x0
  __int64 v5; // x1
  System_String_o *friendCode; // x20
  Il2CppObject *v7; // x20
  System_String_o *v8; // x23
  System_String_o *v9; // x24
  System_String_o *v10; // x25
  System_String_o *v11; // x26
  System_String_o *buttonCancel; // x27
  System_String_o *buttonDecide; // x28
  System_String_o *v14; // x19
  Il2CppObject *v15; // x29
  Il2CppObject *NumberFormat_38394836; // x20
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  System_String_o *v21; // x29
  System_String_o *v22; // x20
  Il2CppObject *Instance; // x21
  AccountLinkageReConfirmDialog_ClickDelegate_o *v24; // x22
  Il2CppObject *v25; // [xsp+18h] [xbp-88h]
  Il2CppObject *v26; // [xsp+20h] [xbp-80h]
  Il2CppObject *object; // [xsp+28h] [xbp-78h]
  int32_t requestedAccountLevel; // [xsp+34h] [xbp-6Ch] BYREF
  UserGameEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A5661E & 1) == 0 )
  {
    sub_1B885B0(&Method_AccountLinkageComponent__ReConfirmAccountLinkage_b__25_0__);
    sub_1B885B0(&AccountLinkageParams_TypeInfo);
    sub_1B885B0(&AccountLinkageReConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_14830/*"USER_DATA_INFO"*/);
    sub_1B885B0(&StringLiteral_2020/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING"*/);
    sub_1B885B0(&StringLiteral_2016/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE"*/);
    sub_1B885B0(&StringLiteral_2011/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_2017/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/);
    sub_1B885B0(&StringLiteral_2019/*"ACCOUNT_LINKAGE_RECONFIRM_TITLE"*/);
    sub_1B885B0(&StringLiteral_2014/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5661E = 1;
  }
  v3 = (Il2CppObject *)StringLiteral_1/*""*/;
  entity = 0LL;
  SelfUserGame = (System_String_o *)UserGameMaster__TryGetSelfUserGame(&entity, 0LL);
  object = (Il2CppObject *)this;
  if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_15;
    friendCode = entity->fields.friendCode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    SelfUserGame = LocalizationManager__GetNumberFormat_38394836(friendCode, 0LL);
    if ( !entity
      || (v7 = (Il2CppObject *)SelfUserGame,
          SelfUserGame = AccountLinkageParams__AddColorCodeBracket(entity->fields.name, 0LL),
          !entity) )
    {
LABEL_15:
      sub_1B8880C(SelfUserGame, v5);
    }
    v25 = (Il2CppObject *)SelfUserGame;
    v26 = v7;
    v3 = (Il2CppObject *)System_Int32__ToString((int)entity + 80, 0LL);
  }
  else
  {
    v25 = v3;
    v26 = v3;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2019/*"ACCOUNT_LINKAGE_RECONFIRM_TITLE"*/, 0LL);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_2014/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE"*/, 0LL);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2016/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE"*/, 0LL);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2020/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING"*/, 0LL);
  buttonCancel = LocalizationManager__Get((System_String_o *)StringLiteral_2011/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/, 0LL);
  buttonDecide = LocalizationManager__Get((System_String_o *)StringLiteral_2017/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_14830/*"USER_DATA_INFO"*/, 0LL);
  v15 = (Il2CppObject *)AccountLinkageParams__AddColorCodeBracket(
                          AccountLinkageParams_TypeInfo->static_fields->requestedAccountName,
                          0LL);
  NumberFormat_38394836 = (Il2CppObject *)LocalizationManager__GetNumberFormat_38394836(
                                            AccountLinkageParams_TypeInfo->static_fields->requestedAccountFriendCode,
                                            0LL);
  requestedAccountLevel = AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &requestedAccountLevel, v17, v18, v19);
  v21 = System_String__Format_61721472(v14, NumberFormat_38394836, v15, v20, 0LL);
  v22 = System_String__Format_61721472(v14, v26, v25, v3, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v24 = (AccountLinkageReConfirmDialog_ClickDelegate_o *)sub_1B887FC(AccountLinkageReConfirmDialog_ClickDelegate_TypeInfo);
  AccountLinkageReConfirmDialog_ClickDelegate___ctor(
    v24,
    object,
    Method_AccountLinkageComponent__ReConfirmAccountLinkage_b__25_0__,
    0LL);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__OpenAccountLinkageReConfirmDialog(
    (CommonUI_o *)Instance,
    v24,
    v8,
    v9,
    v21,
    v22,
    v10,
    v11,
    buttonCancel,
    buttonDecide,
    0LL);
}


void __fastcall AccountLinkageComponent__SendIssueTokenRequest(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0
  __int64 v5; // x1

  if ( (byte_4A56618 & 1) == 0 )
  {
    sub_1B885B0(&Method_AccountLinkageComponent_IssueTokenCallback__);
    sub_1B885B0(&AccountLinkageParams_TypeInfo);
    sub_1B885B0(&Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A56618 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_IssueTokenCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___);
  if ( !Request_object )
    sub_1B8880C(0LL, v5);
  AccountLinkageIssueTokenRequest__beginRequest(
    (AccountLinkageIssueTokenRequest_o *)Request_object,
    AccountLinkageParams_TypeInfo->static_fields->authorizationCode,
    AccountLinkageParams_TypeInfo->static_fields->codeVerifier,
    0LL);
}


void __fastcall AccountLinkageComponent__SetupMenu(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  PartialMaintenanceMaster_o *v7; // x20
  AccountLinkageComponent_o *AniplexPlusAccountLinkageMaintenanceMessage; // x0
  const MethodInfo *v9; // x2
  __int64 *v10; // x8

  if ( (byte_4A56611 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_2073/*"ANIPLEX_PLUS_STATUS_OK"*/);
    sub_1B885B0(&StringLiteral_2072/*"ANIPLEX_PLUS_STATUS_NG"*/);
    byte_4A56611 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
      if ( Instance )
      {
        v7 = (PartialMaintenanceMaster_o *)Instance;
        if ( PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow(
               (PartialMaintenanceMaster_o *)Instance,
               0LL) )
        {
          AniplexPlusAccountLinkageMaintenanceMessage = (AccountLinkageComponent_o *)PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
                                                                                       v7,
                                                                                       0LL);
          AccountLinkageComponent__OnPartialMaintenance(
            AniplexPlusAccountLinkageMaintenanceMessage,
            (System_String_o *)AniplexPlusAccountLinkageMaintenanceMessage,
            v9);
          goto LABEL_8;
        }
        Instance = (DataManager_o *)this->fields.myRoomFsm;
        if ( Instance )
        {
          v10 = &StringLiteral_2073/*"ANIPLEX_PLUS_STATUS_OK"*/;
          goto LABEL_12;
        }
      }
    }
LABEL_13:
    sub_1B8880C(Instance, v5);
  }
LABEL_8:
  Instance = (DataManager_o *)this->fields.myRoomFsm;
  if ( !Instance )
    goto LABEL_13;
  v10 = &StringLiteral_2072/*"ANIPLEX_PLUS_STATUS_NG"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v10, 0LL);
}


void __fastcall AccountLinkageComponent__ShowMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall AccountLinkageComponent__StartAccountLinkage(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v5; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4A56613 & 1) == 0 )
  {
    sub_1B885B0(&Method_AccountLinkageComponent_StartAccountLinkage__);
    sub_1B885B0(&StringLiteral_15566/*"Wait_Action"*/);
    sub_1B885B0(&StringLiteral_7211/*"Help"*/);
    byte_4A56613 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_10;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15566/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v5 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
      if ( System_String__op_Inequality(v5, (System_String_o *)StringLiteral_7211/*"Help"*/, 0LL) )
        return;
      goto LABEL_7;
    }
LABEL_10:
    sub_1B8880C(myRoomFsm, method);
  }
LABEL_7:
  v6 = Method_AccountLinkageComponent_StartAccountLinkage__;
  if ( (*((_BYTE *)Method_AccountLinkageComponent_StartAccountLinkage__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B885C8();
  v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  AccountLinkageComponent__CheckMaintenanceInfo(this, v8);
}


void __fastcall AccountLinkageComponent__SuccessedAccountLinkage(
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
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v13; // 0:x3.8
  System_Nullable_int__o v14; // 0:x4.8

  v4 = (Il2CppObject *)this;
  if ( (byte_4A5661B & 1) == 0 )
  {
    sub_1B885B0(&Method_AccountLinkageComponent__SuccessedAccountLinkage_b__22_0__);
    sub_1B885B0(&AccountLinkageComponent_TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_int___ctor__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_1995/*"ACCOUNT_LINKAGE_COMPLETE_WARNING"*/);
    this = (AccountLinkageComponent_o *)sub_1B885B0(&StringLiteral_1994/*"ACCOUNT_LINKAGE_COMPLETE_MESSAGE"*/);
    byte_4A5661B = 1;
  }
  msgFontSize = 0LL;
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_61715348(result, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
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
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1994/*"ACCOUNT_LINKAGE_COMPLETE_MESSAGE"*/, 0LL);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_1995/*"ACCOUNT_LINKAGE_COMPLETE_WARNING"*/, 0LL);
    v8 = System_String__Concat_61707032(v6, v7, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v10, v4, Method_AccountLinkageComponent__SuccessedAccountLinkage_b__22_0__, 0LL);
    p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
    System_Nullable_int____ctor(p_msgFontSize, 30, (const MethodInfo_361A2C0 *)Method_System_Nullable_int___ctor__);
    if ( Instance )
    {
      v14 = msgFontSize;
      v13 = 0LL;
      CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v8, v10, v13, v14, 0, 0LL);
      goto LABEL_11;
    }
LABEL_12:
    sub_1B8880C(this, result);
  }
LABEL_11:
  AccountLinkageParams__ResetParams(0LL);
}


void __fastcall AccountLinkageComponent__UnlinkedAccountLinkage(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  AccountLinkageComponent_c *v5; // x0
  System_String_o *v6; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v8; // x22
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v11; // 0:x3.8
  System_Nullable_int__o v12; // 0:x4.8

  v4 = (Il2CppObject *)this;
  if ( (byte_4A5661D & 1) == 0 )
  {
    sub_1B885B0(&Method_AccountLinkageComponent__UnlinkedAccountLinkage_b__24_0__);
    sub_1B885B0(&AccountLinkageComponent_TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_int___ctor__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_1999/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/);
    this = (AccountLinkageComponent_o *)sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    byte_4A5661D = 1;
  }
  msgFontSize = 0LL;
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_61715348(result, (System_String_o *)StringLiteral_22225/*"ok"*/, 0LL) )
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
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1999/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v8, v4, Method_AccountLinkageComponent__UnlinkedAccountLinkage_b__24_0__, 0LL);
    p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
    System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_361A2C0 *)Method_System_Nullable_int___ctor__);
    if ( Instance )
    {
      v12 = msgFontSize;
      v11 = 0LL;
      CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v6, v8, v11, v12, 0, 0LL);
      return;
    }
LABEL_12:
    sub_1B8880C(this, result);
  }
  AccountLinkageParams__ResetParams(0LL);
}


void __fastcall AccountLinkageComponent___AutoDelinkAccountLinkage_b__27_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4A56629 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56629 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        AccountLinkageComponent__ShowMenu(this, v5),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v4);
}


void __fastcall AccountLinkageComponent___CloseMenu_b__10_0(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall AccountLinkageComponent___ConfirmUnlinkAccountLinkage_b__23_0(
        AccountLinkageComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20

  if ( (byte_4A56625 & 1) == 0 )
  {
    sub_1B885B0(&Method_AccountLinkageComponent_UnlinkedAccountLinkage__);
    sub_1B885B0(&Method_NetworkManager_getRequest_AccountLinkageUnlinkRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56625 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseAccountLinkageUnlinkConfirmDialog((CommonUI_o *)Instance, 0LL, 0LL);
  if ( isDecide )
  {
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_AccountLinkageComponent_UnlinkedAccountLinkage__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__getRequest_object_(
                 v7,
                 (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_AccountLinkageUnlinkRequest___);
    if ( Instance )
    {
      RequestBase__beginRequest((RequestBase_o *)Instance, 0LL);
      return;
    }
LABEL_10:
    sub_1B8880C(Instance, v6);
  }
}


void __fastcall AccountLinkageComponent___OverrideAccountLinkage_b__26_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4A56628 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56628 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        AccountLinkageComponent__ShowMenu(this, v5),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v4);
}


void __fastcall AccountLinkageComponent___ReConfirmAccountLinkage_b__25_0(
        AccountLinkageComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4A56627 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56627 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
  CommonUI__CloseAccountLinkageReConfirmDialog((CommonUI_o *)Instance, 0LL, 0LL);
  if ( isDecide )
    AccountLinkageComponent__DoAccountLinkage(this, v7);
}


void __fastcall AccountLinkageComponent___SuccessedAccountLinkage_b__22_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4A56624 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_3581/*"CLOSE_ACCOUNT_LINKAGE"*/);
    byte_4A56624 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0LL)
    || (AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v4),
        (Instance = (CommonUI_o *)this->fields.myRoomFsm) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3581/*"CLOSE_ACCOUNT_LINKAGE"*/, 0LL);
}


void __fastcall AccountLinkageComponent___UnlinkedAccountLinkage_b__24_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4A56626 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56626 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v4);
}


void __fastcall AccountLinkageComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4A5662A & 1) == 0 )
  {
    sub_1B885B0(&AccountLinkageComponent___c_TypeInfo);
    byte_4A5662A = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(AccountLinkageComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  AccountLinkageComponent___c_TypeInfo->static_fields->__9 = (struct AccountLinkageComponent___c_o *)v1;
  sub_1B88554(AccountLinkageComponent___c_TypeInfo->static_fields, v1);
}


void __fastcall AccountLinkageComponent___c___ctor(AccountLinkageComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AccountLinkageComponent___c___CloseWebViewCallback_b__18_0(
        AccountLinkageComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5662B & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5662B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall AccountLinkageComponent___c___OnPartialMaintenance_b__29_0(
        AccountLinkageComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5662D & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5662D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall AccountLinkageComponent___c___OnSiteMaintenance_b__28_0(
        AccountLinkageComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5662C & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5662C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}