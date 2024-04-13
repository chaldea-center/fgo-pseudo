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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  CardInitRandomLimitCountRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v20; // x1

  if ( (byte_42EBAA9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardInitRandomLimitCountRequest___, isRes, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SetRandomLimitCountResetOptionControl_EndCardInitRandomLimitCountRequest__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    byte_42EBAA9 = 1;
  }
  if ( isRes )
  {
    v18 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_SetRandomLimitCountResetOptionControl_EndCardInitRandomLimitCountRequest__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CardInitRandomLimitCountRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                               v18,
                                                                               (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardInitRandomLimitCountRequest___);
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
    sub_B5D69C(Request_WarBoardWallAttackRequest, v20);
  }
  Request_WarBoardWallAttackRequest = (CardInitRandomLimitCountRequest_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_11;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Request_WarBoardWallAttackRequest, 0LL);
}


void __fastcall SetRandomLimitCountResetOptionControl__EndCardInitRandomLimitCountRequest(
        SetRandomLimitCountResetOptionControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42EBAAB & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)result, (_DWORD)method, v3);
    byte_42EBAAB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall SetRandomLimitCountResetOptionControl__Init(
        SetRandomLimitCountResetOptionControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  SetRandomLimitCountResetOptionControl_CategoryInfo_o *friendSettingInfo; // x0

  if ( (byte_42EBAA8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9902/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_BUTTON"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9899/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_BUTTON"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_9903/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_EXPLANATION"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9900/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_EXPLANATION"*/, v11, v12, v13);
    byte_42EBAA8 = 1;
  }
  friendSettingInfo = this->fields.friendSettingInfo;
  if ( !friendSettingInfo
    || (SetRandomLimitCountResetOptionControl_CategoryInfo__Init(
          friendSettingInfo,
          (System_String_o *)StringLiteral_9902/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_BUTTON"*/,
          (System_String_o *)StringLiteral_9903/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_EXPLANATION"*/,
          0LL),
        (friendSettingInfo = *(SetRandomLimitCountResetOptionControl_CategoryInfo_o **)&this->fields.isOwn) == 0LL) )
  {
    sub_B5D69C(friendSettingInfo, method);
  }
  SetRandomLimitCountResetOptionControl_CategoryInfo__Init(
    friendSettingInfo,
    (System_String_o *)StringLiteral_9899/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_BUTTON"*/,
    (System_String_o *)StringLiteral_9900/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_EXPLANATION"*/,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  __int64 *v34; // x8
  System_String_o *v35; // x20
  System_String_o *v36; // x21
  System_String_o *v37; // x22
  CommonUI_o *Instance; // x23
  CommonConfirmDialog_ClickDelegate_o *v39; // x24
  __int64 v40; // x0
  __int64 v41; // x1

  if ( (byte_42EBAAA & 1) == 0 )
  {
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SetRandomLimitCountResetOptionControl_CloseDlg__, v8, v9, v10);
    sub_B5D5C4(&Method_SetRandomLimitCountResetOptionControl_OpenDialog__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_9901/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_MSG"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_9904/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_MSG"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_1/*""*/, v29, v30, v31);
    byte_42EBAAA = 1;
  }
  v32 = Method_SetRandomLimitCountResetOptionControl_OpenDialog__;
  if ( (*((_BYTE *)Method_SetRandomLimitCountResetOptionControl_OpenDialog__ + 75) & 2) != 0 )
    v32 = (_QWORD *)sub_B5D5CC(Method_SetRandomLimitCountResetOptionControl_OpenDialog__);
  v33 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v32, v32[3]);
  OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0LL);
  if ( LOBYTE(this[1].klass) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v34 = &StringLiteral_9904/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_MSG"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v34 = &StringLiteral_9901/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_MSG"*/;
  }
  v35 = LocalizationManager__Get((System_String_o *)*v34, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, 0LL);
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v39 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v39,
    (Il2CppObject *)this,
    Method_SetRandomLimitCountResetOptionControl_CloseDlg__,
    0LL);
  if ( !Instance )
    sub_B5D69C(v40, v41);
  CommonUI__OpenConfirmDialog_18202048(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v35,
    v36,
    v37,
    v39,
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

  if ( (byte_42E5DBA & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)buttonKey, (_DWORD)explanationKey, method);
    byte_42E5DBA = 1;
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
    sub_B5D69C(v8, v9);
  }
  UILabel__set_text(explanationLabel, v8, 0LL);
}