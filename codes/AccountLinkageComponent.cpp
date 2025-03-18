void __fastcall AccountLinkageComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct AccountLinkageComponent_StaticFields *static_fields; // x8

  if ( (byte_4C1D0E0 & 1) == 0 )
  {
    sub_1C3B764(&AccountLinkageComponent_TypeInfo, v1);
    byte_4C1D0E0 = 1;
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
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v17; // 0:x3.8
  System_Nullable_int__o v18; // 0:x4.8

  if ( (byte_4C1D0DD & 1) == 0 )
  {
    sub_1C3B764(&Method_AccountLinkageComponent__AutoDelinkAccountLinkage_b__27_0__, method);
    sub_1C3B764(&AccountLinkageComponent_TypeInfo, v3);
    sub_1C3B764(&System_Action_TypeInfo, v4);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&Method_System_Nullable_int___ctor__, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C3B764(&StringLiteral_1980/*"ANRException: Blocked thread detected."*/, v8);
    byte_4C1D0DD = 1;
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
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_1980/*"ANRException: Blocked thread detected."*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent__AutoDelinkAccountLinkage_b__27_0__,
    0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_37A8420 *)Method_System_Nullable_int___ctor__);
  if ( !Instance )
    sub_1C3B9C0(v13, v14);
  v18 = msgFontSize;
  v17 = 0LL;
  CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v10, v12, v17, v18, 0, 0LL);
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

  if ( (byte_4C1D0CB & 1) == 0 )
  {
    sub_1C3B764(&AccountLinkageComponent_TypeInfo, method);
    byte_4C1D0CB = 1;
  }
  entity = 0LL;
  SelfUserAccountLinkage = UserAccountLinkageMaster__TryGetSelfUserAccountLinkage(&entity, 0LL);
  if ( SelfUserAccountLinkage )
  {
    if ( !entity )
      sub_1C3B9C0(SelfUserAccountLinkage, v3);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1

  if ( (byte_4C1D0CF & 1) == 0 )
  {
    sub_1C3B764(&Method_AccountLinkageComponent_ProcessAccountLinkage__, method);
    sub_1C3B764(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___, v3);
    sub_1C3B764(&NetworkManager_TypeInfo, v4);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_4C1D0CF = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_ProcessAccountLinkage__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1C3B9C0(0LL, v8);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0LL);
}


void __fastcall AccountLinkageComponent__CloseMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  __int64 v5; // x1
  BaseMenu_o *accountLinkageMenu; // x0

  if ( (byte_4C1D0CC & 1) == 0 )
  {
    sub_1C3B764(&Method_AccountLinkageComponent__CloseMenu_b__10_0__, method);
    sub_1C3B764(&System_Action_TypeInfo, v3);
    byte_4C1D0CC = 1;
  }
  AccountLinkageParams__ResetParams(0LL);
  v4 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_AccountLinkageComponent__CloseMenu_b__10_0__, 0LL);
  accountLinkageMenu = (BaseMenu_o *)this->fields.accountLinkageMenu;
  if ( !accountLinkageMenu )
    sub_1C3B9C0(0LL, v5);
  BaseMenu__Close(accountLinkageMenu, v4, 0LL);
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
  Il2CppObject *Instance; // x20
  AccountLinkageComponent___c_c *v13; // x8
  System_Action_o *_9__18_0; // x21
  Il2CppObject *v15; // x22
  struct AccountLinkageComponent___c_StaticFields *static_fields; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v21; // 0:x3.8
  System_Nullable_int__o v22; // 0:x4.8

  if ( (byte_4C1D0D4 & 1) == 0 )
  {
    sub_1C3B764(&AccountLinkageParams_TypeInfo, method);
    sub_1C3B764(&System_Action_TypeInfo, v3);
    sub_1C3B764(&LocalizationManager_TypeInfo, v4);
    sub_1C3B764(&Method_System_Nullable_int___ctor__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C3B764(&Method_AccountLinkageComponent___c__CloseWebViewCallback_b__18_0__, v7);
    sub_1C3B764(&AccountLinkageComponent___c_TypeInfo, v8);
    sub_1C3B764(&StringLiteral_1985/*"APPEND_SKILL_COMBINE_CONFIRM"*/, v9);
    byte_4C1D0D4 = 1;
  }
  msgFontSize = 0LL;
  if ( System_String__IsNullOrEmpty(AccountLinkageParams_TypeInfo->static_fields->authorizationCode, 0LL) )
  {
    AccountLinkageParams__ResetParams(0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_1985/*"APPEND_SKILL_COMBINE_CONFIRM"*/, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = AccountLinkageComponent___c_TypeInfo;
    if ( !AccountLinkageComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageComponent___c_TypeInfo);
      v13 = AccountLinkageComponent___c_TypeInfo;
    }
    _9__18_0 = v13->static_fields->__9__18_0;
    if ( !_9__18_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = AccountLinkageComponent___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__18_0 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(_9__18_0, v15, Method_AccountLinkageComponent___c__CloseWebViewCallback_b__18_0__, 0LL);
      static_fields = AccountLinkageComponent___c_TypeInfo->static_fields;
      static_fields->__9__18_0 = _9__18_0;
      sub_1C3B708(&static_fields->__9__18_0);
    }
    p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
    System_Nullable_int____ctor(p_msgFontSize, 30, (const MethodInfo_37A8420 *)Method_System_Nullable_int___ctor__);
    if ( !Instance )
      sub_1C3B9C0(v17, v18);
    v22 = msgFontSize;
    v21 = 0LL;
    CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v11, _9__18_0, v21, v22, 0, 0LL);
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
  AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *v19; // x25
  __int64 v20; // x0
  __int64 v21; // x1
  UnityEngine_Vector2Int_o v22; // 0:x6.8

  if ( (byte_4C1D0D9 & 1) == 0 )
  {
    sub_1C3B764(&Method_AccountLinkageComponent__ConfirmUnlinkAccountLinkage_b__23_0__, method);
    sub_1C3B764(&AccountLinkageUnlinkConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1C3B764(&LocalizationManager_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C3B764(&StringLiteral_1982/*"ANSI_X3.4-1986"*/, v6);
    sub_1C3B764(&StringLiteral_1979/*"ANRException: Blocked thread detected"*/, v7);
    sub_1C3B764(&StringLiteral_44/*"\n\n"*/, v8);
    sub_1C3B764(&StringLiteral_1981/*"ANSI_X3.4-1968"*/, v9);
    sub_1C3B764(&StringLiteral_1983/*"APPE"*/, v10);
    sub_1C3B764(&StringLiteral_1984/*"APPEND_PASSIVE_SKILL_MAX_EXCHANGE_NUM"*/, v11);
    byte_4C1D0D9 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_1983/*"APPE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_1982/*"ANSI_X3.4-1986"*/, 0LL);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_1984/*"APPEND_PASSIVE_SKILL_MAX_EXCHANGE_NUM"*/, 0LL);
  v15 = System_String__Concat_63379872(v13, (System_String_o *)StringLiteral_44/*"\n\n"*/, v14, 0LL);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_1981/*"ANSI_X3.4-1968"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_1979/*"ANRException: Blocked thread detected"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = (AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *)sub_1C3B9B0(AccountLinkageUnlinkConfirmDialog_ClickDelegate_TypeInfo);
  AccountLinkageUnlinkConfirmDialog_ClickDelegate___ctor(
    v19,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent__ConfirmUnlinkAccountLinkage_b__23_0__,
    0LL);
  if ( !Instance )
    sub_1C3B9C0(v20, v21);
  v22 = (UnityEngine_Vector2Int_o)0xF0000002BCLL;
  CommonUI__OpenAccountLinkageUnlinkConfirmDlg((CommonUI_o *)Instance, v12, v15, v16, v17, v19, v22, 0LL);
}


void __fastcall AccountLinkageComponent__DoAccountLinkage(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1

  if ( (byte_4C1D0D7 & 1) == 0 )
  {
    sub_1C3B764(&Method_AccountLinkageComponent_SuccessedAccountLinkage__, method);
    sub_1C3B764(&AccountLinkageParams_TypeInfo, v3);
    sub_1C3B764(&Method_NetworkManager_getRequest_AccountLinkageLinkRequest___, v4);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4C1D0D7 = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_SuccessedAccountLinkage__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v7,
                     (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_AccountLinkageLinkRequest___);
  if ( !Request_object )
    sub_1C3B9C0(0LL, v9);
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
    sub_1C3B9C0(0LL, v3);
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
  if ( (byte_4C1D0D6 & 1) == 0 )
  {
    sub_1C3B764(&AccountLinkageParams_TypeInfo, result);
    this = (AccountLinkageComponent_o *)sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v5);
    byte_4C1D0D6 = 1;
  }
  if ( !result )
    sub_1C3B9C0(this, result);
  if ( System_String__Equals_63376928(result, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL) )
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1

  if ( (byte_4C1D0CD & 1) == 0 )
  {
    sub_1C3B764(&Method_AccountLinkageComponent_SetupMenu__, method);
    sub_1C3B764(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___, v3);
    sub_1C3B764(&NetworkManager_TypeInfo, v4);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_4C1D0CD = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v6, (Il2CppObject *)this, Method_AccountLinkageComponent_SetupMenu__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1C3B9C0(0LL, v8);
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
  AccountLinkageComponent___c_c *v10; // x8
  CommonUI_o *v11; // x20
  System_Action_o *_9__29_0; // x21
  Il2CppObject *v13; // x22
  struct AccountLinkageComponent___c_StaticFields *static_fields; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Nullable_int__o v17; // [xsp+0h] [xbp-50h] BYREF
  System_Nullable_float__o v18; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_float__o v19; // 0:x0.8
  System_Nullable_int__o v20; // 0:x0.8
  System_Nullable_float__o v21; // 0:x3.8
  System_Nullable_int__o v22; // 0:x4.8

  if ( (byte_4C1D0DF & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, mainteMessage);
    sub_1C3B764(&Method_System_Nullable_int___ctor__, v4);
    sub_1C3B764(&Method_System_Nullable_float___ctor__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C3B764(&Method_AccountLinkageComponent___c__OnPartialMaintenance_b__29_0__, v7);
    sub_1C3B764(&AccountLinkageComponent___c_TypeInfo, v8);
    byte_4C1D0DF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AccountLinkageComponent___c_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AccountLinkageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent___c_TypeInfo);
    v10 = AccountLinkageComponent___c_TypeInfo;
  }
  _9__29_0 = v10->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = AccountLinkageComponent___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__29_0 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(_9__29_0, v13, Method_AccountLinkageComponent___c__OnPartialMaintenance_b__29_0__, 0LL);
    static_fields = AccountLinkageComponent___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = _9__29_0;
    sub_1C3B708(&static_fields->__9__29_0);
  }
  v19 = (System_Nullable_float__o)&v18;
  v18 = 0LL;
  System_Nullable_float____ctor(v19, 36.0, (const MethodInfo_37AA644 *)Method_System_Nullable_float___ctor__);
  v20 = (System_Nullable_int__o)&v17;
  v17 = 0LL;
  System_Nullable_int____ctor(v20, 26, (const MethodInfo_37A8420 *)Method_System_Nullable_int___ctor__);
  if ( !v11 )
    sub_1C3B9C0(v15, v16);
  v22 = v17;
  v21 = v18;
  CommonUI__OpenAccountLinkageNotificationDialog(v11, mainteMessage, _9__29_0, v21, v22, 0, 0LL);
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
  AccountLinkageComponent___c_c *v10; // x8
  CommonUI_o *v11; // x20
  System_Action_o *_9__28_0; // x21
  Il2CppObject *v13; // x22
  struct AccountLinkageComponent___c_StaticFields *static_fields; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v19; // 0:x3.8
  System_Nullable_int__o v20; // 0:x4.8

  if ( (byte_4C1D0DE & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&LocalizationManager_TypeInfo, v2);
    sub_1C3B764(&Method_System_Nullable_int___ctor__, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C3B764(&Method_AccountLinkageComponent___c__OnSiteMaintenance_b__28_0__, v5);
    sub_1C3B764(&AccountLinkageComponent___c_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_1986/*"APPEND_SKILL_COMBINE_INFO"*/, v7);
    byte_4C1D0DE = 1;
  }
  msgFontSize = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_1986/*"APPEND_SKILL_COMBINE_INFO"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AccountLinkageComponent___c_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AccountLinkageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent___c_TypeInfo);
    v10 = AccountLinkageComponent___c_TypeInfo;
  }
  _9__28_0 = v10->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = AccountLinkageComponent___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__28_0 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(_9__28_0, v13, Method_AccountLinkageComponent___c__OnSiteMaintenance_b__28_0__, 0LL);
    static_fields = AccountLinkageComponent___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = _9__28_0;
    sub_1C3B708(&static_fields->__9__28_0);
  }
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 28, (const MethodInfo_37A8420 *)Method_System_Nullable_int___ctor__);
  if ( !v11 )
    sub_1C3B9C0(v15, v16);
  v20 = msgFontSize;
  v19 = 0LL;
  CommonUI__OpenAccountLinkageNotificationDialog(v11, v8, _9__28_0, v19, v20, 0, 0LL);
}


void __fastcall AccountLinkageComponent__OpenLoginWebview(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  Il2CppObject *Request_object; // x0
  __int64 v8; // x1

  if ( (byte_4C1D0D2 & 1) == 0 )
  {
    sub_1C3B764(&Method_AccountLinkageComponent_OpenWebViewCallback__, method);
    sub_1C3B764(&Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___, v3);
    sub_1C3B764(&NetworkManager_TypeInfo, v4);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_4C1D0D2 = 1;
  }
  AccountLinkageParams__ResetParams(0LL);
  AccountLinkageParams__GetCodeChallenge(0LL);
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_OpenWebViewCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___);
  if ( !Request_object )
    sub_1C3B9C0(0LL, v8);
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

  if ( (byte_4C1D0CA & 1) == 0 )
  {
    sub_1C3B764(&AccountLinkageParams_TypeInfo, method);
    sub_1C3B764(&StringLiteral_5593/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/, v3);
    byte_4C1D0CA = 1;
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
    sub_1C3B9C0(gameObject, v5);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)gameObject, (System_String_o *)StringLiteral_5593/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/, 0LL);
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
  System_Action_o *v14; // x23

  v4 = (Il2CppObject *)this;
  if ( (byte_4C1D0D3 & 1) == 0 )
  {
    sub_1C3B764(&Method_AccountLinkageComponent_CloseWebViewCallback__, result);
    sub_1C3B764(&AccountLinkageParams_TypeInfo, v5);
    sub_1C3B764(&System_Action_TypeInfo, v6);
    sub_1C3B764(&WebViewManager_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v8);
    this = (AccountLinkageComponent_o *)sub_1C3B764(&StringLiteral_1/*""*/, v9);
    byte_4C1D0D3 = 1;
  }
  if ( !result )
    sub_1C3B9C0(this, result);
  if ( System_String__Equals_63376928(result, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL) )
  {
    AuthURL = AccountLinkageParams__GetAuthURL(0, 0LL);
    static_fields = AccountLinkageParams_TypeInfo->static_fields;
    basicUserName = static_fields->basicUserName;
    basicPassword = static_fields->basicPassword;
    v14 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v14, v4, Method_AccountLinkageComponent_CloseWebViewCallback__, 0LL);
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    if ( basicUserName == 0LL || basicPassword == 0LL )
      WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, AuthURL, v14, 0LL);
    else
      WebViewManager__OpenViewWithBasicAuth(
        (System_String_o *)StringLiteral_1/*""*/,
        AuthURL,
        basicUserName,
        basicPassword,
        v14,
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
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v17; // 0:x3.8
  System_Nullable_int__o v18; // 0:x4.8

  if ( (byte_4C1D0DC & 1) == 0 )
  {
    sub_1C3B764(&Method_AccountLinkageComponent__OverrideAccountLinkage_b__26_0__, method);
    sub_1C3B764(&AccountLinkageComponent_TypeInfo, v3);
    sub_1C3B764(&System_Action_TypeInfo, v4);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&Method_System_Nullable_int___ctor__, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C3B764(&StringLiteral_1991/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT"*/, v8);
    byte_4C1D0DC = 1;
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
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_1991/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_AccountLinkageComponent__OverrideAccountLinkage_b__26_0__, 0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 24, (const MethodInfo_37A8420 *)Method_System_Nullable_int___ctor__);
  if ( !Instance )
    sub_1C3B9C0(v13, v14);
  v18 = msgFontSize;
  v17 = 0LL;
  CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v10, v12, v17, v18, 0, 0LL);
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
  if ( (byte_4C1D0D1 & 1) == 0 )
  {
    sub_1C3B764(&AccountLinkageComponent_TypeInfo, result);
    sub_1C3B764(&AccountLinkageParams_TypeInfo, v5);
    sub_1C3B764(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    this = (AccountLinkageComponent_o *)sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v8);
    byte_4C1D0D1 = 1;
  }
  if ( !result )
    goto LABEL_21;
  if ( !System_String__Equals_63376928(result, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL) )
    return;
  this = (AccountLinkageComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (AccountLinkageComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___)) == 0LL )
  {
LABEL_21:
    sub_1C3B9C0(this, result);
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
  __int64 v18; // x1
  System_String_o *friendCode; // x20
  Il2CppObject *v20; // x20
  System_String_o *v21; // x23
  System_String_o *v22; // x24
  System_String_o *v23; // x25
  System_String_o *v24; // x26
  System_String_o *buttonCancel; // x27
  System_String_o *buttonDecide; // x28
  System_String_o *v27; // x19
  Il2CppObject *v28; // x29
  Il2CppObject *NumberFormat_39822836; // x20
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  System_String_o *v34; // x29
  System_String_o *v35; // x20
  Il2CppObject *Instance; // x21
  AccountLinkageReConfirmDialog_ClickDelegate_o *v37; // x22
  Il2CppObject *v38; // [xsp+18h] [xbp-88h]
  Il2CppObject *v39; // [xsp+20h] [xbp-80h]
  Il2CppObject *object; // [xsp+28h] [xbp-78h]
  int32_t requestedAccountLevel; // [xsp+34h] [xbp-6Ch] BYREF
  UserGameEntity_o *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C1D0DB & 1) == 0 )
  {
    sub_1C3B764(&Method_AccountLinkageComponent__ReConfirmAccountLinkage_b__25_0__, method);
    sub_1C3B764(&AccountLinkageParams_TypeInfo, v3);
    sub_1C3B764(&AccountLinkageReConfirmDialog_ClickDelegate_TypeInfo, v4);
    sub_1C3B764(&int_TypeInfo, v5);
    sub_1C3B764(&LocalizationManager_TypeInfo, v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C3B764(&StringLiteral_15129/*"WAREHOUSE_NOTIFICATION_PUT_IN_TITLE"*/, v8);
    sub_1C3B764(&StringLiteral_2001/*"APPEND_SKILL_EXCHANGE_LV"*/, v9);
    sub_1C3B764(&StringLiteral_1997/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/, v10);
    sub_1C3B764(&StringLiteral_1992/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT_LOCK"*/, v11);
    sub_1C3B764(&StringLiteral_1998/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/, v12);
    sub_1C3B764(&StringLiteral_2000/*"APPEND_SKILL_EXCHANGE_LOCK"*/, v13);
    sub_1C3B764(&StringLiteral_1995/*"APPEND_SKILL_EXCHANGE_INFO"*/, v14);
    sub_1C3B764(&StringLiteral_1/*""*/, v15);
    byte_4C1D0DB = 1;
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
    SelfUserGame = LocalizationManager__GetNumberFormat_39822836(friendCode, 0LL);
    if ( !entity
      || (v20 = (Il2CppObject *)SelfUserGame,
          SelfUserGame = AccountLinkageParams__AddColorCodeBracket(entity->fields.name, 0LL),
          !entity) )
    {
LABEL_15:
      sub_1C3B9C0(SelfUserGame, v18);
    }
    v38 = (Il2CppObject *)SelfUserGame;
    v39 = v20;
    v16 = (Il2CppObject *)System_Int32__ToString((int)entity + 80, 0LL);
  }
  else
  {
    v38 = v16;
    v39 = v16;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_2000/*"APPEND_SKILL_EXCHANGE_LOCK"*/, 0LL);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_1995/*"APPEND_SKILL_EXCHANGE_INFO"*/, 0LL);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_1997/*"APPEND_SKILL_EXCHANGE_ITEM_MAX"*/, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_2001/*"APPEND_SKILL_EXCHANGE_LV"*/, 0LL);
  buttonCancel = LocalizationManager__Get((System_String_o *)StringLiteral_1992/*"APPEND_SKILL_EXCHANGE_COMBINE_TEXT_LOCK"*/, 0LL);
  buttonDecide = LocalizationManager__Get((System_String_o *)StringLiteral_1998/*"APPEND_SKILL_EXCHANGE_ITEM_REMAINING_COUNT"*/, 0LL);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_15129/*"WAREHOUSE_NOTIFICATION_PUT_IN_TITLE"*/, 0LL);
  v28 = (Il2CppObject *)AccountLinkageParams__AddColorCodeBracket(
                          AccountLinkageParams_TypeInfo->static_fields->requestedAccountName,
                          0LL);
  NumberFormat_39822836 = (Il2CppObject *)LocalizationManager__GetNumberFormat_39822836(
                                            AccountLinkageParams_TypeInfo->static_fields->requestedAccountFriendCode,
                                            0LL);
  requestedAccountLevel = AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &requestedAccountLevel, v30, v31, v32);
  v34 = System_String__Format_63383052(v27, NumberFormat_39822836, v28, v33, 0LL);
  v35 = System_String__Format_63383052(v27, v39, v38, v16, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v37 = (AccountLinkageReConfirmDialog_ClickDelegate_o *)sub_1C3B9B0(AccountLinkageReConfirmDialog_ClickDelegate_TypeInfo);
  AccountLinkageReConfirmDialog_ClickDelegate___ctor(
    v37,
    object,
    Method_AccountLinkageComponent__ReConfirmAccountLinkage_b__25_0__,
    0LL);
  if ( !Instance )
    goto LABEL_15;
  CommonUI__OpenAccountLinkageReConfirmDialog(
    (CommonUI_o *)Instance,
    v37,
    v21,
    v22,
    v34,
    v35,
    v23,
    v24,
    buttonCancel,
    buttonDecide,
    0LL);
}


void __fastcall AccountLinkageComponent__SendIssueTokenRequest(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1

  if ( (byte_4C1D0D5 & 1) == 0 )
  {
    sub_1C3B764(&Method_AccountLinkageComponent_IssueTokenCallback__, method);
    sub_1C3B764(&AccountLinkageParams_TypeInfo, v3);
    sub_1C3B764(&Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___, v4);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    byte_4C1D0D5 = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_IssueTokenCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v7,
                     (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___);
  if ( !Request_object )
    sub_1C3B9C0(0LL, v9);
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
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  PartialMaintenanceMaster_o *v11; // x20
  AccountLinkageComponent_o *AniplexPlusAccountLinkageMaintenanceMessage; // x0
  const MethodInfo *v13; // x2
  __int64 *v14; // x8

  if ( (byte_4C1D0CE & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___, result);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v6);
    sub_1C3B764(&StringLiteral_2054/*"ATTACK_ICON_INFO"*/, v7);
    sub_1C3B764(&StringLiteral_2053/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/, v8);
    byte_4C1D0CE = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
      if ( Instance )
      {
        v11 = (PartialMaintenanceMaster_o *)Instance;
        if ( PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow(
               (PartialMaintenanceMaster_o *)Instance,
               0LL) )
        {
          AniplexPlusAccountLinkageMaintenanceMessage = (AccountLinkageComponent_o *)PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
                                                                                       v11,
                                                                                       0LL);
          AccountLinkageComponent__OnPartialMaintenance(
            AniplexPlusAccountLinkageMaintenanceMessage,
            (System_String_o *)AniplexPlusAccountLinkageMaintenanceMessage,
            v13);
          goto LABEL_8;
        }
        Instance = (DataManager_o *)this->fields.myRoomFsm;
        if ( Instance )
        {
          v14 = &StringLiteral_2054/*"ATTACK_ICON_INFO"*/;
          goto LABEL_12;
        }
      }
    }
LABEL_13:
    sub_1C3B9C0(Instance, v9);
  }
LABEL_8:
  Instance = (DataManager_o *)this->fields.myRoomFsm;
  if ( !Instance )
    goto LABEL_13;
  v14 = &StringLiteral_2053/*"ASSET_LOADER_ERROR_TIME_OVER_MESSAGE"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v14, 0LL);
}


void __fastcall AccountLinkageComponent__ShowMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C3B9C0(0LL, v3);
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

  if ( (byte_4C1D0D0 & 1) == 0 )
  {
    sub_1C3B764(&Method_AccountLinkageComponent_StartAccountLinkage__, method);
    sub_1C3B764(&StringLiteral_15875/*"_FarMinLength"*/, v3);
    sub_1C3B764(&StringLiteral_7381/*"Incomplete DTD content."*/, v4);
    byte_4C1D0D0 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_10;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15875/*"_FarMinLength"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v7 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
      if ( System_String__op_Inequality(v7, (System_String_o *)StringLiteral_7381/*"Incomplete DTD content."*/, 0LL) )
        return;
      goto LABEL_7;
    }
LABEL_10:
    sub_1C3B9C0(myRoomFsm, method);
  }
LABEL_7:
  v8 = Method_AccountLinkageComponent_StartAccountLinkage__;
  if ( (*((_BYTE *)Method_AccountLinkageComponent_StartAccountLinkage__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C3B77C(Method_AccountLinkageComponent_StartAccountLinkage__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C3B748(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
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
  System_Action_o *v18; // x22
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v21; // 0:x3.8
  System_Nullable_int__o v22; // 0:x4.8

  v4 = (Il2CppObject *)this;
  if ( (byte_4C1D0D8 & 1) == 0 )
  {
    sub_1C3B764(&Method_AccountLinkageComponent__SuccessedAccountLinkage_b__22_0__, result);
    sub_1C3B764(&AccountLinkageComponent_TypeInfo, v5);
    sub_1C3B764(&System_Action_TypeInfo, v6);
    sub_1C3B764(&LocalizationManager_TypeInfo, v7);
    sub_1C3B764(&Method_System_Nullable_int___ctor__, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v10);
    sub_1C3B764(&StringLiteral_1976/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/, v11);
    this = (AccountLinkageComponent_o *)sub_1C3B764(&StringLiteral_1975/*"ANOTHER_PAY_PERIOD_END_MSG"*/, v12);
    byte_4C1D0D8 = 1;
  }
  msgFontSize = 0LL;
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_63376928(result, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL) )
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
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_1975/*"ANOTHER_PAY_PERIOD_END_MSG"*/, 0LL);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_1976/*"ANOTHER_PAY_PURCHASED_CONFIRM_MSG"*/, 0LL);
    v16 = System_String__Concat_63368612(v14, v15, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v18, v4, Method_AccountLinkageComponent__SuccessedAccountLinkage_b__22_0__, 0LL);
    p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
    System_Nullable_int____ctor(p_msgFontSize, 30, (const MethodInfo_37A8420 *)Method_System_Nullable_int___ctor__);
    if ( Instance )
    {
      v22 = msgFontSize;
      v21 = 0LL;
      CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v16, v18, v21, v22, 0, 0LL);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C3B9C0(this, result);
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
  System_Action_o *v15; // x22
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v18; // 0:x3.8
  System_Nullable_int__o v19; // 0:x4.8

  v4 = (Il2CppObject *)this;
  if ( (byte_4C1D0DA & 1) == 0 )
  {
    sub_1C3B764(&Method_AccountLinkageComponent__UnlinkedAccountLinkage_b__24_0__, result);
    sub_1C3B764(&AccountLinkageComponent_TypeInfo, v5);
    sub_1C3B764(&System_Action_TypeInfo, v6);
    sub_1C3B764(&LocalizationManager_TypeInfo, v7);
    sub_1C3B764(&Method_System_Nullable_int___ctor__, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C3B764(&StringLiteral_1980/*"ANRException: Blocked thread detected."*/, v10);
    this = (AccountLinkageComponent_o *)sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v11);
    byte_4C1D0DA = 1;
  }
  msgFontSize = 0LL;
  if ( !result )
    goto LABEL_12;
  if ( System_String__Equals_63376928(result, (System_String_o *)StringLiteral_22683/*"sandboxSeurity"*/, 0LL) )
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
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_1980/*"ANRException: Blocked thread detected."*/, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v15, v4, Method_AccountLinkageComponent__UnlinkedAccountLinkage_b__24_0__, 0LL);
    p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
    System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_37A8420 *)Method_System_Nullable_int___ctor__);
    if ( Instance )
    {
      v19 = msgFontSize;
      v18 = 0LL;
      CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v13, v15, v18, v19, 0, 0LL);
      return;
    }
LABEL_12:
    sub_1C3B9C0(this, result);
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

  if ( (byte_4C1D0E6 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C1D0E6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        AccountLinkageComponent__ShowMenu(this, v5),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0LL) )
  {
    sub_1C3B9C0(Instance, v4);
  }
  AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v4);
}


void __fastcall AccountLinkageComponent___CloseMenu_b__10_0(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C3B9C0(0LL, v3);
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
  NetworkManager_ResultCallbackFunc_o *v11; // x20

  if ( (byte_4C1D0E2 & 1) == 0 )
  {
    sub_1C3B764(&Method_AccountLinkageComponent_UnlinkedAccountLinkage__, isDecide);
    sub_1C3B764(&Method_NetworkManager_getRequest_AccountLinkageUnlinkRequest___, v5);
    sub_1C3B764(&NetworkManager_TypeInfo, v6);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4C1D0E2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseAccountLinkageUnlinkConfirmDialog((CommonUI_o *)Instance, 0LL, 0LL);
  if ( isDecide )
  {
    v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_AccountLinkageComponent_UnlinkedAccountLinkage__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__getRequest_object_(
                 v11,
                 (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_AccountLinkageUnlinkRequest___);
    if ( Instance )
    {
      RequestBase__beginRequest((RequestBase_o *)Instance, 0LL);
      return;
    }
LABEL_10:
    sub_1C3B9C0(Instance, v10);
  }
}


void __fastcall AccountLinkageComponent___OverrideAccountLinkage_b__26_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4C1D0E5 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C1D0E5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        AccountLinkageComponent__ShowMenu(this, v5),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0LL) )
  {
    sub_1C3B9C0(Instance, v4);
  }
  AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v4);
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

  if ( (byte_4C1D0E4 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4C1D0E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v6);
  CommonUI__CloseAccountLinkageReConfirmDialog((CommonUI_o *)Instance, 0LL, 0LL);
  if ( isDecide )
    AccountLinkageComponent__DoAccountLinkage(this, v7);
}


void __fastcall AccountLinkageComponent___SuccessedAccountLinkage_b__22_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C1D0E1 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1C3B764(&StringLiteral_3621/*"COMMAND_CODE_LOCK_RETURN_DETAIL_MSG"*/, v3);
    byte_4C1D0E1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0LL)
    || (AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v5),
        (Instance = (CommonUI_o *)this->fields.myRoomFsm) == 0LL) )
  {
    sub_1C3B9C0(Instance, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3621/*"COMMAND_CODE_LOCK_RETURN_DETAIL_MSG"*/, 0LL);
}


void __fastcall AccountLinkageComponent___UnlinkedAccountLinkage_b__24_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C1D0E3 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C1D0E3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0LL) )
  {
    sub_1C3B9C0(Instance, v4);
  }
  AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v4);
}


void __fastcall AccountLinkageComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4C1D0E7 & 1) == 0 )
  {
    sub_1C3B764(&AccountLinkageComponent___c_TypeInfo, v1);
    byte_4C1D0E7 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(AccountLinkageComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AccountLinkageComponent___c_TypeInfo->static_fields->__9 = (struct AccountLinkageComponent___c_o *)v2;
  sub_1C3B708(AccountLinkageComponent___c_TypeInfo->static_fields);
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

  if ( (byte_4C1D0E8 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C1D0E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall AccountLinkageComponent___c___OnPartialMaintenance_b__29_0(
        AccountLinkageComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C1D0EA & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C1D0EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall AccountLinkageComponent___c___OnSiteMaintenance_b__28_0(
        AccountLinkageComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C1D0E9 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C1D0E9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}