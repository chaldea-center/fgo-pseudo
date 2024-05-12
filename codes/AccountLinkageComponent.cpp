void __fastcall AccountLinkageComponent___cctor(const MethodInfo *method)
{
  if ( (byte_438CD88 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageComponent_TypeInfo);
    byte_438CD88 = 1;
  }
  AccountLinkageComponent_TypeInfo->static_fields->ACCOUNT_LINKAGE_HAS_DATA_SPACING_Y = 3;
  AccountLinkageComponent_TypeInfo->static_fields->ACCOUNT_LINKAGE_NO_DATA_SPACING_Y = 0;
  AccountLinkageComponent_TypeInfo->static_fields->isLinked = 0;
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
  CommonUI_o *Instance; // x21
  System_Action_o *v6; // x22
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 v8; // x1
  System_Nullable_float__o v9; // 0:x3.8
  System_Nullable_int__o v10; // 0:x4.8

  if ( (byte_438CD85 & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageComponent__AutoDelinkAccountLinkage_b__25_0__);
    sub_B775C4(&AccountLinkageComponent_TypeInfo);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_1681/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/);
    sub_B775C4(&StringLiteral_5609/*"ENABLE_CONTINUE_DEVICE"*/);
    byte_438CD85 = 1;
  }
  v3 = AccountLinkageComponent_TypeInfo;
  if ( (BYTE3(AccountLinkageComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
    v3 = AccountLinkageComponent_TypeInfo;
  }
  v3->static_fields->isLinked = 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1681/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent__AutoDelinkAccountLinkage_b__25_0__,
    0LL);
  if ( !Instance
    || (v9 = 0LL,
        v10 = 0LL,
        CommonUI__OpenAccountLinkageNotificationDialog(Instance, v4, v6, v9, v10, 0LL),
        (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_B7769C(myRoomFsm, v8);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_5609/*"ENABLE_CONTINUE_DEVICE"*/, 0LL);
}


void __fastcall AccountLinkageComponent__Awake(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall AccountLinkageComponent__CheckCsUnlink(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *SelfUserAccountLinkage; // x0
  __int64 v4; // x1
  int32_t type; // w8
  AccountLinkageComponent_c *v6; // x0
  AccountLinkageComponent_c *v7; // x0
  struct AccountLinkageComponent_StaticFields *static_fields; // x8
  bool *p_isLinked; // x8
  _BOOL4 isLinked; // t1
  __int64 *v11; // x8
  UserAccountLinkageEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438CD73 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageComponent_TypeInfo);
    sub_B775C4(&StringLiteral_5609/*"ENABLE_CONTINUE_DEVICE"*/);
    sub_B775C4(&StringLiteral_5636/*"END_OPEN_ACCOUNT_LINKAGE_MENU"*/);
    byte_438CD73 = 1;
  }
  entity = 0LL;
  SelfUserAccountLinkage = (PlayMakerFSM_o *)UserAccountLinkageMaster__TryGetSelfUserAccountLinkage(&entity, 0LL);
  if ( ((unsigned __int8)SelfUserAccountLinkage & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_25;
    type = entity->fields.type;
    switch ( type )
    {
      case 2:
        goto LABEL_8;
      case 1:
LABEL_22:
        SelfUserAccountLinkage = this->fields.myRoomFsm;
        if ( SelfUserAccountLinkage )
        {
          v11 = &StringLiteral_5636/*"END_OPEN_ACCOUNT_LINKAGE_MENU"*/;
          goto LABEL_24;
        }
LABEL_25:
        sub_B7769C(SelfUserAccountLinkage, v4);
      case 0:
LABEL_8:
        v6 = AccountLinkageComponent_TypeInfo;
        if ( (BYTE3(AccountLinkageComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
          v6 = AccountLinkageComponent_TypeInfo;
        }
        v6->static_fields->isLinked = 0;
        goto LABEL_20;
    }
  }
  v7 = AccountLinkageComponent_TypeInfo;
  if ( (BYTE3(AccountLinkageComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
    v7 = AccountLinkageComponent_TypeInfo;
  }
  static_fields = v7->static_fields;
  isLinked = static_fields->isLinked;
  p_isLinked = &static_fields->isLinked;
  if ( !isLinked )
    goto LABEL_22;
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    p_isLinked = &AccountLinkageComponent_TypeInfo->static_fields->isLinked;
  }
  *p_isLinked = 0;
LABEL_20:
  SelfUserAccountLinkage = this->fields.myRoomFsm;
  if ( !SelfUserAccountLinkage )
    goto LABEL_25;
  v11 = &StringLiteral_5609/*"ENABLE_CONTINUE_DEVICE"*/;
LABEL_24:
  PlayMakerFSM__SendEvent(SelfUserAccountLinkage, (System_String_o *)*v11, 0LL);
}


void __fastcall AccountLinkageComponent__CheckMaintenanceInfo(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  AccountLinkageInfoRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v5; // x1

  if ( (byte_438CD77 & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageComponent_ProcessAccountLinkage__);
    sub_B775C4(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438CD77 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_ProcessAccountLinkage__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (AccountLinkageInfoRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v3,
                                                                       (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B7769C(0LL, v5);
  AccountLinkageInfoRequest__beginRequest(Request_WarBoardWallAttackRequest, v5);
}


void __fastcall AccountLinkageComponent__CloseMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  AccountLinkageParams_c *v3; // x0
  System_Action_o *v4; // x20
  __int64 v5; // x1
  BaseMenu_o *accountLinkageMenu; // x0

  if ( (byte_438CD74 & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageComponent__CloseMenu_b__8_0__);
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&System_Action_TypeInfo);
    byte_438CD74 = 1;
  }
  v3 = AccountLinkageParams_TypeInfo;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
  }
  AccountLinkageParams__ResetParams((const MethodInfo *)v3);
  v4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_AccountLinkageComponent__CloseMenu_b__8_0__, 0LL);
  accountLinkageMenu = (BaseMenu_o *)this->fields.accountLinkageMenu;
  if ( !accountLinkageMenu )
    sub_B7769C(0LL, v5);
  BaseMenu__Close(accountLinkageMenu, v4, 0LL);
}


void __fastcall AccountLinkageComponent__CloseWebViewCallback(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  AccountLinkageParams_c *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_438CD7C & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    byte_438CD7C = 1;
  }
  v3 = AccountLinkageParams_TypeInfo;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
    v3 = AccountLinkageParams_TypeInfo;
  }
  if ( !System_String__IsNullOrEmpty(v3->static_fields->authorizationCode, 0LL) )
    AccountLinkageComponent__SendIssueTokenRequest(this, v4);
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
  CommonUI_o *Instance; // x24
  AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *v10; // x25
  __int64 v11; // x0
  __int64 v12; // x1
  UnityEngine_Vector2Int_o v13; // 0:x6.8

  if ( (byte_438CD81 & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageComponent__ConfirmUnlinkAccountLinkage_b__21_0__);
    sub_B775C4(&AccountLinkageUnlinkConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_1683/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_MESSAGE"*/);
    sub_B775C4(&StringLiteral_1680/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_27/*"\n\n"*/);
    sub_B775C4(&StringLiteral_1682/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_1684/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_TITLE"*/);
    sub_B775C4(&StringLiteral_1685/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_WARNING"*/);
    byte_438CD81 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_1684/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_TITLE"*/, 0LL);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1683/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_MESSAGE"*/, 0LL);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_1685/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_WARNING"*/, 0LL);
  v6 = System_String__Concat_44904220(v4, (System_String_o *)StringLiteral_27/*"\n\n"*/, v5, 0LL);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_1682/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_DECIDE"*/, 0LL);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_1680/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_CANCEL"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (AccountLinkageUnlinkConfirmDialog_ClickDelegate_o *)sub_B77694(AccountLinkageUnlinkConfirmDialog_ClickDelegate_TypeInfo);
  AccountLinkageUnlinkConfirmDialog_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent__ConfirmUnlinkAccountLinkage_b__21_0__,
    0LL);
  if ( !Instance )
    sub_B7769C(v11, v12);
  v13 = (UnityEngine_Vector2Int_o)0xF0000002BCLL;
  CommonUI__OpenAccountLinkageUnlinkConfirmDlg(Instance, v3, v6, v7, v8, v10, v13, 0LL);
}


void __fastcall AccountLinkageComponent__DoAccountLinkage(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  AccountLinkageLinkRequest_o *v7; // x19

  if ( (byte_438CD7F & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageComponent_SuccessedAccountLinkage__);
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&Method_NetworkManager_getRequest_AccountLinkageLinkRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438CD7F = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_SuccessedAccountLinkage__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v3,
                                        (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_AccountLinkageLinkRequest___);
  v7 = (AccountLinkageLinkRequest_o *)Request_WarBoardWallAttackRequest;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
  }
  if ( !v7 )
    sub_B7769C(Request_WarBoardWallAttackRequest, v5);
  AccountLinkageLinkRequest__beginRequest(v7, AccountLinkageParams_TypeInfo->static_fields->accountLinkageToken, v6);
}


void __fastcall AccountLinkageComponent__IssueTokenCallback(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  AccountLinkageComponent_o *v4; // x19
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  AccountLinkageParams_c *v7; // x8

  v4 = this;
  if ( (byte_438CD7E & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    this = (AccountLinkageComponent_o *)sub_B775C4(&StringLiteral_21657/*"ok"*/);
    byte_438CD7E = 1;
  }
  if ( !result )
    sub_B7769C(this, result);
  v5 = System_String__Equals_44889276(result, (System_String_o *)StringLiteral_21657/*"ok"*/, 0LL);
  v7 = AccountLinkageParams_TypeInfo;
  if ( v5 )
  {
    if ( (WORD1(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
      v7 = AccountLinkageParams_TypeInfo;
    }
    if ( v7->static_fields->isRequestedAccountLinked )
      AccountLinkageComponent__ReConfirmAccountLinkage(v4, v6);
    else
      AccountLinkageComponent__DoAccountLinkage(v4, v6);
  }
  else
  {
    if ( (WORD1(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
    }
    AccountLinkageParams__ResetParams((const MethodInfo *)v5);
  }
}


void __fastcall AccountLinkageComponent__LinkageStatusCheck(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  AccountLinkageInfoRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v5; // x1

  if ( (byte_438CD75 & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageComponent_SetupMenu__);
    sub_B775C4(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438CD75 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v3, (Il2CppObject *)this, Method_AccountLinkageComponent_SetupMenu__, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (AccountLinkageInfoRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v3,
                                                                       (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B7769C(0LL, v5);
  AccountLinkageInfoRequest__beginRequest(Request_WarBoardWallAttackRequest, v5);
}


void __fastcall AccountLinkageComponent__OnPartialMaintenance(
        AccountLinkageComponent_o *this,
        System_String_o *mainteMessage,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  AccountLinkageComponent___c_c *v5; // x8
  struct AccountLinkageComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__27_0; // x21
  Il2CppObject *v8; // x22
  struct AccountLinkageComponent___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o msgPosY; // [xsp+18h] [xbp-28h] BYREF
  System_Nullable_float__o p_msgPosY; // 0:x0.8
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v22; // 0:x3.8
  System_Nullable_int__o v23; // 0:x4.8

  if ( (byte_438CD87 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Nullable_float___ctor__);
    sub_B775C4(&Method_System_Nullable_int___ctor__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_AccountLinkageComponent___c__OnPartialMaintenance_b__27_0__);
    sub_B775C4(&AccountLinkageComponent___c_TypeInfo);
    byte_438CD87 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AccountLinkageComponent___c_TypeInfo;
  if ( (BYTE3(AccountLinkageComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent___c_TypeInfo);
    v5 = AccountLinkageComponent___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__27_0 = static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = AccountLinkageComponent___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__27_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(_9__27_0, v8, Method_AccountLinkageComponent___c__OnPartialMaintenance_b__27_0__, 0LL);
    v9 = AccountLinkageComponent___c_TypeInfo->static_fields;
    v9->__9__27_0 = _9__27_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v9->__9__27_0,
      (System_Int32_array **)_9__27_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  p_msgPosY = (System_Nullable_float__o)&msgPosY;
  msgPosY = 0LL;
  System_Nullable_float____ctor(p_msgPosY, 36.0, (const MethodInfo_2478078 *)Method_System_Nullable_float___ctor__);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  msgFontSize = 0LL;
  System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_24765B8 *)Method_System_Nullable_int___ctor__);
  if ( !Instance )
    sub_B7769C(v16, v17);
  v22 = msgPosY;
  v23 = msgFontSize;
  CommonUI__OpenAccountLinkageNotificationDialog(Instance, mainteMessage, _9__27_0, v22, v23, 0LL);
}


void __fastcall AccountLinkageComponent__OnSiteMaintenance(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x19
  CommonUI_o *Instance; // x20
  AccountLinkageComponent___c_c *v4; // x8
  struct AccountLinkageComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__26_0; // x21
  Il2CppObject *v7; // x22
  struct AccountLinkageComponent___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v19; // 0:x3.8
  System_Nullable_int__o v20; // 0:x4.8

  if ( (byte_438CD86 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_System_Nullable_int___ctor__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_AccountLinkageComponent___c__OnSiteMaintenance_b__26_0__);
    sub_B775C4(&AccountLinkageComponent___c_TypeInfo);
    sub_B775C4(&StringLiteral_1687/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/);
    byte_438CD86 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v2 = LocalizationManager__Get((System_String_o *)StringLiteral_1687/*"ACCOUNT_LINKAGE_MAINTENANCE_MESSAGE"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AccountLinkageComponent___c_TypeInfo;
  if ( (BYTE3(AccountLinkageComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent___c_TypeInfo);
    v4 = AccountLinkageComponent___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__26_0 = static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = AccountLinkageComponent___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(_9__26_0, v7, Method_AccountLinkageComponent___c__OnSiteMaintenance_b__26_0__, 0LL);
    v8 = AccountLinkageComponent___c_TypeInfo->static_fields;
    v8->__9__26_0 = _9__26_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  msgFontSize = 0LL;
  System_Nullable_int____ctor(p_msgFontSize, 28, (const MethodInfo_24765B8 *)Method_System_Nullable_int___ctor__);
  if ( !Instance )
    sub_B7769C(v15, v16);
  v20 = msgFontSize;
  v19 = 0LL;
  CommonUI__OpenAccountLinkageNotificationDialog(Instance, v2, _9__26_0, v19, v20, 0LL);
}


void __fastcall AccountLinkageComponent__OpenLoginWebview(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  AccountLinkageParams_c *v3; // x0
  const MethodInfo *v4; // x0
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v7; // x1

  if ( (byte_438CD7A & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageComponent_OpenWebViewCallback__);
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438CD7A = 1;
  }
  v3 = AccountLinkageParams_TypeInfo;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
  }
  AccountLinkageParams__ResetParams((const MethodInfo *)v3);
  AccountLinkageParams__GetCodeChallenge(v4);
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_OpenWebViewCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         v5,
                                                         (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_AccountLinkageBeginAuthRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B7769C(0LL, v7);
  RequestBase__beginRequest(Request_WarBoardWallAttackRequest, 0LL);
}


void __fastcall AccountLinkageComponent__OpenMenu(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  BaseMenu_o *accountLinkageMenu; // x20
  const MethodInfo *v6; // x1
  AccountLinkageParams_c *v7; // x0
  int32_t notificationType; // w8

  if ( (byte_438CD72 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    byte_438CD72 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (accountLinkageMenu = (BaseMenu_o *)this->fields.accountLinkageMenu) == 0LL) )
  {
    sub_B7769C(gameObject, v4);
  }
  AccountLinkageMenu__InitView(this->fields.accountLinkageMenu, v4);
  BaseMenu__Open(accountLinkageMenu, 0LL, 0LL);
  v7 = AccountLinkageParams_TypeInfo;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
    v7 = AccountLinkageParams_TypeInfo;
  }
  notificationType = v7->static_fields->notificationType;
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
    AccountLinkageComponent__CheckCsUnlink(this, v6);
  }
}


void __fastcall AccountLinkageComponent__OpenWebViewCallback(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  const MethodInfo *v5; // x1
  System_String_o *AuthURL; // x20
  struct AccountLinkageParams_StaticFields *static_fields; // x8
  System_String_o *basicPassword; // x22
  System_String_o *basicUserName; // x23
  System_Action_o *v10; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_438CD7B & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageComponent_CloseWebViewCallback__);
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&WebViewManager_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    this = (AccountLinkageComponent_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_438CD7B = 1;
  }
  if ( !result )
    sub_B7769C(this, result);
  if ( System_String__Equals_44889276(result, (System_String_o *)StringLiteral_21657/*"ok"*/, 0LL) )
  {
    if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
    }
    AuthURL = AccountLinkageParams__GetAuthURL(0, v5);
    static_fields = AccountLinkageParams_TypeInfo->static_fields;
    basicUserName = static_fields->basicUserName;
    basicPassword = static_fields->basicPassword;
    v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v10, v4, Method_AccountLinkageComponent_CloseWebViewCallback__, 0LL);
    if ( basicUserName && basicPassword )
    {
      if ( (WORD1(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !WebViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
      }
      WebViewManager__OpenViewWithBasicAuth(
        (System_String_o *)StringLiteral_1/*""*/,
        AuthURL,
        basicUserName,
        basicPassword,
        v10,
        0LL);
    }
    else
    {
      if ( (WORD1(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !WebViewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
      }
      WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, AuthURL, v10, 0LL);
    }
  }
}


void __fastcall AccountLinkageComponent__OverrideAccountLinkage(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  AccountLinkageComponent_c *v3; // x0
  System_String_o *v4; // x20
  CommonUI_o *Instance; // x21
  System_Action_o *v6; // x22
  PlayMakerFSM_o *myRoomFsm; // x0
  __int64 v8; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v11; // 0:x3.8
  System_Nullable_int__o v12; // 0:x4.8

  if ( (byte_438CD84 & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageComponent__OverrideAccountLinkage_b__24_0__);
    sub_B775C4(&AccountLinkageComponent_TypeInfo);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_System_Nullable_int___ctor__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_1692/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/);
    sub_B775C4(&StringLiteral_5609/*"ENABLE_CONTINUE_DEVICE"*/);
    byte_438CD84 = 1;
  }
  v3 = AccountLinkageComponent_TypeInfo;
  if ( (BYTE3(AccountLinkageComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
    v3 = AccountLinkageComponent_TypeInfo;
  }
  v3->static_fields->isLinked = 0;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1692/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_AccountLinkageComponent__OverrideAccountLinkage_b__24_0__, 0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  msgFontSize = 0LL;
  System_Nullable_int____ctor(p_msgFontSize, 24, (const MethodInfo_24765B8 *)Method_System_Nullable_int___ctor__);
  if ( !Instance
    || (v12 = msgFontSize,
        v11 = 0LL,
        CommonUI__OpenAccountLinkageNotificationDialog(Instance, v4, v6, v11, v12, 0LL),
        (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_B7769C(myRoomFsm, v8);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_5609/*"ENABLE_CONTINUE_DEVICE"*/, 0LL);
}


void __fastcall AccountLinkageComponent__ProcessAccountLinkage(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  AccountLinkageComponent_o *v4; // x19
  PartialMaintenanceMaster_o *v5; // x20
  const MethodInfo *v6; // x1
  System_String_o *AniplexPlusAccountLinkageMaintenanceMessage; // x0
  const MethodInfo *v8; // x2
  AccountLinkageComponent_o *v9; // x0
  AccountLinkageComponent_c *v10; // x0
  AccountLinkageParams_c *v11; // x0
  int32_t notificationType; // w8

  v4 = this;
  if ( (byte_438CD79 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageComponent_TypeInfo);
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (AccountLinkageComponent_o *)sub_B775C4(&StringLiteral_21657/*"ok"*/);
    byte_438CD79 = 1;
  }
  if ( !result )
    goto LABEL_28;
  if ( !System_String__Equals_44889276(result, (System_String_o *)StringLiteral_21657/*"ok"*/, 0LL) )
    return;
  this = (AccountLinkageComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (AccountLinkageComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___)) == 0LL )
  {
LABEL_28:
    sub_B7769C(this, result);
  }
  v5 = (PartialMaintenanceMaster_o *)this;
  if ( PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow((PartialMaintenanceMaster_o *)this, 0LL) )
  {
    AniplexPlusAccountLinkageMaintenanceMessage = PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
                                                    v5,
                                                    0LL);
    AccountLinkageComponent__OnPartialMaintenance(
      (AccountLinkageComponent_o *)AniplexPlusAccountLinkageMaintenanceMessage,
      AniplexPlusAccountLinkageMaintenanceMessage,
      v8);
  }
  else
  {
    v9 = (AccountLinkageComponent_o *)AccountLinkageParams_TypeInfo;
    if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
      v9 = (AccountLinkageComponent_o *)AccountLinkageParams_TypeInfo;
    }
    if ( BYTE4(v9[4].fields.myRoomFsm->klass) )
    {
      AccountLinkageComponent__OnSiteMaintenance(v9, v6);
    }
    else
    {
      v10 = AccountLinkageComponent_TypeInfo;
      if ( (BYTE3(AccountLinkageComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
        v10 = AccountLinkageComponent_TypeInfo;
      }
      if ( v10->static_fields->isLinked )
      {
        v11 = AccountLinkageParams_TypeInfo;
        if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
          v11 = AccountLinkageParams_TypeInfo;
        }
        notificationType = v11->static_fields->notificationType;
        if ( notificationType == 2 )
        {
          AccountLinkageComponent__OverrideAccountLinkage(v4, v6);
        }
        else if ( notificationType == 1 )
        {
          AccountLinkageComponent__AutoDelinkAccountLinkage(v4, v6);
        }
        else
        {
          AccountLinkageComponent__ConfirmUnlinkAccountLinkage(v4, v6);
        }
      }
      else
      {
        AccountLinkageComponent__OpenLoginWebview(v4, v6);
      }
    }
  }
}


void __fastcall AccountLinkageComponent__ReConfirmAccountLinkage(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x21
  System_String_o *SelfUserGame; // x0
  const MethodInfo *v5; // x1
  System_String_o *friendCode; // x19
  Il2CppObject *v7; // x25
  System_String_o *name; // x19
  Il2CppObject *v9; // x26
  System_String_o *buttonCancel; // x27
  System_String_o *buttonDecide; // x28
  const MethodInfo *v12; // x1
  System_String_o *v13; // x19
  AccountLinkageParams_c *v14; // x8
  Il2CppObject *v15; // x20
  Il2CppObject *NumberFormat_34382772; // x22
  __int64 v17; // x2
  Il2CppObject *v18; // x0
  System_String_o *v19; // x20
  System_String_o *v20; // x19
  CommonUI_o *Instance; // x21
  AccountLinkageReConfirmDialog_ClickDelegate_o *v22; // x22
  System_String_o *v23; // [xsp+20h] [xbp-80h]
  System_String_o *v24; // [xsp+28h] [xbp-78h]
  System_String_o *v25; // [xsp+30h] [xbp-70h]
  System_String_o *v26; // [xsp+38h] [xbp-68h]
  int32_t requestedAccountLevel; // [xsp+44h] [xbp-5Ch] BYREF
  UserGameEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_438CD83 & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageComponent__ReConfirmAccountLinkage_b__23_0__);
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&AccountLinkageReConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_14996/*"USER_DATA_INFO"*/);
    sub_B775C4(&StringLiteral_1702/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING"*/);
    sub_B775C4(&StringLiteral_1698/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE"*/);
    sub_B775C4(&StringLiteral_1693/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_1699/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/);
    sub_B775C4(&StringLiteral_1701/*"ACCOUNT_LINKAGE_RECONFIRM_TITLE"*/);
    sub_B775C4(&StringLiteral_1696/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438CD83 = 1;
  }
  entity = 0LL;
  v3 = (Il2CppObject *)StringLiteral_1/*""*/;
  SelfUserGame = (System_String_o *)UserGameMaster__TryGetSelfUserGame(&entity, 0LL);
  if ( ((unsigned __int8)SelfUserGame & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_23;
    friendCode = entity->fields.friendCode;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    SelfUserGame = LocalizationManager__GetNumberFormat_34382772(friendCode, 0LL);
    if ( !entity )
      goto LABEL_23;
    v7 = (Il2CppObject *)SelfUserGame;
    name = entity->fields.name;
    if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
    }
    SelfUserGame = AccountLinkageParams__AddColorCodeBracket(name, v5);
    if ( !entity )
LABEL_23:
      sub_B7769C(SelfUserGame, v5);
    v9 = (Il2CppObject *)SelfUserGame;
    v3 = (Il2CppObject *)System_Int32__ToString((int)entity + 80, 0LL);
  }
  else
  {
    v9 = v3;
    v7 = v3;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_1701/*"ACCOUNT_LINKAGE_RECONFIRM_TITLE"*/, 0LL);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_1696/*"ACCOUNT_LINKAGE_RECONFIRM_MESSAGE"*/, 0LL);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_1698/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE"*/, 0LL);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_1702/*"ACCOUNT_LINKAGE_RECONFIRM_WARNING"*/, 0LL);
  buttonCancel = LocalizationManager__Get((System_String_o *)StringLiteral_1693/*"ACCOUNT_LINKAGE_RECONFIRM_CANCEL"*/, 0LL);
  buttonDecide = LocalizationManager__Get((System_String_o *)StringLiteral_1699/*"ACCOUNT_LINKAGE_RECONFIRM_OVERRIDE_DECIDE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_14996/*"USER_DATA_INFO"*/, 0LL);
  v14 = AccountLinkageParams_TypeInfo;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
    v14 = AccountLinkageParams_TypeInfo;
  }
  v15 = (Il2CppObject *)AccountLinkageParams__AddColorCodeBracket(v14->static_fields->requestedAccountName, v12);
  NumberFormat_34382772 = (Il2CppObject *)LocalizationManager__GetNumberFormat_34382772(
                                            AccountLinkageParams_TypeInfo->static_fields->requestedAccountFriendCode,
                                            0LL);
  requestedAccountLevel = AccountLinkageParams_TypeInfo->static_fields->requestedAccountLevel;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &requestedAccountLevel, v17);
  v19 = System_String__Format_44903000(v13, NumberFormat_34382772, v15, v18, 0LL);
  v20 = System_String__Format_44903000(v13, v7, v9, v3, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (AccountLinkageReConfirmDialog_ClickDelegate_o *)sub_B77694(AccountLinkageReConfirmDialog_ClickDelegate_TypeInfo);
  AccountLinkageReConfirmDialog_ClickDelegate___ctor(
    v22,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent__ReConfirmAccountLinkage_b__23_0__,
    0LL);
  if ( !Instance )
    goto LABEL_23;
  CommonUI__OpenAccountLinkageReConfirmDialog(
    Instance,
    v22,
    v26,
    v25,
    v19,
    v20,
    v24,
    v23,
    buttonCancel,
    buttonDecide,
    0LL);
}


void __fastcall AccountLinkageComponent__SendIssueTokenRequest(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  AccountLinkageIssueTokenRequest_o *v7; // x19
  AccountLinkageParams_c *v8; // x8

  if ( (byte_438CD7D & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageComponent_IssueTokenCallback__);
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438CD7D = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_AccountLinkageComponent_IssueTokenCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v3,
                                        (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_AccountLinkageIssueTokenRequest___);
  v7 = (AccountLinkageIssueTokenRequest_o *)Request_WarBoardWallAttackRequest;
  v8 = AccountLinkageParams_TypeInfo;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
    v8 = AccountLinkageParams_TypeInfo;
  }
  if ( !v7 )
    sub_B7769C(Request_WarBoardWallAttackRequest, v5);
  AccountLinkageIssueTokenRequest__beginRequest(
    v7,
    v8->static_fields->authorizationCode,
    v8->static_fields->codeVerifier,
    v6);
}


void __fastcall AccountLinkageComponent__SetupMenu(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  PartialMaintenanceMaster_o *v7; // x20
  System_String_o *AniplexPlusAccountLinkageMaintenanceMessage; // x0
  const MethodInfo *v9; // x2
  __int64 *v10; // x8

  if ( (byte_438CD76 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_1754/*"ANIPLEX_PLUS_STATUS_OK"*/);
    sub_B775C4(&StringLiteral_1753/*"ANIPLEX_PLUS_STATUS_NG"*/);
    byte_438CD76 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_21657/*"ok"*/, 0LL) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_PartialMaintenanceMaster___);
      if ( Instance )
      {
        v7 = (PartialMaintenanceMaster_o *)Instance;
        if ( PartialMaintenanceMaster__isAniplexPlusAccountLinkageMaintenanceNow(
               (PartialMaintenanceMaster_o *)Instance,
               0LL) )
        {
          AniplexPlusAccountLinkageMaintenanceMessage = PartialMaintenanceMaster__GetAniplexPlusAccountLinkageMaintenanceMessage(
                                                          v7,
                                                          0LL);
          AccountLinkageComponent__OnPartialMaintenance(
            (AccountLinkageComponent_o *)AniplexPlusAccountLinkageMaintenanceMessage,
            AniplexPlusAccountLinkageMaintenanceMessage,
            v9);
          goto LABEL_8;
        }
        Instance = (DataManager_o *)this->fields.myRoomFsm;
        if ( Instance )
        {
          v10 = &StringLiteral_1754/*"ANIPLEX_PLUS_STATUS_OK"*/;
          goto LABEL_12;
        }
      }
    }
LABEL_13:
    sub_B7769C(Instance, v5);
  }
LABEL_8:
  Instance = (DataManager_o *)this->fields.myRoomFsm;
  if ( !Instance )
    goto LABEL_13;
  v10 = &StringLiteral_1753/*"ANIPLEX_PLUS_STATUS_NG"*/;
LABEL_12:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v10, 0LL);
}


void __fastcall AccountLinkageComponent__StartAccountLinkage(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v5; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_438CD78 & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageComponent_StartAccountLinkage__);
    sub_B775C4(&StringLiteral_15689/*"Wait_Action"*/);
    sub_B775C4(&StringLiteral_7298/*"Help"*/);
    byte_438CD78 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_10;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15689/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v5 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
      if ( System_String__op_Inequality(v5, (System_String_o *)StringLiteral_7298/*"Help"*/, 0LL) )
        return;
      goto LABEL_7;
    }
LABEL_10:
    sub_B7769C(myRoomFsm, method);
  }
LABEL_7:
  v6 = Method_AccountLinkageComponent_StartAccountLinkage__;
  if ( (*((_BYTE *)Method_AccountLinkageComponent_StartAccountLinkage__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B775CC(Method_AccountLinkageComponent_StartAccountLinkage__);
  v7 = (System_Reflection_MethodBase_o *)sub_B775A8(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  AccountLinkageComponent__CheckMaintenanceInfo(this, v8);
}


void __fastcall AccountLinkageComponent__SuccessedAccountLinkage(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  AccountLinkageComponent_o *v4; // x19
  AccountLinkageComponent_c *v5; // x0
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x20
  CommonUI_o *Instance; // x21
  System_Action_o *v10; // x22
  AccountLinkageParams_c *v11; // x0
  AccountLinkageParams_c *v12; // x0
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v15; // 0:x3.8
  System_Nullable_int__o v16; // 0:x4.8

  v4 = this;
  if ( (byte_438CD80 & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageComponent__SuccessedAccountLinkage_b__20_0__);
    sub_B775C4(&AccountLinkageComponent_TypeInfo);
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_System_Nullable_int___ctor__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_4733/*"DISABLE_CONTINUE_DEVICE"*/);
    sub_B775C4(&StringLiteral_1677/*"ACCOUNT_LINKAGE_COMPLETE_WARNING"*/);
    this = (AccountLinkageComponent_o *)sub_B775C4(&StringLiteral_1676/*"ACCOUNT_LINKAGE_COMPLETE_MESSAGE"*/);
    byte_438CD80 = 1;
  }
  if ( !result )
    goto LABEL_21;
  if ( System_String__Equals_44889276(result, (System_String_o *)StringLiteral_21657/*"ok"*/, 0LL) )
  {
    v5 = AccountLinkageComponent_TypeInfo;
    if ( (BYTE3(AccountLinkageComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
      v5 = AccountLinkageComponent_TypeInfo;
    }
    v5->static_fields->isLinked = 1;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1676/*"ACCOUNT_LINKAGE_COMPLETE_MESSAGE"*/, 0LL);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_1677/*"ACCOUNT_LINKAGE_COMPLETE_WARNING"*/, 0LL);
    v8 = System_String__Concat_44901936(v6, v7, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)v4,
      Method_AccountLinkageComponent__SuccessedAccountLinkage_b__20_0__,
      0LL);
    p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
    msgFontSize = 0LL;
    System_Nullable_int____ctor(p_msgFontSize, 30, (const MethodInfo_24765B8 *)Method_System_Nullable_int___ctor__);
    if ( Instance )
    {
      v16 = msgFontSize;
      v15 = 0LL;
      CommonUI__OpenAccountLinkageNotificationDialog(Instance, v8, v10, v15, v16, 0LL);
      v11 = AccountLinkageParams_TypeInfo;
      if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
      }
      AccountLinkageParams__ResetParams((const MethodInfo *)v11);
      this = (AccountLinkageComponent_o *)v4->fields.myRoomFsm;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_4733/*"DISABLE_CONTINUE_DEVICE"*/, 0LL);
        return;
      }
    }
LABEL_21:
    sub_B7769C(this, result);
  }
  v12 = AccountLinkageParams_TypeInfo;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
  }
  AccountLinkageParams__ResetParams((const MethodInfo *)v12);
}


void __fastcall AccountLinkageComponent__UnlinkedAccountLinkage(
        AccountLinkageComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  AccountLinkageComponent_o *v4; // x19
  AccountLinkageComponent_c *v5; // x0
  System_String_o *v6; // x20
  CommonUI_o *Instance; // x21
  System_Action_o *v8; // x22
  AccountLinkageParams_c *v9; // x0
  System_Nullable_float__o v10; // 0:x3.8
  System_Nullable_int__o v11; // 0:x4.8

  v4 = this;
  if ( (byte_438CD82 & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageComponent__UnlinkedAccountLinkage_b__22_0__);
    sub_B775C4(&AccountLinkageComponent_TypeInfo);
    sub_B775C4(&AccountLinkageParams_TypeInfo);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_1681/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    this = (AccountLinkageComponent_o *)sub_B775C4(&StringLiteral_5609/*"ENABLE_CONTINUE_DEVICE"*/);
    byte_438CD82 = 1;
  }
  if ( !result )
    goto LABEL_18;
  if ( System_String__Equals_44889276(result, (System_String_o *)StringLiteral_21657/*"ok"*/, 0LL) )
  {
    v5 = AccountLinkageComponent_TypeInfo;
    if ( (BYTE3(AccountLinkageComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
      v5 = AccountLinkageComponent_TypeInfo;
    }
    v5->static_fields->isLinked = 0;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_1681/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)v4, Method_AccountLinkageComponent__UnlinkedAccountLinkage_b__22_0__, 0LL);
    if ( Instance )
    {
      v10 = 0LL;
      v11 = 0LL;
      CommonUI__OpenAccountLinkageNotificationDialog(Instance, v6, v8, v10, v11, 0LL);
      this = (AccountLinkageComponent_o *)v4->fields.myRoomFsm;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5609/*"ENABLE_CONTINUE_DEVICE"*/, 0LL);
        return;
      }
    }
LABEL_18:
    sub_B7769C(this, result);
  }
  v9 = AccountLinkageParams_TypeInfo;
  if ( (BYTE3(AccountLinkageParams_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AccountLinkageParams_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageParams_TypeInfo);
  }
  AccountLinkageParams__ResetParams((const MethodInfo *)v9);
}


void __fastcall AccountLinkageComponent___AutoDelinkAccountLinkage_b__25_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_438CD8E & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438CD8E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0LL) )
  {
    sub_B7769C(Instance, v4);
  }
  AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v4);
}


void __fastcall AccountLinkageComponent___CloseMenu_b__8_0(AccountLinkageComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall AccountLinkageComponent___ConfirmUnlinkAccountLinkage_b__21_0(
        AccountLinkageComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20

  if ( (byte_438CD8A & 1) == 0 )
  {
    sub_B775C4(&Method_AccountLinkageComponent_UnlinkedAccountLinkage__);
    sub_B775C4(&Method_NetworkManager_getRequest_AccountLinkageUnlinkRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438CD8A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  CommonUI__CloseAccountLinkageUnlinkConfirmDialog(Instance, 0LL, 0LL);
  if ( isDecide )
  {
    v7 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_AccountLinkageComponent_UnlinkedAccountLinkage__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = (CommonUI_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                               v7,
                               (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_AccountLinkageUnlinkRequest___);
    if ( Instance )
    {
      RequestBase__beginRequest((RequestBase_o *)Instance, 0LL);
      return;
    }
LABEL_11:
    sub_B7769C(Instance, v6);
  }
}


void __fastcall AccountLinkageComponent___OverrideAccountLinkage_b__24_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_438CD8D & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438CD8D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0LL) )
  {
    sub_B7769C(Instance, v4);
  }
  AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v4);
}


void __fastcall AccountLinkageComponent___ReConfirmAccountLinkage_b__23_0(
        AccountLinkageComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_438CD8C & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438CD8C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v6);
  CommonUI__CloseAccountLinkageReConfirmDialog(Instance, 0LL, 0LL);
  if ( isDecide )
    AccountLinkageComponent__DoAccountLinkage(this, v7);
}


void __fastcall AccountLinkageComponent___SuccessedAccountLinkage_b__20_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_438CD89 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438CD89 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0LL) )
  {
    sub_B7769C(Instance, v4);
  }
  AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v4);
}


void __fastcall AccountLinkageComponent___UnlinkedAccountLinkage_b__22_0(
        AccountLinkageComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_438CD8B & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438CD8B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.accountLinkageMenu) == 0LL) )
  {
    sub_B7769C(Instance, v4);
  }
  AccountLinkageMenu__UpdateView((AccountLinkageMenu_o *)Instance, v4);
}


void __fastcall AccountLinkageComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4389F13 & 1) == 0 )
  {
    sub_B775C4(&AccountLinkageComponent___c_TypeInfo);
    byte_4389F13 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(AccountLinkageComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)AccountLinkageComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall AccountLinkageComponent___c___ctor(AccountLinkageComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AccountLinkageComponent___c___OnPartialMaintenance_b__27_0(
        AccountLinkageComponent___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4389F15 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4389F15 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v3);
  CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL);
}


void __fastcall AccountLinkageComponent___c___OnSiteMaintenance_b__26_0(
        AccountLinkageComponent___c_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4389F14 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4389F14 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v3);
  CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL);
}