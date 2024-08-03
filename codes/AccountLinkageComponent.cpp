void __fastcall AccountLinkageComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct AccountLinkageComponent_StaticFields *static_fields; // x8

  if ( (byte_49F7966 & 1) == 0 )
  {
    sub_1B640C8(&AccountLinkageComponent_TypeInfo, v1);
    byte_49F7966 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  AccountLinkageComponent_c *v9; // x0
  System_String_o *v10; // x20
  Il2CppObject *Instance; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x22
  __int64 v15; // x0
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v18; // 0:x3.8
  System_Nullable_int__o v19; // 0:x4.8

  if ( (byte_49F7963 & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageComponent__AutoDelinkAccountLinkage_b__27_0__, method);
    sub_1B640C8(&AccountLinkageComponent_TypeInfo, v3);
    sub_1B640C8(&System_Action_TypeInfo, v4);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Nullable_int___ctor__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_2001/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, v8);
    byte_49F7963 = 1;
  }
  v9 = AccountLinkageComponent_TypeInfo;
  msgFontSize = 0LL;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
    v9 = AccountLinkageComponent_TypeInfo;
  }
  v9->static_fields->isLinked = 0;
  AccountLinkageComponent__HideMenu(this, method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2001/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13);
  System_Action___ctor(
    v14,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent__AutoDelinkAccountLinkage_b__27_0__,
    0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_35CDD88 *)Method_System_Nullable_int___ctor__);
  if ( !Instance )
    sub_1B64324(v15);
  v19 = msgFontSize;
  v18 = 0LL;
  CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v10, v14, v18, v19, 0, 0LL);
}


void __fastcall AccountLinkageComponent__Awake(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall AccountLinkageComponent__CheckCsUnlink(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  _BOOL8 SelfUserAccountLinkage; // x0
  int32_t type; // w8
  AccountLinkageComponent_c *v4; // x0
  struct AccountLinkageComponent_StaticFields *static_fields; // x9
  char v6; // w8
  UserAccountLinkageEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_49F7951 & 1) == 0 )
  {
    sub_1B640C8(&AccountLinkageComponent_TypeInfo, method);
    byte_49F7951 = 1;
  }
  entity = 0LL;
  SelfUserAccountLinkage = UserAccountLinkageMaster__TryGetSelfUserAccountLinkage(&entity, 0LL);
  if ( SelfUserAccountLinkage )
  {
    if ( !entity )
      sub_1B64324(SelfUserAccountLinkage);
    type = entity->fields.type;
    if ( type == 1 )
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
    if ( !type )
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


void __fastcall AccountLinkageComponent__CheckMaintenanceInfo(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_49F7955 & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageComponent_ProcessAccountLinkage__, method);
    sub_1B640C8(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_49F7955 = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_ProcessAccountLinkage__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v7,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1B64324(0LL);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0LL);
}


void __fastcall AccountLinkageComponent__CloseMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  System_Action_o *v6; // x20
  BaseMenu_o *accountLinkageMenu; // x0

  if ( (byte_49F7952 & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageComponent__CloseMenu_b__10_0__, method);
    sub_1B640C8(&System_Action_TypeInfo, v3);
    byte_49F7952 = 1;
  }
  AccountLinkageParams__ResetParams(0LL);
  v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v4, v5);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_AccountLinkageComponent__CloseMenu_b__10_0__, 0LL);
  accountLinkageMenu = (BaseMenu_o *)this->fields.accountLinkageMenu;
  if ( !accountLinkageMenu )
    sub_1B64324(0LL);
  BaseMenu__Close(accountLinkageMenu, v6, 0LL);
}


void __fastcall AccountLinkageComponent__CloseWebViewCallback(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  System_String_o *v11; // x19
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Instance; // x20
  AccountLinkageComponent___c_c *v15; // x8
  System_Action_o *_9__18_0; // x21
  Il2CppObject *v17; // x22
  struct AccountLinkageComponent___c_StaticFields *static_fields; // x0
  __int64 v19; // x0
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v22; // 0:x3.8
  System_Nullable_int__o v23; // 0:x4.8

  if ( (byte_49F795A & 1) == 0 )
  {
    sub_1B640C8(&AccountLinkageParams_TypeInfo, method);
    sub_1B640C8(&System_Action_TypeInfo, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&Method_System_Nullable_int___ctor__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_AccountLinkageComponent___c__CloseWebViewCallback_b__18_0__, v7);
    sub_1B640C8(&AccountLinkageComponent___c_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_2006/*"ACCOUNT_LINKAGE_ERROR_MESSAGE"*/, v9);
    byte_49F795A = 1;
  }
  msgFontSize = 0LL;
  if ( System_String__IsNullOrEmpty(AccountLinkageParams_TypeInfo->static_fields->authorizationCode, 0LL) )
  {
    AccountLinkageParams__ResetParams(0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2006/*"ACCOUNT_LINKAGE_ERROR_MESSAGE"*/, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = AccountLinkageComponent___c_TypeInfo;
    if ( !AccountLinkageComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageComponent___c_TypeInfo);
      v15 = AccountLinkageComponent___c_TypeInfo;
    }
    _9__18_0 = v15->static_fields->__9__18_0;
    if ( !_9__18_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = AccountLinkageComponent___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__18_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13);
      System_Action___ctor(_9__18_0, v17, Method_AccountLinkageComponent___c__CloseWebViewCallback_b__18_0__, 0LL);
      static_fields = AccountLinkageComponent___c_TypeInfo->static_fields;
      static_fields->__9__18_0 = _9__18_0;
      sub_1B6406C(&static_fields->__9__18_0);
    }
    p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
    System_Nullable_int____ctor(p_msgFontSize, 30, (const MethodInfo_35CDD88 *)Method_System_Nullable_int___ctor__);
    if ( !Instance )
      sub_1B64324(v19);
    v23 = msgFontSize;
    v22 = 0LL;
    CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v11, _9__18_0, v22, v23, 0, 0LL);
  }
  else
  {
    AccountLinkageComponent__SendIssueTokenRequest(this, v10);
  }
}


void __fastcall AccountLinkageComponent__ConfirmUnlinkAccountLinkage(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
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
  System_String_o *v12; // x20
  System_String_o *v13; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x21
  System_String_o *v16; // x22
  System_String_o *v17; // x23
  Il2CppObject *Instance; // x24
  __int64 v19; // x1
  __int64 v20; // x2
  AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *v21; // x25
  __int64 v22; // x0
  UnityEngine_Vector2Int_o v23; // 0:x6.8

  if ( (byte_49F795F & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageComponent__ConfirmUnlinkAccountLinkage_b__23_0__, method);
    sub_1B640C8(&AccountLinkageUnlinkConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_2003/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_MESSAGE"*/, v6);
    sub_1B640C8(&StringLiteral_2000/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_CANCEL"*/, v7);
    sub_1B640C8(&StringLiteral_44/*"\n\n"*/, v8);
    sub_1B640C8(&StringLiteral_2002/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_DECIDE"*/, v9);
    sub_1B640C8(&StringLiteral_2004/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_TITLE"*/, v10);
    sub_1B640C8(&StringLiteral_2005/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_WARNING"*/, v11);
    byte_49F795F = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2004/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_TITLE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2003/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_MESSAGE"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2005/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_WARNING"*/, 0LL);
  v15 = System_String__Concat_61386656(v13, (System_String_o *)StringLiteral_44/*"\n\n"*/, v14, 0LL);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2002/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_DECIDE"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2000/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_CANCEL"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v21 = (AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                               AccountLinkageUnlinkConfirmDialog_ClickDelegate_TypeInfo,
                                                               v19,
                                                               v20);
  AccountLinkageUnlinkConfirmDialog_ClickDelegate___ctor(
    v21,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent__ConfirmUnlinkAccountLinkage_b__23_0__,
    0LL);
  if ( !Instance )
    sub_1B64324(v22);
  v23 = (UnityEngine_Vector2Int_o)0xF0000002BCLL;
  CommonUI__OpenAccountLinkageUnlinkConfirmDlg((CommonUI_o *)Instance, v12, v15, v16, v17, v21, v23, 0LL);
}


void __fastcall AccountLinkageComponent__DoAccountLinkage(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_49F795D & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageComponent_SuccessedAccountLinkage__, method);
    sub_1B640C8(&AccountLinkageParams_TypeInfo, v4);
    sub_1B640C8(&Method_NetworkManager_getRequest_AccountLinkageLinkRequest___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_49F795D = 1;
  }
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_SuccessedAccountLinkage__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v8,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_AccountLinkageLinkRequest___);
  if ( !Request_object )
    sub_1B64324(0LL);
  AccountLinkageLinkRequest__beginRequest(
    (AccountLinkageLinkRequest_o *)Request_object,
    AccountLinkageParams_TypeInfo->static_fields->accountLinkageToken,
    0LL);
}


void __fastcall AccountLinkageComponent__HideMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall AccountLinkageComponent__IssueTokenCallback(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  AccountLinkageComponent_o *v4; // x19
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  v4 = this;
  if ( (byte_49F795C & 1) == 0 )
  {
    sub_1B640C8(&AccountLinkageParams_TypeInfo, result);
    this = (AccountLinkageComponent_o *)sub_1B640C8(&StringLiteral_22137/*"ok"*/, v5);
    byte_49F795C = 1;
  }
  if ( !result )
    sub_1B64324(this);
  if ( System_String__Equals_61383712(result, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL) )
  {
    if ( AccountLinkageParams_TypeInfo->static_fields->isRequestedAccountLinked )
      AccountLinkageComponent__ReConfirmAccountLinkage(v4, v6);
    else
      AccountLinkageComponent__DoAccountLinkage(v4, v6);
  }
  else
  {
    AccountLinkageParams__ResetParams(0LL);
  }
}


void __fastcall AccountLinkageComponent__LinkageStatusCheck(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_49F7953 & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageComponent_SetupMenu__, method);
    sub_1B640C8(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_49F7953 = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
  NetworkManager_ResultCallbackFunc___ctor(v7, (Il2CppObject *)this, Method_AccountLinkageComponent_SetupMenu__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v7,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1B64324(0LL);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0LL);
}


void __fastcall AccountLinkageComponent__OnPartialMaintenance(
        AccountLinkageComponent_o *this,
        System_String_o *mainteMessage,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  AccountLinkageComponent___c_c *v12; // x8
  CommonUI_o *v13; // x20
  System_Action_o *_9__29_0; // x21
  Il2CppObject *v15; // x22
  struct AccountLinkageComponent___c_StaticFields *static_fields; // x0
  __int64 v17; // x0
  System_Nullable_int__o v18; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_float__o v19; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_float__o v20; // 0:x0.8
  System_Nullable_int__o v21; // 0:x0.8
  System_Nullable_float__o v22; // 0:x3.8
  System_Nullable_int__o v23; // 0:x4.8

  if ( (byte_49F7965 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, mainteMessage);
    sub_1B640C8(&Method_System_Nullable_int___ctor__, v4);
    sub_1B640C8(&Method_System_Nullable_float___ctor__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_AccountLinkageComponent___c__OnPartialMaintenance_b__29_0__, v7);
    sub_1B640C8(&AccountLinkageComponent___c_TypeInfo, v8);
    byte_49F7965 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = AccountLinkageComponent___c_TypeInfo;
  v13 = (CommonUI_o *)Instance;
  if ( !AccountLinkageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent___c_TypeInfo);
    v12 = AccountLinkageComponent___c_TypeInfo;
  }
  _9__29_0 = v12->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = AccountLinkageComponent___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__29_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
    System_Action___ctor(_9__29_0, v15, Method_AccountLinkageComponent___c__OnPartialMaintenance_b__29_0__, 0LL);
    static_fields = AccountLinkageComponent___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = _9__29_0;
    sub_1B6406C(&static_fields->__9__29_0);
  }
  v20 = (System_Nullable_float__o)&v19;
  v19 = 0LL;
  System_Nullable_float____ctor(v20, 36.0, (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
  v21 = (System_Nullable_int__o)&v18;
  v18 = 0LL;
  System_Nullable_int____ctor(v21, 26, (const MethodInfo_35CDD88 *)Method_System_Nullable_int___ctor__);
  if ( !v13 )
    sub_1B64324(v17);
  v23 = v18;
  v22 = v19;
  CommonUI__OpenAccountLinkageNotificationDialog(v13, mainteMessage, _9__29_0, v22, v23, 0, 0LL);
}


void __fastcall AccountLinkageComponent__OnSiteMaintenance(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x19
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  AccountLinkageComponent___c_c *v12; // x8
  CommonUI_o *v13; // x20
  System_Action_o *_9__28_0; // x21
  Il2CppObject *v15; // x22
  struct AccountLinkageComponent___c_StaticFields *static_fields; // x0
  __int64 v17; // x0
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v20; // 0:x3.8
  System_Nullable_int__o v21; // 0:x4.8

  if ( (byte_49F7964 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v2);
    sub_1B640C8(&Method_System_Nullable_int___ctor__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_AccountLinkageComponent___c__OnSiteMaintenance_b__28_0__, v5);
    sub_1B640C8(&AccountLinkageComponent___c_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_2007/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/, v7);
    byte_49F7964 = 1;
  }
  msgFontSize = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2007/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = AccountLinkageComponent___c_TypeInfo;
  v13 = (CommonUI_o *)Instance;
  if ( !AccountLinkageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent___c_TypeInfo);
    v12 = AccountLinkageComponent___c_TypeInfo;
  }
  _9__28_0 = v12->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = AccountLinkageComponent___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__28_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
    System_Action___ctor(_9__28_0, v15, Method_AccountLinkageComponent___c__OnSiteMaintenance_b__28_0__, 0LL);
    static_fields = AccountLinkageComponent___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = _9__28_0;
    sub_1B6406C(&static_fields->__9__28_0);
  }
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 28, (const MethodInfo_35CDD88 *)Method_System_Nullable_int___ctor__);
  if ( !v13 )
    sub_1B64324(v17);
  v21 = msgFontSize;
  v20 = 0LL;
  CommonUI__OpenAccountLinkageNotificationDialog(v13, v8, _9__28_0, v20, v21, 0, 0LL);
}


void __fastcall AccountLinkageComponent__OpenLoginWebview(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_49F7958 & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageComponent_OpenWebViewCallback__, method);
    sub_1B640C8(&Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_49F7958 = 1;
  }
  AccountLinkageParams__ResetParams(0LL);
  AccountLinkageParams__GetCodeChallenge(0LL);
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v6, v7);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_OpenWebViewCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v8,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___);
  if ( !Request_object )
    sub_1B64324(0LL);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0LL);
}


void __fastcall AccountLinkageComponent__OpenMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v5; // x1
  BaseMenu_o *accountLinkageMenu; // x20
  AccountLinkageComponent_o *v7; // x0
  const MethodInfo *v8; // x1
  int32_t notificationType; // w8

  if ( (byte_49F7950 & 1) == 0 )
  {
    sub_1B640C8(&AccountLinkageParams_TypeInfo, method);
    sub_1B640C8(&StringLiteral_5460/*"END_OPEN_ACCOUNT_LINKAGE_MENU"*/, v3);
    byte_49F7950 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  accountLinkageMenu = (BaseMenu_o *)this->fields.accountLinkageMenu;
  if ( !accountLinkageMenu )
    goto LABEL_12;
  AccountLinkageMenu__InitView(this->fields.accountLinkageMenu, v5);
  BaseMenu__Open(accountLinkageMenu, 0LL, 0LL);
  notificationType = AccountLinkageParams_TypeInfo->static_fields->notificationType;
  if ( notificationType == 2 )
  {
    AccountLinkageComponent__OverrideAccountLinkage(this, v8);
  }
  else if ( notificationType == 1 )
  {
    AccountLinkageComponent__AutoDelinkAccountLinkage(this, v8);
  }
  else
  {
    AccountLinkageComponent__CheckCsUnlink(v7, v8);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myRoomFsm;
  if ( !gameObject )
LABEL_12:
    sub_1B64324(gameObject);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5460/*"END_OPEN_ACCOUNT_LINKAGE_MENU"*/, 0LL);
}


void __fastcall AccountLinkageComponent__OpenWebViewCallback(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *AuthURL; // x20
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  System_String_o *basicUserName; // x21
  System_String_o *basicPassword; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x23

  v4 = (Il2CppObject *)this;
  if ( (byte_49F7959 & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageComponent_CloseWebViewCallback__, result);
    sub_1B640C8(&AccountLinkageParams_TypeInfo, v5);
    sub_1B640C8(&System_Action_TypeInfo, v6);
    sub_1B640C8(&WebViewManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v8);
    this = (AccountLinkageComponent_o *)sub_1B640C8(&StringLiteral_1/*""*/, v9);
    byte_49F7959 = 1;
  }
  if ( !result )
    sub_1B64324(this);
  if ( System_String__Equals_61383712(result, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL) )
  {
    AuthURL = AccountLinkageParams__GetAuthURL(0, 0LL);
    static_fields = AccountLinkageParams_TypeInfo->static_fields;
    basicUserName = static_fields->basicUserName;
    basicPassword = static_fields->basicPassword;
    v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
    System_Action___ctor(v16, v4, Method_AccountLinkageComponent_CloseWebViewCallback__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    if ( basicUserName == 0LL || basicPassword == 0LL )
      WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, AuthURL, v16, 0LL);
    else
      WebViewManager__OpenViewWithBasicAuth(
        (System_String_o *)StringLiteral_1/*""*/,
        AuthURL,
        basicUserName,
        basicPassword,
        v16,
        0LL);
  }
}


void __fastcall AccountLinkageComponent__OverrideAccountLinkage(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  AccountLinkageComponent_c *v9; // x0
  System_String_o *v10; // x20
  Il2CppObject *Instance; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x22
  __int64 v15; // x0
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v18; // 0:x3.8
  System_Nullable_int__o v19; // 0:x4.8

  if ( (byte_49F7962 & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageComponent__OverrideAccountLinkage_b__26_0__, method);
    sub_1B640C8(&AccountLinkageComponent_TypeInfo, v3);
    sub_1B640C8(&System_Action_TypeInfo, v4);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Nullable_int___ctor__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_2012/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/, v8);
    byte_49F7962 = 1;
  }
  v9 = AccountLinkageComponent_TypeInfo;
  msgFontSize = 0LL;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
    v9 = AccountLinkageComponent_TypeInfo;
  }
  v9->static_fields->isLinked = 0;
  AccountLinkageComponent__HideMenu(this, method);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2012/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_AccountLinkageComponent__OverrideAccountLinkage_b__26_0__, 0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 24, (const MethodInfo_35CDD88 *)Method_System_Nullable_int___ctor__);
  if ( !Instance )
    sub_1B64324(v15);
  v19 = msgFontSize;
  v18 = 0LL;
  CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v10, v14, v18, v19, 0, 0LL);
}


void __fastcall AccountLinkageComponent__ProcessAccountLinkage(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  AccountLinkageComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  PartialMaintenanceMaster_o *v9; // x20
  _BOOL8 isAniplexPlusAccountLinkageMaintenanceNow; // x0
  const MethodInfo *v11; // x1
  AccountLinkageComponent_o *AniplexPlusAccountLinkageMaintenanceMessage; // x0
  const MethodInfo *v13; // x2
  AccountLinkageComponent_c *v14; // x0
  int32_t notificationType; // w8

  v4 = this;
  if ( (byte_49F7957 & 1) == 0 )
  {
    sub_1B640C8(&AccountLinkageComponent_TypeInfo, result);
    sub_1B640C8(&AccountLinkageParams_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    this = (AccountLinkageComponent_o *)sub_1B640C8(&StringLiteral_22137/*"ok"*/, v8);
    byte_49F7957 = 1;
  }
  if ( !result )
    goto LABEL_21;
  if ( !System_String__Equals_61383712(result, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL) )
    return;
  this = (AccountLinkageComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (AccountLinkageComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___)) == 0LL )
  {
LABEL_21:
    sub_1B64324(this);
  }
  v9 = (PartialMaintenanceMaster_o *)this;
  isAniplexPlusAccountLinkageMaintenanceNow = PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow(
                                                (PartialMaintenanceMaster_o *)this,
                                                0LL);
  if ( isAniplexPlusAccountLinkageMaintenanceNow )
  {
    AniplexPlusAccountLinkageMaintenanceMessage = (AccountLinkageComponent_o *)PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
                                                                                 v9,
                                                                                 0LL);
    AccountLinkageComponent__OnPartialMaintenance(
      AniplexPlusAccountLinkageMaintenanceMessage,
      (System_String_o *)AniplexPlusAccountLinkageMaintenanceMessage,
      v13);
  }
  else if ( AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError )
  {
    AccountLinkageComponent__OnSiteMaintenance(
      (AccountLinkageComponent_o *)isAniplexPlusAccountLinkageMaintenanceNow,
      v11);
  }
  else
  {
    v14 = AccountLinkageComponent_TypeInfo;
    if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
      v14 = AccountLinkageComponent_TypeInfo;
    }
    if ( v14->static_fields->isLinked )
    {
      notificationType = AccountLinkageParams_TypeInfo->static_fields->notificationType;
      if ( notificationType == 2 )
      {
        AccountLinkageComponent__OverrideAccountLinkage(v4, v11);
      }
      else if ( notificationType == 1 )
      {
        AccountLinkageComponent__AutoDelinkAccountLinkage(v4, v11);
      }
      else
      {
        AccountLinkageComponent__ConfirmUnlinkAccountLinkage(v4, v11);
      }
    }
    else
    {
      AccountLinkageComponent__OpenLoginWebview(v4, v11);
    }
  }
}


void __fastcall AccountLinkageComponent__ReConfirmAccountLinkage(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
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
  __int64 v14; // x1
  __int64 v15; // x1
  Il2CppObject *v16; // x21
  System_String_o *SelfUserGame; // x0
  System_String_o *friendCode; // x20
  Il2CppObject *v19; // x20
  System_String_o *v20; // x23
  System_String_o *v21; // x24
  System_String_o *v22; // x25
  System_String_o *v23; // x26
  System_String_o *buttonCancel; // x27
  System_String_o *buttonDecide; // x28
  System_String_o *v26; // x19
  Il2CppObject *v27; // x29
  Il2CppObject *NumberFormat_38080420; // x20
  Il2CppObject *v29; // x0
  System_String_o *v30; // x29
  System_String_o *v31; // x20
  Il2CppObject *Instance; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  AccountLinkageReConfirmDialog_ClickDelegate_o *v35; // x22
  Il2CppObject *v36; // [xsp+18h] [xbp-88h]
  Il2CppObject *v37; // [xsp+20h] [xbp-80h]
  Il2CppObject *object; // [xsp+28h] [xbp-78h]
  int32_t requestedAccountLevel; // [xsp+34h] [xbp-6Ch] BYREF
  UserGameEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_49F7961 & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageComponent__ReConfirmAccountLinkage_b__25_0__, method);
    sub_1B640C8(&AccountLinkageParams_TypeInfo, v3);
    sub_1B640C8(&AccountLinkageReConfirmDialog_ClickDelegate_TypeInfo, v4);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_14759/*"USER_DATA_INFO"*/, v8);
    sub_1B640C8(&StringLiteral_2022/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING"*/, v9);
    sub_1B640C8(&StringLiteral_2018/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE"*/, v10);
    sub_1B640C8(&StringLiteral_2013/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/, v11);
    sub_1B640C8(&StringLiteral_2019/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/, v12);
    sub_1B640C8(&StringLiteral_2021/*"ACCOUNT_LINKAGE_RECONFIRM_TITLE"*/, v13);
    sub_1B640C8(&StringLiteral_2016/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE"*/, v14);
    sub_1B640C8(&StringLiteral_1/*""*/, v15);
    byte_49F7961 = 1;
  }
  v16 = (Il2CppObject *)StringLiteral_1/*""*/;
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
    SelfUserGame = LocalizationManager__GetNumberFormat_38080420(friendCode, 0LL);
    if ( !entity
      || (v19 = (Il2CppObject *)SelfUserGame,
          SelfUserGame = AccountLinkageParams__AddColorCodeBracket(entity->fields.name, 0LL),
          !entity) )
    {
LABEL_15:
      sub_1B64324(SelfUserGame);
    }
    v36 = (Il2CppObject *)SelfUserGame;
    v37 = v19;
    v16 = (Il2CppObject *)System_Int32__ToString((int)entity + 80, 0LL);
  }
  else
  {
    v36 = v16;
    v37 = v16;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2021/*"ACCOUNT_LINKAGE_RECONFIRM_TITLE"*/, 0LL);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_2016/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE"*/, 0LL);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2018/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE"*/, 0LL);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2022/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING"*/, 0LL);
  buttonCancel = LocalizationManager__Get((System_String_o *)StringLiteral_2013/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/, 0LL);
  buttonDecide = LocalizationManager__Get((System_String_o *)StringLiteral_2019/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_14759/*"USER_DATA_INFO"*/, 0LL);
  v27 = (Il2CppObject *)AccountLinkageParams__AddColorCodeBracket(
                          AccountLinkageParams_TypeInfo->static_fields->requestedAccountName,
                          0LL);
  NumberFormat_38080420 = (Il2CppObject *)LocalizationManager__GetNumberFormat_38080420(
                                            AccountLinkageParams_TypeInfo->static_fields->requestedAccountFriendCode,
                                            0LL);
  requestedAccountLevel = AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &requestedAccountLevel);
  v30 = System_String__Format_61389836(v26, NumberFormat_38080420, v27, v29, 0LL);
  v31 = System_String__Format_61389836(v26, v37, v36, v16, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v35 = (AccountLinkageReConfirmDialog_ClickDelegate_o *)sub_1B64314(
                                                           AccountLinkageReConfirmDialog_ClickDelegate_TypeInfo,
                                                           v33,
                                                           v34);
  AccountLinkageReConfirmDialog_ClickDelegate___ctor(
    v35,
    object,
    Method_AccountLinkageComponent__ReConfirmAccountLinkage_b__25_0__,
    0LL);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__OpenAccountLinkageReConfirmDialog(
    (CommonUI_o *)Instance,
    v35,
    v20,
    v21,
    v30,
    v31,
    v22,
    v23,
    buttonCancel,
    buttonDecide,
    0LL);
}


void __fastcall AccountLinkageComponent__SendIssueTokenRequest(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_49F795B & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageComponent_IssueTokenCallback__, method);
    sub_1B640C8(&AccountLinkageParams_TypeInfo, v4);
    sub_1B640C8(&Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_49F795B = 1;
  }
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_IssueTokenCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v8,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___);
  if ( !Request_object )
    sub_1B64324(0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  PartialMaintenanceMaster_o *v10; // x20
  AccountLinkageComponent_o *AniplexPlusAccountLinkageMaintenanceMessage; // x0
  const MethodInfo *v12; // x2
  __int64 *v13; // x8

  if ( (byte_49F7954 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___, result);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v6);
    sub_1B640C8(&StringLiteral_2075/*"ANIPLEX_PLUS_STATUS_OK"*/, v7);
    sub_1B640C8(&StringLiteral_2074/*"ANIPLEX_PLUS_STATUS_NG"*/, v8);
    byte_49F7954 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
      if ( Instance )
      {
        v10 = (PartialMaintenanceMaster_o *)Instance;
        if ( PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow(
               (PartialMaintenanceMaster_o *)Instance,
               0LL) )
        {
          AniplexPlusAccountLinkageMaintenanceMessage = (AccountLinkageComponent_o *)PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
                                                                                       v10,
                                                                                       0LL);
          AccountLinkageComponent__OnPartialMaintenance(
            AniplexPlusAccountLinkageMaintenanceMessage,
            (System_String_o *)AniplexPlusAccountLinkageMaintenanceMessage,
            v12);
          goto LABEL_8;
        }
        Instance = (DataManager_o *)this->fields.myRoomFsm;
        if ( Instance )
        {
          v13 = &StringLiteral_2075/*"ANIPLEX_PLUS_STATUS_OK"*/;
          goto LABEL_12;
        }
      }
    }
LABEL_13:
    sub_1B64324(Instance);
  }
LABEL_8:
  Instance = (DataManager_o *)this->fields.myRoomFsm;
  if ( !Instance )
    goto LABEL_13;
  v13 = &StringLiteral_2074/*"ANIPLEX_PLUS_STATUS_NG"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v13, 0LL);
}


void __fastcall AccountLinkageComponent__ShowMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall AccountLinkageComponent__StartAccountLinkage(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v7; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_49F7956 & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageComponent_StartAccountLinkage__, method);
    sub_1B640C8(&StringLiteral_15498/*"Wait_Action"*/, v3);
    sub_1B640C8(&StringLiteral_7181/*"Help"*/, v4);
    byte_49F7956 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_10;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15498/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v7 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
      if ( System_String__op_Inequality(v7, (System_String_o *)StringLiteral_7181/*"Help"*/, 0LL) )
        return;
      goto LABEL_7;
    }
LABEL_10:
    sub_1B64324(myRoomFsm);
  }
LABEL_7:
  v8 = Method_AccountLinkageComponent_StartAccountLinkage__;
  if ( (*((_BYTE *)Method_AccountLinkageComponent_StartAccountLinkage__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1B640E0();
  v9 = (System_Reflection_MethodBase_o *)sub_1B640AC(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  AccountLinkageComponent__CheckMaintenanceInfo(this, v10);
}


void __fastcall AccountLinkageComponent__SuccessedAccountLinkage(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  AccountLinkageComponent_c *v13; // x0
  System_String_o *v14; // x20
  System_String_o *v15; // x0
  System_String_o *v16; // x20
  Il2CppObject *Instance; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_o *v20; // x22
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v23; // 0:x3.8
  System_Nullable_int__o v24; // 0:x4.8

  v4 = (Il2CppObject *)this;
  if ( (byte_49F795E & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageComponent__SuccessedAccountLinkage_b__22_0__, result);
    sub_1B640C8(&AccountLinkageComponent_TypeInfo, v5);
    sub_1B640C8(&System_Action_TypeInfo, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&Method_System_Nullable_int___ctor__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B640C8(&StringLiteral_22137/*"ok"*/, v10);
    sub_1B640C8(&StringLiteral_1997/*"ACCOUNT_LINKAGE_COMPLETE_WARNING"*/, v11);
    this = (AccountLinkageComponent_o *)sub_1B640C8(&StringLiteral_1996/*"ACCOUNT_LINKAGE_COMPLETE_MESSAGE"*/, v12);
    byte_49F795E = 1;
  }
  msgFontSize = 0LL;
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_61383712(result, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL) )
  {
    v13 = AccountLinkageComponent_TypeInfo;
    if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
      v13 = AccountLinkageComponent_TypeInfo;
    }
    v13->static_fields->isLinked = 1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_1996/*"ACCOUNT_LINKAGE_COMPLETE_MESSAGE"*/, 0LL);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_1997/*"ACCOUNT_LINKAGE_COMPLETE_WARNING"*/, 0LL);
    v16 = System_String__Concat_61375396(v14, v15, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v18, v19);
    System_Action___ctor(v20, v4, Method_AccountLinkageComponent__SuccessedAccountLinkage_b__22_0__, 0LL);
    p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
    System_Nullable_int____ctor(p_msgFontSize, 30, (const MethodInfo_35CDD88 *)Method_System_Nullable_int___ctor__);
    if ( Instance )
    {
      v24 = msgFontSize;
      v23 = 0LL;
      CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v16, v20, v23, v24, 0, 0LL);
      goto LABEL_11;
    }
LABEL_12:
    sub_1B64324(this);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  AccountLinkageComponent_c *v12; // x0
  System_String_o *v13; // x20
  Il2CppObject *Instance; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x22
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v20; // 0:x3.8
  System_Nullable_int__o v21; // 0:x4.8

  v4 = (Il2CppObject *)this;
  if ( (byte_49F7960 & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageComponent__UnlinkedAccountLinkage_b__24_0__, result);
    sub_1B640C8(&AccountLinkageComponent_TypeInfo, v5);
    sub_1B640C8(&System_Action_TypeInfo, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&Method_System_Nullable_int___ctor__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B640C8(&StringLiteral_2001/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, v10);
    this = (AccountLinkageComponent_o *)sub_1B640C8(&StringLiteral_22137/*"ok"*/, v11);
    byte_49F7960 = 1;
  }
  msgFontSize = 0LL;
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_61383712(result, (System_String_o *)StringLiteral_22137/*"ok"*/, 0LL) )
  {
    v12 = AccountLinkageComponent_TypeInfo;
    if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
      v12 = AccountLinkageComponent_TypeInfo;
    }
    v12->static_fields->isLinked = 0;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2001/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
    System_Action___ctor(v17, v4, Method_AccountLinkageComponent__UnlinkedAccountLinkage_b__24_0__, 0LL);
    p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
    System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_35CDD88 *)Method_System_Nullable_int___ctor__);
    if ( Instance )
    {
      v21 = msgFontSize;
      v20 = 0LL;
      CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v13, v17, v20, v21, 0, 0LL);
      return;
    }
LABEL_12:
    sub_1B64324(this);
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

  if ( (byte_49F796C & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F796C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        AccountLinkageComponent__ShowMenu(this, v4),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v5);
}


void __fastcall AccountLinkageComponent___CloseMenu_b__10_0(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AccountLinkageComponent___ConfirmUnlinkAccountLinkage_b__23_0(
        AccountLinkageComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  NetworkManager_ResultCallbackFunc_o *v12; // x20

  if ( (byte_49F7968 & 1) == 0 )
  {
    sub_1B640C8(&Method_AccountLinkageComponent_UnlinkedAccountLinkage__, isDecide);
    sub_1B640C8(&Method_NetworkManager_getRequest_AccountLinkageUnlinkRequest___, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_49F7968 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseAccountLinkageUnlinkConfirmDialog((CommonUI_o *)Instance, 0LL, 0LL);
  if ( isDecide )
  {
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_AccountLinkageComponent_UnlinkedAccountLinkage__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__getRequest_object_(
                 v12,
                 (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_AccountLinkageUnlinkRequest___);
    if ( Instance )
    {
      RequestBase__beginRequest((RequestBase_o *)Instance, 0LL);
      return;
    }
LABEL_10:
    sub_1B64324(Instance);
  }
}


void __fastcall AccountLinkageComponent___OverrideAccountLinkage_b__26_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_49F796B & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F796B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        AccountLinkageComponent__ShowMenu(this, v4),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0LL) )
  {
    sub_1B64324(Instance);
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
  const MethodInfo *v6; // x1

  if ( (byte_49F796A & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_49F796A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseAccountLinkageReConfirmDialog((CommonUI_o *)Instance, 0LL, 0LL);
  if ( isDecide )
    AccountLinkageComponent__DoAccountLinkage(this, v6);
}


void __fastcall AccountLinkageComponent___SuccessedAccountLinkage_b__22_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49F7967 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B640C8(&StringLiteral_3559/*"CLOSE_ACCOUNT_LINKAGE"*/, v3);
    byte_49F7967 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0LL)
    || (AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v5),
        (Instance = (CommonUI_o *)this->fields.myRoomFsm) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3559/*"CLOSE_ACCOUNT_LINKAGE"*/, 0LL);
}


void __fastcall AccountLinkageComponent___UnlinkedAccountLinkage_b__24_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_49F7969 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F7969 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v4);
}


void __fastcall AccountLinkageComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19

  if ( (byte_49F796D & 1) == 0 )
  {
    sub_1B640C8(&AccountLinkageComponent___c_TypeInfo, v1);
    byte_49F796D = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(AccountLinkageComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  AccountLinkageComponent___c_TypeInfo->static_fields->__9 = (struct AccountLinkageComponent___c_o *)v3;
  sub_1B6406C(AccountLinkageComponent___c_TypeInfo->static_fields);
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

  if ( (byte_49F796E & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F796E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall AccountLinkageComponent___c___OnPartialMaintenance_b__29_0(
        AccountLinkageComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F7970 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F7970 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall AccountLinkageComponent___c___OnSiteMaintenance_b__28_0(
        AccountLinkageComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49F796F & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F796F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}