void AccountLinkageComponent___cctor(const MethodInfo *method)
{
  struct AccountLinkageComponent_StaticFields *static_fields; // x8

  if ( (byte_59332F0 & 1) == 0 )
  {
    sub_21FFC50(&AccountLinkageComponent_TypeInfo);
    byte_59332F0 = 1;
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
  __int64 v2; // x2
  AccountLinkageComponent_c *v4; // x0
  int v5; // w8
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v10; // x22
  System_Nullable_int__o p_msgFontSize; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  System_Nullable_int__o v14; // x4
  System_Nullable_float__o v15; // x3
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_59332ED & 1) == 0 )
  {
    sub_21FFC50(&Method_AccountLinkageComponent__AutoDelinkAccountLinkage_b__27_0__);
    sub_21FFC50(&AccountLinkageComponent_TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_int___ctor__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_1952/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/);
    byte_59332ED = 1;
  }
  v4 = AccountLinkageComponent_TypeInfo;
  v5 = *(&AccountLinkageComponent_TypeInfo->_2.cctor_finished + 1);
  msgFontSize = 0;
  if ( !v5 )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo, method, v2);
    v4 = AccountLinkageComponent_TypeInfo;
  }
  v4->static_fields->isLinked = 0;
  AccountLinkageComponent__HideMenu(this, method);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_1952/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_AccountLinkageComponent__AutoDelinkAccountLinkage_b__27_0__, 0);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_45B01D4 *)Method_System_Nullable_int___ctor__);
  if ( !Instance )
    sub_21FFECC(v12, v13);
  v14 = msgFontSize;
  v15 = 0;
  CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v8, v10, v15, v14, 0, 0);
}


void AccountLinkageComponent__Awake(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  ;
}


void AccountLinkageComponent__CheckCsUnlink(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  _BOOL8 SelfUserAccountLinkage; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  int v5; // w8
  AccountLinkageComponent_c *v6; // x0
  char v7; // w20
  struct AccountLinkageComponent_StaticFields *static_fields; // x8
  UserAccountLinkageEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_59332DB & 1) == 0 )
  {
    sub_21FFC50(&AccountLinkageComponent_TypeInfo);
    byte_59332DB = 1;
  }
  entity = 0;
  SelfUserAccountLinkage = UserAccountLinkageMaster__TryGetSelfUserAccountLinkage(&entity, 0);
  if ( SelfUserAccountLinkage )
  {
    if ( !entity )
      sub_21FFECC(SelfUserAccountLinkage, v3);
    v5 = *(_DWORD *)((char *)off_18 + (_QWORD)entity);
    if ( v5 == 1 )
    {
      v6 = AccountLinkageComponent_TypeInfo;
      v7 = 1;
LABEL_14:
      if ( *(&v6->_2.cctor_finished + 1) )
      {
LABEL_16:
        static_fields = v6->static_fields;
        goto LABEL_17;
      }
LABEL_15:
      j_il2cpp_runtime_class_init_0(v6, v3, v4);
      v6 = AccountLinkageComponent_TypeInfo;
      goto LABEL_16;
    }
    if ( !v5 )
    {
      v6 = AccountLinkageComponent_TypeInfo;
      v7 = 0;
      goto LABEL_14;
    }
  }
  v6 = AccountLinkageComponent_TypeInfo;
  if ( !*(&AccountLinkageComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo, v3, v4);
    v6 = AccountLinkageComponent_TypeInfo;
  }
  static_fields = v6->static_fields;
  if ( static_fields->isLinked )
  {
    v7 = 0;
    if ( *(&v6->_2.cctor_finished + 1) )
    {
LABEL_17:
      static_fields->isLinked = v7;
      return;
    }
    goto LABEL_15;
  }
}


void AccountLinkageComponent__CheckMaintenanceInfo(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_59332DF & 1) == 0 )
  {
    sub_21FFC50(&Method_AccountLinkageComponent_ProcessAccountLinkage__);
    sub_21FFC50(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_59332DF = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_ProcessAccountLinkage__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_21FFECC(0, v7);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0);
}


void AccountLinkageComponent__CloseMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  __int64 v4; // x1
  BaseMenu_o *accountLinkageMenu; // x0

  if ( (byte_59332DC & 1) == 0 )
  {
    sub_21FFC50(&Method_AccountLinkageComponent__CloseMenu_b__10_0__);
    sub_21FFC50(&System_Action_TypeInfo);
    byte_59332DC = 1;
  }
  AccountLinkageParams__ResetParams(0);
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_AccountLinkageComponent__CloseMenu_b__10_0__, 0);
  accountLinkageMenu = (BaseMenu_o *)this->fields.accountLinkageMenu;
  if ( !accountLinkageMenu )
    sub_21FFECC(0, v4);
  BaseMenu__Close(accountLinkageMenu, v3, 0);
}


void AccountLinkageComponent__CloseWebViewCallback(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  AccountLinkageComponent___c_c *v10; // x8
  CommonUI_o *v11; // x20
  struct AccountLinkageComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__18_0; // x21
  Il2CppObject *v14; // x22
  struct AccountLinkageComponent___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Nullable_int__o p_msgFontSize; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  System_Nullable_int__o v25; // x4
  System_Nullable_float__o v26; // x3
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59332E4 & 1) == 0 )
  {
    sub_21FFC50(&AccountLinkageParams_TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_int___ctor__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_AccountLinkageComponent___c__CloseWebViewCallback_b__18_0__);
    sub_21FFC50(&AccountLinkageComponent___c_TypeInfo);
    sub_21FFC50(&StringLiteral_1957/*"ACCOUNT_LINKAGE_ERROR_MESSAGE"*/);
    byte_59332E4 = 1;
  }
  msgFontSize = 0;
  if ( System_String__IsNullOrEmpty(AccountLinkageParams_TypeInfo->static_fields->authorizationCode, 0) )
  {
    AccountLinkageParams__ResetParams(0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1957/*"ACCOUNT_LINKAGE_ERROR_MESSAGE"*/, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = AccountLinkageComponent___c_TypeInfo;
    v11 = (CommonUI_o *)Instance;
    if ( !*(&AccountLinkageComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageComponent___c_TypeInfo, v8, v9);
      v10 = AccountLinkageComponent___c_TypeInfo;
    }
    static_fields = v10->static_fields;
    _9__18_0 = static_fields->__9__18_0;
    if ( !_9__18_0 )
    {
      if ( !*(&v10->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v10, v8, v9);
        static_fields = AccountLinkageComponent___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__18_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(_9__18_0, v14, Method_AccountLinkageComponent___c__CloseWebViewCallback_b__18_0__, 0);
      v15 = AccountLinkageComponent___c_TypeInfo->static_fields;
      v15->__9__18_0 = _9__18_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v15->__9__18_0, (int32_t)_9__18_0, v16, v17, v18, v19, v20, v21);
    }
    p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
    System_Nullable_int____ctor(p_msgFontSize, 30, (const MethodInfo_45B01D4 *)Method_System_Nullable_int___ctor__);
    if ( !v11 )
      sub_21FFECC(v23, v24);
    v25 = msgFontSize;
    v26 = 0;
    CommonUI__OpenAccountLinkageNotificationDialog(v11, v6, _9__18_0, v26, v25, 0, 0);
  }
  else
  {
    AccountLinkageComponent__SendIssueTokenRequest(this, v3);
  }
}


void AccountLinkageComponent__ConfirmUnlinkAccountLinkage(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v4; // x20
  System_String_o *v5; // x21
  System_String_o *v6; // x0
  System_String_o *v7; // x21
  System_String_o *v8; // x22
  System_String_o *v9; // x23
  Il2CppObject *Instance; // x24
  AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *v11; // x25
  __int64 v12; // x0
  __int64 v13; // x1
  UnityEngine_Vector2Int_o v14; // x6

  if ( (byte_59332E9 & 1) == 0 )
  {
    sub_21FFC50(&Method_AccountLinkageComponent__ConfirmUnlinkAccountLinkage_b__23_0__);
    sub_21FFC50(&AccountLinkageUnlinkConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_1954/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_1951/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_44/*"\n\n"*/);
    sub_21FFC50(&StringLiteral_1953/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_1955/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_TITLE"*/);
    sub_21FFC50(&StringLiteral_1956/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_WARNING"*/);
    byte_59332E9 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1955/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_TITLE"*/, 0);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_1954/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_MESSAGE"*/, 0);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1956/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_WARNING"*/, 0);
  v7 = System_String__Concat_75481624(v5, (System_String_o *)StringLiteral_44/*"\n\n"*/, v6, 0);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_1953/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_DECIDE"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_1951/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_CANCEL"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *)sub_21FFEBC(AccountLinkageUnlinkConfirmDialog_ClickDelegate_TypeInfo);
  AccountLinkageUnlinkConfirmDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent__ConfirmUnlinkAccountLinkage_b__23_0__,
    0);
  if ( !Instance )
    sub_21FFECC(v12, v13);
  v14 = (UnityEngine_Vector2Int_o)0xF0000002BCLL;
  CommonUI__OpenAccountLinkageUnlinkConfirmDlg((CommonUI_o *)Instance, v4, v7, v8, v9, v11, v14, 0);
}


void AccountLinkageComponent__DoAccountLinkage(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_59332E7 & 1) == 0 )
  {
    sub_21FFC50(&Method_AccountLinkageComponent_SuccessedAccountLinkage__);
    sub_21FFC50(&AccountLinkageParams_TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_AccountLinkageLinkRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_59332E7 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_SuccessedAccountLinkage__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_AccountLinkageLinkRequest___);
  if ( !Request_object )
    sub_21FFECC(0, v7);
  AccountLinkageLinkRequest__beginRequest(
    (AccountLinkageLinkRequest_o *)Request_object,
    AccountLinkageParams_TypeInfo->static_fields->accountLinkageToken,
    0);
}


void AccountLinkageComponent__HideMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v3);
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
  if ( (byte_59332E6 & 1) == 0 )
  {
    sub_21FFC50(&AccountLinkageParams_TypeInfo);
    this = (AccountLinkageComponent_o *)sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    byte_59332E6 = 1;
  }
  if ( !result )
    sub_21FFECC(this, result);
  if ( System_String__Equals_75473208(result, (System_String_o *)StringLiteral_23468/*"ok"*/, 0) )
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
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_59332DD & 1) == 0 )
  {
    sub_21FFC50(&Method_AccountLinkageComponent_SetupMenu__);
    sub_21FFC50(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_59332DD = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_AccountLinkageComponent_SetupMenu__, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_21FFECC(0, v7);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0);
}


void AccountLinkageComponent__OnPartialMaintenance(
        AccountLinkageComponent_o *this,
        System_String_o *mainteMessage,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  AccountLinkageComponent___c_c *v7; // x8
  CommonUI_o *v8; // x20
  struct AccountLinkageComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__29_0; // x21
  Il2CppObject *v11; // x22
  struct AccountLinkageComponent___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Nullable_float__o v19; // x0
  System_Nullable_int__o v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  System_Nullable_float__o v23; // x3
  System_Nullable_int__o v24; // x4
  System_Nullable_int__o v25; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_float__o v26; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_59332EF & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_int___ctor__);
    sub_21FFC50(&Method_System_Nullable_float___ctor__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_AccountLinkageComponent___c__OnPartialMaintenance_b__29_0__);
    sub_21FFC50(&AccountLinkageComponent___c_TypeInfo);
    byte_59332EF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AccountLinkageComponent___c_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !*(&AccountLinkageComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent___c_TypeInfo, v5, v6);
    v7 = AccountLinkageComponent___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__29_0 = static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v5, v6);
      static_fields = AccountLinkageComponent___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__29_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__29_0, v11, Method_AccountLinkageComponent___c__OnPartialMaintenance_b__29_0__, 0);
    v12 = AccountLinkageComponent___c_TypeInfo->static_fields;
    v12->__9__29_0 = _9__29_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__29_0, (int32_t)_9__29_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = (System_Nullable_float__o)&v26;
  v26 = 0;
  System_Nullable_float____ctor(v19, 36.0, (const MethodInfo_45B27E0 *)Method_System_Nullable_float___ctor__);
  v20 = (System_Nullable_int__o)&v25;
  v25 = 0;
  System_Nullable_int____ctor(v20, 26, (const MethodInfo_45B01D4 *)Method_System_Nullable_int___ctor__);
  if ( !v8 )
    sub_21FFECC(v21, v22);
  v24 = v25;
  v23 = v26;
  CommonUI__OpenAccountLinkageNotificationDialog(v8, mainteMessage, _9__29_0, v23, v24, 0, 0);
}


void AccountLinkageComponent__OnSiteMaintenance(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int v3; // w8
  System_String_o *v4; // x19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  AccountLinkageComponent___c_c *v8; // x8
  CommonUI_o *v9; // x20
  struct AccountLinkageComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__28_0; // x21
  Il2CppObject *v12; // x22
  struct AccountLinkageComponent___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Nullable_int__o p_msgFontSize; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  System_Nullable_int__o v23; // x4
  System_Nullable_float__o v24; // x3
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59332EE & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_int___ctor__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_AccountLinkageComponent___c__OnSiteMaintenance_b__28_0__);
    sub_21FFC50(&AccountLinkageComponent___c_TypeInfo);
    sub_21FFC50(&StringLiteral_1958/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/);
    byte_59332EE = 1;
  }
  v3 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  msgFontSize = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1958/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AccountLinkageComponent___c_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !*(&AccountLinkageComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent___c_TypeInfo, v6, v7);
    v8 = AccountLinkageComponent___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__28_0 = static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v6, v7);
      static_fields = AccountLinkageComponent___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__28_0, v12, Method_AccountLinkageComponent___c__OnSiteMaintenance_b__28_0__, 0);
    v13 = AccountLinkageComponent___c_TypeInfo->static_fields;
    v13->__9__28_0 = _9__28_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13->__9__28_0, (int32_t)_9__28_0, v14, v15, v16, v17, v18, v19);
  }
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 28, (const MethodInfo_45B01D4 *)Method_System_Nullable_int___ctor__);
  if ( !v9 )
    sub_21FFECC(v21, v22);
  v23 = msgFontSize;
  v24 = 0;
  CommonUI__OpenAccountLinkageNotificationDialog(v9, v4, _9__28_0, v24, v23, 0, 0);
}


void AccountLinkageComponent__OpenLoginWebview(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_59332E2 & 1) == 0 )
  {
    sub_21FFC50(&Method_AccountLinkageComponent_OpenWebViewCallback__);
    sub_21FFC50(&Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_59332E2 = 1;
  }
  AccountLinkageParams__ResetParams(0);
  AccountLinkageParams__GetCodeChallenge(0);
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_OpenWebViewCallback__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___);
  if ( !Request_object )
    sub_21FFECC(0, v7);
  RequestBase__beginRequest((RequestBase_o *)Request_object, 0);
}


void AccountLinkageComponent__OpenMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  AccountLinkageComponent_o *v5; // x0
  const MethodInfo *v6; // x1
  int32_t notificationType; // w8

  if ( (byte_59332DA & 1) == 0 )
  {
    sub_21FFC50(&AccountLinkageParams_TypeInfo);
    sub_21FFC50(&StringLiteral_5642/*"END_OPEN_ACCOUNT_LINKAGE_MENU"*/);
    byte_59332DA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.accountLinkageMenu;
  if ( !gameObject )
    goto LABEL_12;
  AccountLinkageMenu__Open((AccountLinkageMenu_o *)gameObject, 0);
  notificationType = AccountLinkageParams_TypeInfo->static_fields->notificationType;
  if ( notificationType == 2 )
  {
    AccountLinkageComponent__OverrideAccountLinkage(this, v6);
  }
  else if ( notificationType == 1 )
  {
    AccountLinkageComponent__AutoDelinkAccountLinkage(this, v6);
  }
  else
  {
    AccountLinkageComponent__CheckCsUnlink(v5, v6);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.myRoomFsm;
  if ( !gameObject )
LABEL_12:
    sub_21FFECC(gameObject, v4);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5642/*"END_OPEN_ACCOUNT_LINKAGE_MENU"*/, 0);
}


void AccountLinkageComponent__OpenWebViewCallback(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_String_o *AuthURL; // x20
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  System_String_o *basicPassword; // x22
  System_String_o *basicUserName; // x23
  System_Action_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  int v12; // w8

  v4 = (Il2CppObject *)this;
  if ( (byte_59332E3 & 1) == 0 )
  {
    sub_21FFC50(&Method_AccountLinkageComponent_CloseWebViewCallback__);
    sub_21FFC50(&AccountLinkageParams_TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&WebViewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    this = (AccountLinkageComponent_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59332E3 = 1;
  }
  if ( !result )
    sub_21FFECC(this, result);
  if ( System_String__Equals_75473208(result, (System_String_o *)StringLiteral_23468/*"ok"*/, 0) )
  {
    AuthURL = AccountLinkageParams__GetAuthURL(0, 0);
    static_fields = AccountLinkageParams_TypeInfo->static_fields;
    basicUserName = static_fields->basicUserName;
    basicPassword = static_fields->basicPassword;
    v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v9, v4, Method_AccountLinkageComponent_CloseWebViewCallback__, 0);
    v12 = *(&WebViewManager_TypeInfo->_2.cctor_finished + 1);
    if ( basicUserName && basicPassword )
    {
      if ( !v12 )
        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v10, v11);
      WebViewManager__OpenViewWithBasicAuth(
        (System_String_o *)StringLiteral_1/*""*/,
        AuthURL,
        basicUserName,
        basicPassword,
        v9,
        0);
    }
    else
    {
      if ( !v12 )
        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v10, v11);
      WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, AuthURL, v9, 0);
    }
  }
}


void AccountLinkageComponent__OverrideAccountLinkage(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AccountLinkageComponent_c *v4; // x0
  int v5; // w8
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v10; // x22
  System_Nullable_int__o p_msgFontSize; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  System_Nullable_int__o v14; // x4
  System_Nullable_float__o v15; // x3
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_59332EC & 1) == 0 )
  {
    sub_21FFC50(&Method_AccountLinkageComponent__OverrideAccountLinkage_b__26_0__);
    sub_21FFC50(&AccountLinkageComponent_TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_int___ctor__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_1963/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/);
    byte_59332EC = 1;
  }
  v4 = AccountLinkageComponent_TypeInfo;
  v5 = *(&AccountLinkageComponent_TypeInfo->_2.cctor_finished + 1);
  msgFontSize = 0;
  if ( !v5 )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo, method, v2);
    v4 = AccountLinkageComponent_TypeInfo;
  }
  v4->static_fields->isLinked = 0;
  AccountLinkageComponent__HideMenu(this, method);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_1963/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_AccountLinkageComponent__OverrideAccountLinkage_b__26_0__, 0);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 24, (const MethodInfo_45B01D4 *)Method_System_Nullable_int___ctor__);
  if ( !Instance )
    sub_21FFECC(v12, v13);
  v14 = msgFontSize;
  v15 = 0;
  CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v8, v10, v15, v14, 0, 0);
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
  __int64 v8; // x2
  AccountLinkageComponent_o *AniplexPlusAccountLinkageMaintenanceMessage; // x0
  const MethodInfo *v10; // x2
  AccountLinkageComponent_c *v11; // x0
  int32_t notificationType; // w8

  v4 = this;
  if ( (byte_59332E1 & 1) == 0 )
  {
    sub_21FFC50(&AccountLinkageComponent_TypeInfo);
    sub_21FFC50(&AccountLinkageParams_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (AccountLinkageComponent_o *)sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    byte_59332E1 = 1;
  }
  if ( !result )
    goto LABEL_21;
  if ( !System_String__Equals_75473208(result, (System_String_o *)StringLiteral_23468/*"ok"*/, 0) )
    return;
  this = (AccountLinkageComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (AccountLinkageComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___)) == 0 )
  {
LABEL_21:
    sub_21FFECC(this, result);
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
      v10);
  }
  else if ( AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError )
  {
    AccountLinkageComponent__OnSiteMaintenance(
      (AccountLinkageComponent_o *)isAniplexPlusAccountLinkageMaintenanceNow,
      v7);
  }
  else
  {
    v11 = AccountLinkageComponent_TypeInfo;
    if ( !*(&AccountLinkageComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo, v7, v8);
      v11 = AccountLinkageComponent_TypeInfo;
    }
    if ( v11->static_fields->isLinked )
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
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *v7; // x20
  Il2CppObject *v8; // x20
  System_String_o *v9; // x23
  System_String_o *v10; // x24
  System_String_o *v11; // x25
  System_String_o *v12; // x26
  System_String_o *buttonCancel; // x27
  System_String_o *buttonDecide; // x28
  System_String_o *v15; // x19
  Il2CppObject *v16; // x29
  Il2CppObject *NumberFormat_48211828; // x20
  Il2CppObject *v18; // x0
  System_String_o *v19; // x29
  System_String_o *v20; // x20
  Il2CppObject *Instance; // x21
  AccountLinkageReConfirmDialog_ClickDelegate_o *v22; // x22
  Il2CppObject *v23; // [xsp+18h] [xbp-88h]
  Il2CppObject *v24; // [xsp+20h] [xbp-80h]
  Il2CppObject *object; // [xsp+28h] [xbp-78h]
  int32_t requestedAccountLevel; // [xsp+34h] [xbp-6Ch] BYREF
  UserGameEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_59332EB & 1) == 0 )
  {
    sub_21FFC50(&Method_AccountLinkageComponent__ReConfirmAccountLinkage_b__25_0__);
    sub_21FFC50(&AccountLinkageParams_TypeInfo);
    sub_21FFC50(&AccountLinkageReConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_15411/*"USER_DATA_INFO"*/);
    sub_21FFC50(&StringLiteral_1973/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING"*/);
    sub_21FFC50(&StringLiteral_1969/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE"*/);
    sub_21FFC50(&StringLiteral_1964/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_1970/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/);
    sub_21FFC50(&StringLiteral_1972/*"ACCOUNT_LINKAGE_RECONFIRM_TITLE"*/);
    sub_21FFC50(&StringLiteral_1967/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59332EB = 1;
  }
  v3 = (Il2CppObject *)StringLiteral_1/*""*/;
  entity = 0;
  SelfUserGame = (System_String_o *)UserGameMaster__TryGetSelfUserGame(&entity, 0);
  object = (Il2CppObject *)this;
  if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_15;
    v7 = *(System_String_o **)((char *)&qword_70 + (_QWORD)entity);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
    SelfUserGame = LocalizationManager__GetNumberFormat_48211828(v7, 0);
    if ( !entity
      || (v8 = (Il2CppObject *)SelfUserGame,
          SelfUserGame = AccountLinkageParams__AddColorCodeBracket(
                           *(System_String_o **)((char *)off_18 + (_QWORD)entity),
                           0),
          !entity) )
    {
LABEL_15:
      sub_21FFECC(SelfUserGame, v5);
    }
    v23 = (Il2CppObject *)SelfUserGame;
    v24 = v8;
    v3 = (Il2CppObject *)System_Int32__ToString((int)entity + 80, 0);
  }
  else
  {
    v23 = v3;
    v24 = v3;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_1972/*"ACCOUNT_LINKAGE_RECONFIRM_TITLE"*/, 0);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_1967/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE"*/, 0);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_1969/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE"*/, 0);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_1973/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING"*/, 0);
  buttonCancel = LocalizationManager__Get((System_String_o *)StringLiteral_1964/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/, 0);
  buttonDecide = LocalizationManager__Get((System_String_o *)StringLiteral_1970/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/, 0);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_15411/*"USER_DATA_INFO"*/, 0);
  v16 = (Il2CppObject *)AccountLinkageParams__AddColorCodeBracket(
                          AccountLinkageParams_TypeInfo->static_fields->requestedAccountName,
                          0);
  NumberFormat_48211828 = (Il2CppObject *)LocalizationManager__GetNumberFormat_48211828(
                                            AccountLinkageParams_TypeInfo->static_fields->requestedAccountFriendCode,
                                            0);
  requestedAccountLevel = AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &requestedAccountLevel);
  v19 = System_String__Format_75484644(v15, NumberFormat_48211828, v16, v18, 0);
  v20 = System_String__Format_75484644(v15, v24, v23, v3, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (AccountLinkageReConfirmDialog_ClickDelegate_o *)sub_21FFEBC(AccountLinkageReConfirmDialog_ClickDelegate_TypeInfo);
  AccountLinkageReConfirmDialog_ClickDelegate___ctor(
    v22,
    object,
    Method_AccountLinkageComponent__ReConfirmAccountLinkage_b__25_0__,
    0);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__OpenAccountLinkageReConfirmDialog(
    (CommonUI_o *)Instance,
    v22,
    v9,
    v10,
    v19,
    v20,
    v11,
    v12,
    buttonCancel,
    buttonDecide,
    0);
}


void AccountLinkageComponent__SendIssueTokenRequest(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_59332E5 & 1) == 0 )
  {
    sub_21FFC50(&Method_AccountLinkageComponent_IssueTokenCallback__);
    sub_21FFC50(&AccountLinkageParams_TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_59332E5 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_IssueTokenCallback__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___);
  if ( !Request_object )
    sub_21FFECC(0, v7);
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
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  PartialMaintenanceMaster_o *v7; // x20
  AccountLinkageComponent_o *AniplexPlusAccountLinkageMaintenanceMessage; // x0
  const MethodInfo *v9; // x2
  __int64 *v10; // x8

  if ( (byte_59332DE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_2031/*"ANIPLEX_PLUS_STATUS_OK"*/);
    sub_21FFC50(&StringLiteral_2030/*"ANIPLEX_PLUS_STATUS_NG"*/);
    byte_59332DE = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_23468/*"ok"*/, 0) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
      if ( Instance )
      {
        v7 = (PartialMaintenanceMaster_o *)Instance;
        if ( PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow(
               (PartialMaintenanceMaster_o *)Instance,
               0) )
        {
          AniplexPlusAccountLinkageMaintenanceMessage = (AccountLinkageComponent_o *)PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
                                                                                       v7,
                                                                                       0);
          AccountLinkageComponent__OnPartialMaintenance(
            AniplexPlusAccountLinkageMaintenanceMessage,
            (System_String_o *)AniplexPlusAccountLinkageMaintenanceMessage,
            v9);
          goto LABEL_8;
        }
        Instance = (DataManager_o *)this->fields.myRoomFsm;
        if ( Instance )
        {
          v10 = &StringLiteral_2031/*"ANIPLEX_PLUS_STATUS_OK"*/;
          goto LABEL_12;
        }
      }
    }
LABEL_13:
    sub_21FFECC(Instance, v5);
  }
LABEL_8:
  Instance = (DataManager_o *)this->fields.myRoomFsm;
  if ( !Instance )
    goto LABEL_13;
  v10 = &StringLiteral_2030/*"ANIPLEX_PLUS_STATUS_NG"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v10, 0);
}


void AccountLinkageComponent__ShowMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v3);
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

  if ( (byte_59332E0 & 1) == 0 )
  {
    sub_21FFC50(&Method_AccountLinkageComponent_StartAccountLinkage__);
    sub_21FFC50(&StringLiteral_16148/*"Wait_Action"*/);
    sub_21FFC50(&StringLiteral_7593/*"Help"*/);
    byte_59332E0 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_10;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_16148/*"Wait_Action"*/, 0) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v5 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0);
      if ( System_String__op_Inequality(v5, (System_String_o *)StringLiteral_7593/*"Help"*/, 0) )
        return;
      goto LABEL_7;
    }
LABEL_10:
    sub_21FFECC(myRoomFsm, method);
  }
LABEL_7:
  v6 = Method_AccountLinkageComponent_StartAccountLinkage__;
  if ( (*((_BYTE *)Method_AccountLinkageComponent_StartAccountLinkage__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_21FFC68(Method_AccountLinkageComponent_StartAccountLinkage__);
  v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
  AccountLinkageComponent__CheckMaintenanceInfo(this, v8);
}


void AccountLinkageComponent__SuccessedAccountLinkage(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  AccountLinkageComponent_c *v7; // x0
  LocalizationManager_c *v8; // x8
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  System_String_o *v11; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v13; // x22
  System_Nullable_int__o p_msgFontSize; // x0
  System_Nullable_int__o v15; // x4
  System_Nullable_float__o v16; // x3
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-28h] BYREF

  v4 = (Il2CppObject *)this;
  if ( (byte_59332E8 & 1) == 0 )
  {
    sub_21FFC50(&Method_AccountLinkageComponent__SuccessedAccountLinkage_b__22_0__);
    sub_21FFC50(&AccountLinkageComponent_TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_int___ctor__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_1948/*"ACCOUNT_LINKAGE_COMPLETE_WARNING"*/);
    this = (AccountLinkageComponent_o *)sub_21FFC50(&StringLiteral_1947/*"ACCOUNT_LINKAGE_COMPLETE_MESSAGE"*/);
    byte_59332E8 = 1;
  }
  msgFontSize = 0;
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_75473208(result, (System_String_o *)StringLiteral_23468/*"ok"*/, 0) )
  {
    v7 = AccountLinkageComponent_TypeInfo;
    if ( !*(&AccountLinkageComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo, v5, v6);
      v7 = AccountLinkageComponent_TypeInfo;
    }
    v8 = LocalizationManager_TypeInfo;
    v7->static_fields->isLinked = 1;
    if ( !*(&v8->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v8, v5, v6);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_1947/*"ACCOUNT_LINKAGE_COMPLETE_MESSAGE"*/, 0);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_1948/*"ACCOUNT_LINKAGE_COMPLETE_WARNING"*/, 0);
    v11 = System_String__Concat_75438412(v9, v10, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v13, v4, Method_AccountLinkageComponent__SuccessedAccountLinkage_b__22_0__, 0);
    p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
    System_Nullable_int____ctor(p_msgFontSize, 30, (const MethodInfo_45B01D4 *)Method_System_Nullable_int___ctor__);
    if ( Instance )
    {
      v15 = msgFontSize;
      v16 = 0;
      CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v11, v13, v16, v15, 0, 0);
      AccountLinkageParams__ResetParams(0);
      return;
    }
LABEL_12:
    sub_21FFECC(this, result);
  }
  AccountLinkageParams__ResetParams(0);
}


void AccountLinkageComponent__UnlinkedAccountLinkage(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  AccountLinkageComponent_c *v7; // x0
  LocalizationManager_c *v8; // x8
  System_String_o *v9; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v11; // x22
  System_Nullable_int__o p_msgFontSize; // x0
  System_Nullable_int__o v13; // x4
  System_Nullable_float__o v14; // x3
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-28h] BYREF

  v4 = (Il2CppObject *)this;
  if ( (byte_59332EA & 1) == 0 )
  {
    sub_21FFC50(&Method_AccountLinkageComponent__UnlinkedAccountLinkage_b__24_0__);
    sub_21FFC50(&AccountLinkageComponent_TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_int___ctor__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_1952/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/);
    this = (AccountLinkageComponent_o *)sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    byte_59332EA = 1;
  }
  msgFontSize = 0;
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_75473208(result, (System_String_o *)StringLiteral_23468/*"ok"*/, 0) )
  {
    v7 = AccountLinkageComponent_TypeInfo;
    if ( !*(&AccountLinkageComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo, v5, v6);
      v7 = AccountLinkageComponent_TypeInfo;
    }
    v8 = LocalizationManager_TypeInfo;
    v7->static_fields->isLinked = 0;
    if ( !*(&v8->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v8, v5, v6);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_1952/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v11, v4, Method_AccountLinkageComponent__UnlinkedAccountLinkage_b__24_0__, 0);
    p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
    System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_45B01D4 *)Method_System_Nullable_int___ctor__);
    if ( Instance )
    {
      v13 = msgFontSize;
      v14 = 0;
      CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v9, v11, v14, v13, 0, 0);
      return;
    }
LABEL_12:
    sub_21FFECC(this, result);
  }
  AccountLinkageParams__ResetParams(0);
}


void AccountLinkageComponent___AutoDelinkAccountLinkage_b__27_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_59332F6 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59332F6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0, 0),
        AccountLinkageComponent__ShowMenu(this, v5),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0) )
  {
    sub_21FFECC(Instance, v4);
  }
  AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, 0);
}


void AccountLinkageComponent___CloseMenu_b__10_0(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void AccountLinkageComponent___ConfirmUnlinkAccountLinkage_b__23_0(
        AccountLinkageComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_59332F2 & 1) == 0 )
  {
    sub_21FFC50(&Method_AccountLinkageComponent_UnlinkedAccountLinkage__);
    sub_21FFC50(&Method_NetworkManager_getRequest_AccountLinkageUnlinkRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59332F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseAccountLinkageUnlinkConfirmDialog((CommonUI_o *)Instance, 0, 0);
  if ( isDecide )
  {
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_AccountLinkageComponent_UnlinkedAccountLinkage__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
    Instance = NetworkManager__getRequest_object_(
                 v7,
                 (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_AccountLinkageUnlinkRequest___);
    if ( Instance )
    {
      RequestBase__beginRequest((RequestBase_o *)Instance, 0);
      return;
    }
LABEL_10:
    sub_21FFECC(Instance, v6);
  }
}


void AccountLinkageComponent___OverrideAccountLinkage_b__26_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_59332F5 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59332F5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0, 0),
        AccountLinkageComponent__ShowMenu(this, v5),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0) )
  {
    sub_21FFECC(Instance, v4);
  }
  AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, 0);
}


void AccountLinkageComponent___ReConfirmAccountLinkage_b__25_0(
        AccountLinkageComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_59332F4 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59332F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
  CommonUI__CloseAccountLinkageReConfirmDialog((CommonUI_o *)Instance, 0, 0);
  if ( isDecide )
    AccountLinkageComponent__DoAccountLinkage(this, v7);
}


void AccountLinkageComponent___SuccessedAccountLinkage_b__22_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_59332F1 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_3635/*"CLOSE_ACCOUNT_LINKAGE"*/);
    byte_59332F1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0, 0),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0)
    || (AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, 0),
        (Instance = (CommonUI_o *)this->fields.myRoomFsm) == 0) )
  {
    sub_21FFECC(Instance, v4);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3635/*"CLOSE_ACCOUNT_LINKAGE"*/, 0);
}


void AccountLinkageComponent___UnlinkedAccountLinkage_b__24_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_59332F3 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59332F3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0, 0),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0) )
  {
    sub_21FFECC(Instance, v4);
  }
  AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, 0);
}


void AccountLinkageComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59332F7 & 1) == 0 )
  {
    sub_21FFC50(&AccountLinkageComponent___c_TypeInfo);
    byte_59332F7 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(AccountLinkageComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AccountLinkageComponent___c_TypeInfo->static_fields->__9 = (struct AccountLinkageComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)AccountLinkageComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v3; // x1

  if ( (byte_59332F8 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59332F8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0, 0);
}


void AccountLinkageComponent___c___OnPartialMaintenance_b__29_0(
        AccountLinkageComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_59332FA & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59332FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0, 0);
}


void AccountLinkageComponent___c___OnSiteMaintenance_b__28_0(
        AccountLinkageComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_59332F9 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59332F9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0, 0);
}