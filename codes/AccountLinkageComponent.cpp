void __fastcall AccountLinkageComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct AccountLinkageComponent_StaticFields *static_fields; // x8

  if ( (byte_4B11545 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageComponent_TypeInfo, v1, v2);
    byte_4B11545 = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  AccountLinkageComponent_c *v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x20
  Il2CppObject *Instance; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x22
  __int64 v24; // x0
  __int64 v25; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v28; // 0:x3.8
  System_Nullable_int__o v29; // 0:x4.8

  if ( (byte_4B11542 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageComponent__AutoDelinkAccountLinkage_b__27_0__, method, v2);
    sub_1BCA7E0(&AccountLinkageComponent_TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Action_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_1996/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, v14, v15);
    byte_4B11542 = 1;
  }
  v16 = AccountLinkageComponent_TypeInfo;
  msgFontSize = 0LL;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo, method);
    v16 = AccountLinkageComponent_TypeInfo;
  }
  v16->static_fields->isLinked = 0;
  AccountLinkageComponent__HideMenu(this, method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_1996/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
  System_Action___ctor(
    v23,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent__AutoDelinkAccountLinkage_b__27_0__,
    0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
  if ( !Instance )
    sub_1BCAA3C(v24, v25);
  v29 = msgFontSize;
  v28 = 0LL;
  CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v18, v23, v28, v29, 0, 0LL);
}


void __fastcall AccountLinkageComponent__Awake(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall AccountLinkageComponent__CheckCsUnlink(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL8 SelfUserAccountLinkage; // x0
  __int64 v4; // x1
  int32_t type; // w8
  AccountLinkageComponent_c *v6; // x0
  struct AccountLinkageComponent_StaticFields *static_fields; // x9
  char v8; // w8
  UserAccountLinkageEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B11530 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageComponent_TypeInfo, method, v2);
    byte_4B11530 = 1;
  }
  entity = 0LL;
  SelfUserAccountLinkage = UserAccountLinkageMaster__TryGetSelfUserAccountLinkage(&entity, 0LL);
  if ( SelfUserAccountLinkage )
  {
    if ( !entity )
      sub_1BCAA3C(SelfUserAccountLinkage, v4);
    type = entity->fields.type;
    if ( type == 1 )
    {
      v6 = AccountLinkageComponent_TypeInfo;
      if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo, v4);
        v6 = AccountLinkageComponent_TypeInfo;
      }
      v8 = 1;
      goto LABEL_19;
    }
    if ( !type )
    {
      v6 = AccountLinkageComponent_TypeInfo;
      if ( AccountLinkageComponent_TypeInfo->_2.cctor_finished )
      {
LABEL_15:
        v8 = 0;
LABEL_19:
        static_fields = v6->static_fields;
        goto LABEL_20;
      }
LABEL_14:
      j_il2cpp_runtime_class_init_0(v6, v4);
      v6 = AccountLinkageComponent_TypeInfo;
      goto LABEL_15;
    }
  }
  v6 = AccountLinkageComponent_TypeInfo;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo, v4);
    v6 = AccountLinkageComponent_TypeInfo;
  }
  static_fields = v6->static_fields;
  if ( static_fields->isLinked )
  {
    if ( v6->_2.cctor_finished )
    {
      v8 = 0;
LABEL_20:
      static_fields->isLinked = v8;
      return;
    }
    goto LABEL_14;
  }
}


void __fastcall AccountLinkageComponent__CheckMaintenanceInfo(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  __int64 v12; // x1
  Il2CppObject *Request_object; // x0
  __int64 v14; // x1

  if ( (byte_4B11534 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageComponent_ProcessAccountLinkage__, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    byte_4B11534 = 1;
  }
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_ProcessAccountLinkage__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v14);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0LL);
}


void __fastcall AccountLinkageComponent__CloseMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  System_Action_o *v9; // x20
  __int64 v10; // x1
  BaseMenu_o *accountLinkageMenu; // x0

  if ( (byte_4B11531 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageComponent__CloseMenu_b__10_0__, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    byte_4B11531 = 1;
  }
  AccountLinkageParams__ResetParams(0LL);
  v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v6, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_AccountLinkageComponent__CloseMenu_b__10_0__, 0LL);
  accountLinkageMenu = (BaseMenu_o *)this->fields.accountLinkageMenu;
  if ( !accountLinkageMenu )
    sub_1BCAA3C(0LL, v10);
  BaseMenu__Close(accountLinkageMenu, v9, 0LL);
}


void __fastcall AccountLinkageComponent__CloseWebViewCallback(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  System_String_o *v20; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  Il2CppObject *Instance; // x20
  AccountLinkageComponent___c_c *v25; // x8
  System_Action_o *_9__18_0; // x21
  Il2CppObject *v27; // x22
  struct AccountLinkageComponent___c_StaticFields *static_fields; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v33; // 0:x3.8
  System_Nullable_int__o v34; // 0:x4.8

  if ( (byte_4B11539 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_AccountLinkageComponent___c__CloseWebViewCallback_b__18_0__, v12, v13);
    sub_1BCA7E0(&AccountLinkageComponent___c_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_2001/*"ACCOUNT_LINKAGE_ERROR_MESSAGE"*/, v16, v17);
    byte_4B11539 = 1;
  }
  msgFontSize = 0LL;
  if ( System_String__IsNullOrEmpty(AccountLinkageParams_TypeInfo->static_fields->authorizationCode, 0LL) )
  {
    AccountLinkageParams__ResetParams(0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2001/*"ACCOUNT_LINKAGE_ERROR_MESSAGE"*/, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v25 = AccountLinkageComponent___c_TypeInfo;
    if ( !AccountLinkageComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageComponent___c_TypeInfo, v21);
      v25 = AccountLinkageComponent___c_TypeInfo;
    }
    _9__18_0 = v25->static_fields->__9__18_0;
    if ( !_9__18_0 )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25, v21);
        v25 = AccountLinkageComponent___c_TypeInfo;
      }
      v27 = (Il2CppObject *)v25->static_fields->__9;
      _9__18_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
      System_Action___ctor(_9__18_0, v27, Method_AccountLinkageComponent___c__CloseWebViewCallback_b__18_0__, 0LL);
      static_fields = AccountLinkageComponent___c_TypeInfo->static_fields;
      static_fields->__9__18_0 = _9__18_0;
      sub_1BCA784(&static_fields->__9__18_0, _9__18_0);
    }
    p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
    System_Nullable_int____ctor(p_msgFontSize, 30, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
    if ( !Instance )
      sub_1BCAA3C(v29, v30);
    v34 = msgFontSize;
    v33 = 0LL;
    CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v20, _9__18_0, v33, v34, 0, 0LL);
  }
  else
  {
    AccountLinkageComponent__SendIssueTokenRequest(this, v18);
  }
}


void __fastcall AccountLinkageComponent__ConfirmUnlinkAccountLinkage(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_String_o *v22; // x20
  System_String_o *v23; // x21
  System_String_o *v24; // x0
  System_String_o *v25; // x21
  System_String_o *v26; // x22
  System_String_o *v27; // x23
  Il2CppObject *Instance; // x24
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *v32; // x25
  __int64 v33; // x0
  __int64 v34; // x1
  UnityEngine_Vector2Int_o v35; // 0:x6.8

  if ( (byte_4B1153E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageComponent__ConfirmUnlinkAccountLinkage_b__23_0__, method, v2);
    sub_1BCA7E0(&AccountLinkageUnlinkConfirmDialog_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_1998/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_MESSAGE"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_1995/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_CANCEL"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_44/*"\n\n"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1997/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_DECIDE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_1999/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_TITLE"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_2000/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_WARNING"*/, v20, v21);
    byte_4B1153E = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_1999/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_TITLE"*/, 0LL);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_1998/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_MESSAGE"*/, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_2000/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_WARNING"*/, 0LL);
  v25 = System_String__Concat_62412480(v23, (System_String_o *)StringLiteral_44/*"\n\n"*/, v24, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_1997/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_DECIDE"*/, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_1995/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v32 = (AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                               AccountLinkageUnlinkConfirmDialog_ClickDelegate_TypeInfo,
                                                               v29,
                                                               v30,
                                                               v31);
  AccountLinkageUnlinkConfirmDialog_ClickDelegate___ctor(
    v32,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent__ConfirmUnlinkAccountLinkage_b__23_0__,
    0LL);
  if ( !Instance )
    sub_1BCAA3C(v33, v34);
  v35 = (UnityEngine_Vector2Int_o)0xF0000002BCLL;
  CommonUI__OpenAccountLinkageUnlinkConfirmDlg((CommonUI_o *)Instance, v22, v25, v26, v27, v32, v35, 0LL);
}


void __fastcall AccountLinkageComponent__DoAccountLinkage(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  __int64 v14; // x1
  Il2CppObject *Request_object; // x0
  __int64 v16; // x1

  if ( (byte_4B1153C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageComponent_SuccessedAccountLinkage__, method, v2);
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_AccountLinkageLinkRequest___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
    byte_4B1153C = 1;
  }
  v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_SuccessedAccountLinkage__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  Request_object = NetworkManager__getRequest_object_(
                     v13,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_AccountLinkageLinkRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v16);
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
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall AccountLinkageComponent__IssueTokenCallback(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  AccountLinkageComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x1

  v4 = this;
  if ( (byte_4B1153B & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, result, method);
    this = (AccountLinkageComponent_o *)sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    byte_4B1153B = 1;
  }
  if ( !result )
    sub_1BCAA3C(this, result);
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    if ( AccountLinkageParams_TypeInfo->static_fields->isRequestedAccountLinked )
      AccountLinkageComponent__ReConfirmAccountLinkage(v4, v7);
    else
      AccountLinkageComponent__DoAccountLinkage(v4, v7);
  }
  else
  {
    AccountLinkageParams__ResetParams(0LL);
  }
}


void __fastcall AccountLinkageComponent__LinkageStatusCheck(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  __int64 v12; // x1
  Il2CppObject *Request_object; // x0
  __int64 v14; // x1

  if ( (byte_4B11532 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageComponent_SetupMenu__, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    byte_4B11532 = 1;
  }
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
  NetworkManager_ResultCallbackFunc___ctor(v11, (Il2CppObject *)this, Method_AccountLinkageComponent_SetupMenu__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v14);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0LL);
}


void __fastcall AccountLinkageComponent__OnPartialMaintenance(
        AccountLinkageComponent_o *this,
        System_String_o *mainteMessage,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  AccountLinkageComponent___c_c *v18; // x8
  CommonUI_o *v19; // x20
  System_Action_o *_9__29_0; // x21
  Il2CppObject *v21; // x22
  struct AccountLinkageComponent___c_StaticFields *static_fields; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  System_Nullable_int__o v25; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_float__o v26; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_float__o v27; // 0:x0.8
  System_Nullable_int__o v28; // 0:x0.8
  System_Nullable_float__o v29; // 0:x3.8
  System_Nullable_int__o v30; // 0:x4.8

  if ( (byte_4B11544 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, mainteMessage, method);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v4, v5);
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_AccountLinkageComponent___c__OnPartialMaintenance_b__29_0__, v10, v11);
    sub_1BCA7E0(&AccountLinkageComponent___c_TypeInfo, v12, v13);
    byte_4B11544 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AccountLinkageComponent___c_TypeInfo;
  v19 = (CommonUI_o *)Instance;
  if ( !AccountLinkageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent___c_TypeInfo, v15);
    v18 = AccountLinkageComponent___c_TypeInfo;
  }
  _9__29_0 = v18->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18, v15);
      v18 = AccountLinkageComponent___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__29_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
    System_Action___ctor(_9__29_0, v21, Method_AccountLinkageComponent___c__OnPartialMaintenance_b__29_0__, 0LL);
    static_fields = AccountLinkageComponent___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = _9__29_0;
    sub_1BCA784(&static_fields->__9__29_0, _9__29_0);
  }
  v27 = (System_Nullable_float__o)&v26;
  v26 = 0LL;
  System_Nullable_float____ctor(v27, 36.0, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
  v28 = (System_Nullable_int__o)&v25;
  v25 = 0LL;
  System_Nullable_int____ctor(v28, 26, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
  if ( !v19 )
    sub_1BCAA3C(v23, v24);
  v30 = v25;
  v29 = v26;
  CommonUI__OpenAccountLinkageNotificationDialog(v19, mainteMessage, _9__29_0, v29, v30, 0, 0LL);
}


void __fastcall AccountLinkageComponent__OnSiteMaintenance(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x19
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  AccountLinkageComponent___c_c *v20; // x8
  CommonUI_o *v21; // x20
  System_Action_o *_9__28_0; // x21
  Il2CppObject *v23; // x22
  struct AccountLinkageComponent___c_StaticFields *static_fields; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v29; // 0:x3.8
  System_Nullable_int__o v30; // 0:x4.8

  if ( (byte_4B11543 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_AccountLinkageComponent___c__OnSiteMaintenance_b__28_0__, v9, v10);
    sub_1BCA7E0(&AccountLinkageComponent___c_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_2002/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/, v13, v14);
    byte_4B11543 = 1;
  }
  msgFontSize = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2002/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = AccountLinkageComponent___c_TypeInfo;
  v21 = (CommonUI_o *)Instance;
  if ( !AccountLinkageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent___c_TypeInfo, v17);
    v20 = AccountLinkageComponent___c_TypeInfo;
  }
  _9__28_0 = v20->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20, v17);
      v20 = AccountLinkageComponent___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__28_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
    System_Action___ctor(_9__28_0, v23, Method_AccountLinkageComponent___c__OnSiteMaintenance_b__28_0__, 0LL);
    static_fields = AccountLinkageComponent___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = _9__28_0;
    sub_1BCA784(&static_fields->__9__28_0, _9__28_0);
  }
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 28, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
  if ( !v21 )
    sub_1BCAA3C(v25, v26);
  v30 = msgFontSize;
  v29 = 0LL;
  CommonUI__OpenAccountLinkageNotificationDialog(v21, v15, _9__28_0, v29, v30, 0, 0LL);
}


void __fastcall AccountLinkageComponent__OpenLoginWebview(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  __int64 v14; // x1
  Il2CppObject *Request_object; // x0
  __int64 v16; // x1

  if ( (byte_4B11537 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageComponent_OpenWebViewCallback__, method, v2);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    byte_4B11537 = 1;
  }
  AccountLinkageParams__ResetParams(0LL);
  AccountLinkageParams__GetCodeChallenge(0LL);
  v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11, v12);
  NetworkManager_ResultCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_OpenWebViewCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  Request_object = NetworkManager__getRequest_object_(
                     v13,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v16);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


void __fastcall AccountLinkageComponent__OpenMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x1
  BaseMenu_o *accountLinkageMenu; // x20
  AccountLinkageComponent_o *v9; // x0
  const MethodInfo *v10; // x1
  int32_t notificationType; // w8

  if ( (byte_4B1152F & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_5562/*"END_OPEN_ACCOUNT_LINKAGE_MENU"*/, v4, v5);
    byte_4B1152F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  accountLinkageMenu = (BaseMenu_o *)this->fields.accountLinkageMenu;
  if ( !accountLinkageMenu )
    goto LABEL_12;
  AccountLinkageMenu__InitView(this->fields.accountLinkageMenu, v7);
  BaseMenu__Open(accountLinkageMenu, 0LL, 0LL);
  notificationType = AccountLinkageParams_TypeInfo->static_fields->notificationType;
  if ( notificationType == 2 )
  {
    AccountLinkageComponent__OverrideAccountLinkage(this, v10);
  }
  else if ( notificationType == 1 )
  {
    AccountLinkageComponent__AutoDelinkAccountLinkage(this, v10);
  }
  else
  {
    AccountLinkageComponent__CheckCsUnlink(v9, v10);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myRoomFsm;
  if ( !gameObject )
LABEL_12:
    sub_1BCAA3C(gameObject, v7);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5562/*"END_OPEN_ACCOUNT_LINKAGE_MENU"*/, 0LL);
}


void __fastcall AccountLinkageComponent__OpenWebViewCallback(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *AuthURL; // x20
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  System_String_o *basicUserName; // x21
  System_String_o *basicPassword; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x23
  __int64 v23; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_4B11538 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageComponent_CloseWebViewCallback__, result, method);
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Action_TypeInfo, v7, v8);
    sub_1BCA7E0(&WebViewManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v11, v12);
    this = (AccountLinkageComponent_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B11538 = 1;
  }
  if ( !result )
    sub_1BCAA3C(this, result);
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    AuthURL = AccountLinkageParams__GetAuthURL(0, 0LL);
    static_fields = AccountLinkageParams_TypeInfo->static_fields;
    basicUserName = static_fields->basicUserName;
    basicPassword = static_fields->basicPassword;
    v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
    System_Action___ctor(v22, v4, Method_AccountLinkageComponent_CloseWebViewCallback__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v23);
    if ( basicUserName == 0LL || basicPassword == 0LL )
      WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, AuthURL, v22, 0LL);
    else
      WebViewManager__OpenViewWithBasicAuth(
        (System_String_o *)StringLiteral_1/*""*/,
        AuthURL,
        basicUserName,
        basicPassword,
        v22,
        0LL);
  }
}


void __fastcall AccountLinkageComponent__OverrideAccountLinkage(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  AccountLinkageComponent_c *v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x20
  Il2CppObject *Instance; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x22
  __int64 v24; // x0
  __int64 v25; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v28; // 0:x3.8
  System_Nullable_int__o v29; // 0:x4.8

  if ( (byte_4B11541 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageComponent__OverrideAccountLinkage_b__26_0__, method, v2);
    sub_1BCA7E0(&AccountLinkageComponent_TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Action_TypeInfo, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_2007/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/, v14, v15);
    byte_4B11541 = 1;
  }
  v16 = AccountLinkageComponent_TypeInfo;
  msgFontSize = 0LL;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo, method);
    v16 = AccountLinkageComponent_TypeInfo;
  }
  v16->static_fields->isLinked = 0;
  AccountLinkageComponent__HideMenu(this, method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_2007/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_AccountLinkageComponent__OverrideAccountLinkage_b__26_0__, 0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 24, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
  if ( !Instance )
    sub_1BCAA3C(v24, v25);
  v29 = msgFontSize;
  v28 = 0LL;
  CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v18, v23, v28, v29, 0, 0LL);
}


void __fastcall AccountLinkageComponent__ProcessAccountLinkage(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  AccountLinkageComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  PartialMaintenanceMaster_o *v13; // x20
  _BOOL8 isAniplexPlusAccountLinkageMaintenanceNow; // x0
  const MethodInfo *v15; // x1
  AccountLinkageComponent_o *AniplexPlusAccountLinkageMaintenanceMessage; // x0
  const MethodInfo *v17; // x2
  AccountLinkageComponent_c *v18; // x0
  int32_t notificationType; // w8

  v4 = this;
  if ( (byte_4B11536 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageComponent_TypeInfo, result, method);
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    this = (AccountLinkageComponent_o *)sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v11, v12);
    byte_4B11536 = 1;
  }
  if ( !result )
    goto LABEL_21;
  if ( !System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
    return;
  this = (AccountLinkageComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (AccountLinkageComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___)) == 0LL )
  {
LABEL_21:
    sub_1BCAA3C(this, result);
  }
  v13 = (PartialMaintenanceMaster_o *)this;
  isAniplexPlusAccountLinkageMaintenanceNow = PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow(
                                                (PartialMaintenanceMaster_o *)this,
                                                0LL);
  if ( isAniplexPlusAccountLinkageMaintenanceNow )
  {
    AniplexPlusAccountLinkageMaintenanceMessage = (AccountLinkageComponent_o *)PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
                                                                                 v13,
                                                                                 0LL);
    AccountLinkageComponent__OnPartialMaintenance(
      AniplexPlusAccountLinkageMaintenanceMessage,
      (System_String_o *)AniplexPlusAccountLinkageMaintenanceMessage,
      v17);
  }
  else if ( AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError )
  {
    AccountLinkageComponent__OnSiteMaintenance(
      (AccountLinkageComponent_o *)isAniplexPlusAccountLinkageMaintenanceNow,
      v15);
  }
  else
  {
    v18 = AccountLinkageComponent_TypeInfo;
    if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo, v15);
      v18 = AccountLinkageComponent_TypeInfo;
    }
    if ( v18->static_fields->isLinked )
    {
      notificationType = AccountLinkageParams_TypeInfo->static_fields->notificationType;
      if ( notificationType == 2 )
      {
        AccountLinkageComponent__OverrideAccountLinkage(v4, v15);
      }
      else if ( notificationType == 1 )
      {
        AccountLinkageComponent__AutoDelinkAccountLinkage(v4, v15);
      }
      else
      {
        AccountLinkageComponent__ConfirmUnlinkAccountLinkage(v4, v15);
      }
    }
    else
    {
      AccountLinkageComponent__OpenLoginWebview(v4, v15);
    }
  }
}


void __fastcall AccountLinkageComponent__ReConfirmAccountLinkage(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppObject *v30; // x21
  System_String_o *SelfUserGame; // x0
  __int64 v32; // x1
  System_String_o *friendCode; // x20
  Il2CppObject *v34; // x20
  System_String_o *v35; // x23
  System_String_o *v36; // x24
  System_String_o *v37; // x25
  System_String_o *v38; // x26
  System_String_o *buttonCancel; // x27
  System_String_o *buttonDecide; // x28
  System_String_o *v41; // x19
  Il2CppObject *v42; // x29
  Il2CppObject *NumberFormat_39108640; // x20
  Il2CppObject *v44; // x0
  System_String_o *v45; // x29
  System_String_o *v46; // x20
  Il2CppObject *Instance; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  AccountLinkageReConfirmDialog_ClickDelegate_o *v51; // x22
  Il2CppObject *v52; // [xsp+18h] [xbp-88h]
  Il2CppObject *v53; // [xsp+20h] [xbp-80h]
  Il2CppObject *object; // [xsp+28h] [xbp-78h]
  int32_t requestedAccountLevel; // [xsp+34h] [xbp-6Ch] BYREF
  UserGameEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B11540 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageComponent__ReConfirmAccountLinkage_b__25_0__, method, v2);
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, v4, v5);
    sub_1BCA7E0(&AccountLinkageReConfirmDialog_ClickDelegate_TypeInfo, v6, v7);
    sub_1BCA7E0(&int_TypeInfo, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_14995/*"USER_DATA_INFO"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_2017/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_2013/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_2008/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_2014/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_2016/*"ACCOUNT_LINKAGE_RECONFIRM_TITLE"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_2011/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v28, v29);
    byte_4B11540 = 1;
  }
  v30 = (Il2CppObject *)StringLiteral_1/*""*/;
  entity = 0LL;
  SelfUserGame = (System_String_o *)UserGameMaster__TryGetSelfUserGame(&entity, 0LL);
  object = (Il2CppObject *)this;
  if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_15;
    friendCode = entity->fields.friendCode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
    SelfUserGame = LocalizationManager__GetNumberFormat_39108640(friendCode, 0LL);
    if ( !entity
      || (v34 = (Il2CppObject *)SelfUserGame,
          SelfUserGame = AccountLinkageParams__AddColorCodeBracket(entity->fields.name, 0LL),
          !entity) )
    {
LABEL_15:
      sub_1BCAA3C(SelfUserGame, v32);
    }
    v52 = (Il2CppObject *)SelfUserGame;
    v53 = v34;
    v30 = (Il2CppObject *)System_Int32__ToString((int)entity + 80, 0LL);
  }
  else
  {
    v52 = v30;
    v53 = v30;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_2016/*"ACCOUNT_LINKAGE_RECONFIRM_TITLE"*/, 0LL);
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_2011/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE"*/, 0LL);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_2013/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE"*/, 0LL);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_2017/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING"*/, 0LL);
  buttonCancel = LocalizationManager__Get((System_String_o *)StringLiteral_2008/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/, 0LL);
  buttonDecide = LocalizationManager__Get((System_String_o *)StringLiteral_2014/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/, 0LL);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_14995/*"USER_DATA_INFO"*/, 0LL);
  v42 = (Il2CppObject *)AccountLinkageParams__AddColorCodeBracket(
                          AccountLinkageParams_TypeInfo->static_fields->requestedAccountName,
                          0LL);
  NumberFormat_39108640 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39108640(
                                            AccountLinkageParams_TypeInfo->static_fields->requestedAccountFriendCode,
                                            0LL);
  requestedAccountLevel = AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &requestedAccountLevel);
  v45 = System_String__Format_62415660(v41, NumberFormat_39108640, v42, v44, 0LL);
  v46 = System_String__Format_62415660(v41, v53, v52, v30, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v51 = (AccountLinkageReConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                           AccountLinkageReConfirmDialog_ClickDelegate_TypeInfo,
                                                           v48,
                                                           v49,
                                                           v50);
  AccountLinkageReConfirmDialog_ClickDelegate___ctor(
    v51,
    object,
    Method_AccountLinkageComponent__ReConfirmAccountLinkage_b__25_0__,
    0LL);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__OpenAccountLinkageReConfirmDialog(
    (CommonUI_o *)Instance,
    v51,
    v35,
    v36,
    v45,
    v46,
    v37,
    v38,
    buttonCancel,
    buttonDecide,
    0LL);
}


void __fastcall AccountLinkageComponent__SendIssueTokenRequest(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  __int64 v14; // x1
  Il2CppObject *Request_object; // x0
  __int64 v16; // x1

  if ( (byte_4B1153A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageComponent_IssueTokenCallback__, method, v2);
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12);
    byte_4B1153A = 1;
  }
  v13 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2, v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_IssueTokenCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  Request_object = NetworkManager__getRequest_object_(
                     v13,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___);
  if ( !Request_object )
    sub_1BCAA3C(0LL, v16);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  DataManager_o *Instance; // x0
  PartialMaintenanceMaster_o *v15; // x20
  AccountLinkageComponent_o *AniplexPlusAccountLinkageMaintenanceMessage; // x0
  const MethodInfo *v17; // x2
  __int64 *v18; // x8

  if ( (byte_4B11533 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___, result, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_2070/*"ANIPLEX_PLUS_STATUS_OK"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_2069/*"ANIPLEX_PLUS_STATUS_NG"*/, v11, v12);
    byte_4B11533 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
      if ( Instance )
      {
        v15 = (PartialMaintenanceMaster_o *)Instance;
        if ( PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow(
               (PartialMaintenanceMaster_o *)Instance,
               0LL) )
        {
          AniplexPlusAccountLinkageMaintenanceMessage = (AccountLinkageComponent_o *)PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
                                                                                       v15,
                                                                                       0LL);
          AccountLinkageComponent__OnPartialMaintenance(
            AniplexPlusAccountLinkageMaintenanceMessage,
            (System_String_o *)AniplexPlusAccountLinkageMaintenanceMessage,
            v17);
          goto LABEL_8;
        }
        Instance = (DataManager_o *)this->fields.myRoomFsm;
        if ( Instance )
        {
          v18 = &StringLiteral_2070/*"ANIPLEX_PLUS_STATUS_OK"*/;
          goto LABEL_12;
        }
      }
    }
LABEL_13:
    sub_1BCAA3C(Instance, v13);
  }
LABEL_8:
  Instance = (DataManager_o *)this->fields.myRoomFsm;
  if ( !Instance )
    goto LABEL_13;
  v18 = &StringLiteral_2069/*"ANIPLEX_PLUS_STATUS_NG"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v18, 0LL);
}


void __fastcall AccountLinkageComponent__ShowMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall AccountLinkageComponent__StartAccountLinkage(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v10; // x0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4B11535 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageComponent_StartAccountLinkage__, method, v2);
    sub_1BCA7E0(&StringLiteral_15733/*"Wait_Action"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_7336/*"Help"*/, v6, v7);
    byte_4B11535 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_10;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15733/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v10 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
      if ( System_String__op_Inequality(v10, (System_String_o *)StringLiteral_7336/*"Help"*/, 0LL) )
        return;
      goto LABEL_7;
    }
LABEL_10:
    sub_1BCAA3C(myRoomFsm, method);
  }
LABEL_7:
  v11 = Method_AccountLinkageComponent_StartAccountLinkage__;
  if ( (*((_BYTE *)Method_AccountLinkageComponent_StartAccountLinkage__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1BCA7F8(Method_AccountLinkageComponent_StartAccountLinkage__);
  v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  AccountLinkageComponent__CheckMaintenanceInfo(this, v13);
}


void __fastcall AccountLinkageComponent__SuccessedAccountLinkage(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  AccountLinkageComponent_c *v22; // x0
  System_String_o *v23; // x20
  System_String_o *v24; // x0
  System_String_o *v25; // x20
  Il2CppObject *Instance; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *v30; // x22
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v33; // 0:x3.8
  System_Nullable_int__o v34; // 0:x4.8

  v4 = (Il2CppObject *)this;
  if ( (byte_4B1153D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageComponent__SuccessedAccountLinkage_b__22_0__, result, method);
    sub_1BCA7E0(&AccountLinkageComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Action_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_1992/*"ACCOUNT_LINKAGE_COMPLETE_WARNING"*/, v17, v18);
    this = (AccountLinkageComponent_o *)sub_1BCA7E0(&StringLiteral_1991/*"ACCOUNT_LINKAGE_COMPLETE_MESSAGE"*/, v19, v20);
    byte_4B1153D = 1;
  }
  msgFontSize = 0LL;
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    v22 = AccountLinkageComponent_TypeInfo;
    if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo, v21);
      v22 = AccountLinkageComponent_TypeInfo;
    }
    v22->static_fields->isLinked = 1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_1991/*"ACCOUNT_LINKAGE_COMPLETE_MESSAGE"*/, 0LL);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_1992/*"ACCOUNT_LINKAGE_COMPLETE_WARNING"*/, 0LL);
    v25 = System_String__Concat_62401220(v23, v24, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
    System_Action___ctor(v30, v4, Method_AccountLinkageComponent__SuccessedAccountLinkage_b__22_0__, 0LL);
    p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
    System_Nullable_int____ctor(p_msgFontSize, 30, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
    if ( Instance )
    {
      v34 = msgFontSize;
      v33 = 0LL;
      CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v25, v30, v33, v34, 0, 0LL);
      goto LABEL_11;
    }
LABEL_12:
    sub_1BCAA3C(this, result);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  AccountLinkageComponent_c *v20; // x0
  System_String_o *v21; // x20
  Il2CppObject *Instance; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_o *v26; // x22
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v29; // 0:x3.8
  System_Nullable_int__o v30; // 0:x4.8

  v4 = (Il2CppObject *)this;
  if ( (byte_4B1153F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageComponent__UnlinkedAccountLinkage_b__24_0__, result, method);
    sub_1BCA7E0(&AccountLinkageComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Action_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_1996/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, v15, v16);
    this = (AccountLinkageComponent_o *)sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v17, v18);
    byte_4B1153F = 1;
  }
  msgFontSize = 0LL;
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22465/*"ok"*/, 0LL) )
  {
    v20 = AccountLinkageComponent_TypeInfo;
    if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo, v19);
      v20 = AccountLinkageComponent_TypeInfo;
    }
    v20->static_fields->isLinked = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_1996/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
    System_Action___ctor(v26, v4, Method_AccountLinkageComponent__UnlinkedAccountLinkage_b__24_0__, 0LL);
    p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
    System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
    if ( Instance )
    {
      v30 = msgFontSize;
      v29 = 0LL;
      CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v21, v26, v29, v30, 0, 0LL);
      return;
    }
LABEL_12:
    sub_1BCAA3C(this, result);
  }
  AccountLinkageParams__ResetParams(0LL);
}


void __fastcall AccountLinkageComponent___AutoDelinkAccountLinkage_b__27_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4B1154B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1154B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        AccountLinkageComponent__ShowMenu(this, v6),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v5);
}


void __fastcall AccountLinkageComponent___CloseMenu_b__10_0(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountLinkageComponent___ConfirmUnlinkAccountLinkage_b__23_0(
        AccountLinkageComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  __int64 v19; // x1

  if ( (byte_4B11547 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AccountLinkageComponent_UnlinkedAccountLinkage__, isDecide, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_AccountLinkageUnlinkRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    byte_4B11547 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseAccountLinkageUnlinkConfirmDialog((CommonUI_o *)Instance, 0LL, 0LL);
  if ( isDecide )
  {
    v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v15, v16, v17);
    NetworkManager_ResultCallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_AccountLinkageComponent_UnlinkedAccountLinkage__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
    Instance = NetworkManager__getRequest_object_(
                 v18,
                 (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_AccountLinkageUnlinkRequest___);
    if ( Instance )
    {
      RequestBase__beginRequest((RequestBase_o *)Instance, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(Instance, v14);
  }
}


void __fastcall AccountLinkageComponent___OverrideAccountLinkage_b__26_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4B1154A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1154A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        AccountLinkageComponent__ShowMenu(this, v6),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountLinkageComponent___ReConfirmAccountLinkage_b__25_0(
        AccountLinkageComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4B11549 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B11549 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  CommonUI__CloseAccountLinkageReConfirmDialog((CommonUI_o *)Instance, 0LL, 0LL);
  if ( isDecide )
    AccountLinkageComponent__DoAccountLinkage(this, v7);
}


void __fastcall AccountLinkageComponent___SuccessedAccountLinkage_b__22_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CommonUI_o *Instance; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4B11546 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&StringLiteral_3609/*"CLOSE_ACCOUNT_LINKAGE"*/, v4, v5);
    byte_4B11546 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0LL)
    || (AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v7),
        (Instance = (CommonUI_o *)this->fields.myRoomFsm) == 0LL) )
  {
    sub_1BCAA3C(Instance, v7);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3609/*"CLOSE_ACCOUNT_LINKAGE"*/, 0LL);
}


void __fastcall AccountLinkageComponent___UnlinkedAccountLinkage_b__24_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B11548 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B11548 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v5);
}


void __fastcall AccountLinkageComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B1154C & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageComponent___c_TypeInfo, v1, v2);
    byte_4B1154C = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(AccountLinkageComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  AccountLinkageComponent___c_TypeInfo->static_fields->__9 = (struct AccountLinkageComponent___c_o *)v4;
  sub_1BCA784(AccountLinkageComponent___c_TypeInfo->static_fields, v4);
}


void __fastcall AccountLinkageComponent___c___ctor(AccountLinkageComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AccountLinkageComponent___c___CloseWebViewCallback_b__18_0(
        AccountLinkageComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1154D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1154D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall AccountLinkageComponent___c___OnPartialMaintenance_b__29_0(
        AccountLinkageComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1154F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1154F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall AccountLinkageComponent___c___OnSiteMaintenance_b__28_0(
        AccountLinkageComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1154E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1154E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}