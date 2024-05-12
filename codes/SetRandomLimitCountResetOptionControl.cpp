void __fastcall SetRandomLimitCountResetOptionControl___ctor(
        SetRandomLimitCountResetOptionControl_o *this,
        const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall SetRandomLimitCountResetOptionControl__CloseDlg(
        SetRandomLimitCountResetOptionControl_o *this,
        bool isRes,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  CardInitRandomLimitCountRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v7; // x1

  if ( (byte_438DAA5 & 1) == 0 )
  {
    sub_B775C4(&Method_NetworkManager_getRequest_CardInitRandomLimitCountRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&Method_SetRandomLimitCountResetOptionControl_EndCardInitRandomLimitCountRequest__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438DAA5 = 1;
  }
  if ( isRes )
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SetRandomLimitCountResetOptionControl_EndCardInitRandomLimitCountRequest__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CardInitRandomLimitCountRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                               v5,
                                                                               (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardInitRandomLimitCountRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      CardInitRandomLimitCountRequest__beginRequest(
        Request_WarBoardWallAttackRequest,
        LOBYTE(this[1].klass),
        LOBYTE(this[1].klass) ^ 1,
        0LL);
      return;
    }
LABEL_11:
    sub_B7769C(Request_WarBoardWallAttackRequest, v7);
  }
  Request_WarBoardWallAttackRequest = (CardInitRandomLimitCountRequest_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Request_WarBoardWallAttackRequest, 0LL);
}


void __fastcall SetRandomLimitCountResetOptionControl__EndCardInitRandomLimitCountRequest(
        SetRandomLimitCountResetOptionControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_438DAA7 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438DAA7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v4);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall SetRandomLimitCountResetOptionControl__Init(
        SetRandomLimitCountResetOptionControl_o *this,
        const MethodInfo *method)
{
  SetRandomLimitCountResetOptionControl_CategoryInfo_o *friendSettingInfo; // x0

  if ( (byte_438DAA4 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9977/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_BUTTON"*/);
    sub_B775C4(&StringLiteral_9974/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_BUTTON"*/);
    sub_B775C4(&StringLiteral_9978/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_EXPLANATION"*/);
    sub_B775C4(&StringLiteral_9975/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_EXPLANATION"*/);
    byte_438DAA4 = 1;
  }
  friendSettingInfo = this->fields.friendSettingInfo;
  if ( !friendSettingInfo
    || (SetRandomLimitCountResetOptionControl_CategoryInfo__Init(
          friendSettingInfo,
          (System_String_o *)StringLiteral_9977/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_BUTTON"*/,
          (System_String_o *)StringLiteral_9978/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_EXPLANATION"*/,
          0LL),
        (friendSettingInfo = *(SetRandomLimitCountResetOptionControl_CategoryInfo_o **)&this->fields.isOwn) == 0LL) )
  {
    sub_B7769C(friendSettingInfo, method);
  }
  SetRandomLimitCountResetOptionControl_CategoryInfo__Init(
    friendSettingInfo,
    (System_String_o *)StringLiteral_9974/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_BUTTON"*/,
    (System_String_o *)StringLiteral_9975/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_EXPLANATION"*/,
    0LL);
  LOBYTE(this[1].klass) = 0;
}


void __fastcall SetRandomLimitCountResetOptionControl__OnClickFriendSettingButton(
        SetRandomLimitCountResetOptionControl_o *this,
        const MethodInfo *method)
{
  LOBYTE(this[1].klass) = 0;
  SetRandomLimitCountResetOptionControl__OpenDialog(this, method);
}


void __fastcall SetRandomLimitCountResetOptionControl__OnClickOwnSettingButton(
        SetRandomLimitCountResetOptionControl_o *this,
        const MethodInfo *method)
{
  LOBYTE(this[1].klass) = 1;
  SetRandomLimitCountResetOptionControl__OpenDialog(this, method);
}


void __fastcall SetRandomLimitCountResetOptionControl__OpenDialog(
        SetRandomLimitCountResetOptionControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 *v5; // x8
  System_String_o *v6; // x20
  System_String_o *v7; // x21
  System_String_o *v8; // x22
  CommonUI_o *Instance; // x23
  CommonConfirmDialog_ClickDelegate_o *v10; // x24
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_438DAA6 & 1) == 0 )
  {
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SetRandomLimitCountResetOptionControl_CloseDlg__);
    sub_B775C4(&Method_SetRandomLimitCountResetOptionControl_OpenDialog__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_9976/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_MSG"*/);
    sub_B775C4(&StringLiteral_9979/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_MSG"*/);
    sub_B775C4(&StringLiteral_3390/*"COMMON_CONFIRM_NO"*/);
    sub_B775C4(&StringLiteral_3393/*"COMMON_CONFIRM_YES"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438DAA6 = 1;
  }
  v3 = Method_SetRandomLimitCountResetOptionControl_OpenDialog__;
  if ( (*((_BYTE *)Method_SetRandomLimitCountResetOptionControl_OpenDialog__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B775CC(Method_SetRandomLimitCountResetOptionControl_OpenDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  if ( LOBYTE(this[1].klass) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = &StringLiteral_9979/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_MSG"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = &StringLiteral_9976/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_MSG"*/;
  }
  v6 = LocalizationManager__Get((System_String_o *)*v5, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3393/*"COMMON_CONFIRM_YES"*/, 0LL);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3390/*"COMMON_CONFIRM_NO"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SetRandomLimitCountResetOptionControl_CloseDlg__,
    0LL);
  if ( !Instance )
    sub_B7769C(v11, v12);
  CommonUI__OpenConfirmDialog_18056028(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v6,
    v7,
    v8,
    v10,
    26,
    26,
    15.0,
    750,
    2,
    470,
    -162.5,
    0,
    0,
    240,
    1,
    0LL);
}


void __fastcall SetRandomLimitCountResetOptionControl_CategoryInfo___ctor(
        SetRandomLimitCountResetOptionControl_CategoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SetRandomLimitCountResetOptionControl_CategoryInfo__Init(
        SetRandomLimitCountResetOptionControl_CategoryInfo_o *this,
        System_String_o *buttonKey,
        System_String_o *explanationKey,
        const MethodInfo *method)
{
  UILabel_o *buttonLabel; // x22
  System_String_o *v8; // x0
  __int64 v9; // x1
  UILabel_o *explanationLabel; // x20

  if ( (byte_4388E6D & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    byte_4388E6D = 1;
  }
  buttonLabel = this->fields.buttonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get(buttonKey, 0LL);
  if ( !buttonLabel
    || (UILabel__set_text(buttonLabel, v8, 0LL),
        explanationLabel = this->fields.explanationLabel,
        v8 = LocalizationManager__Get(explanationKey, 0LL),
        !explanationLabel) )
  {
    sub_B7769C(v8, v9);
  }
  UILabel__set_text(explanationLabel, v8, 0LL);
}