void __fastcall SetRandomLimitCountResetOptionControl___ctor(
        SetRandomLimitCountResetOptionControl_o *this,
        const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRandomLimitCountResetOptionControl__CloseDlg(
        SetRandomLimitCountResetOptionControl_o *this,
        bool isRes,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  __int64 v15; // x1
  Il2CppObject *Request_object; // x0
  __int64 v17; // x1

  if ( (byte_4B1163E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardInitRandomLimitCountRequest___, isRes, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SetRandomLimitCountResetOptionControl_EndCardInitRandomLimitCountRequest__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    byte_4B1163E = 1;
  }
  if ( isRes )
  {
    v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   isRes,
                                                   method,
                                                   v3);
    NetworkManager_ResultCallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_SetRandomLimitCountResetOptionControl_EndCardInitRandomLimitCountRequest__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
    Request_object = NetworkManager__getRequest_object_(
                       v14,
                       (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardInitRandomLimitCountRequest___);
    if ( Request_object )
    {
      CardInitRandomLimitCountRequest__beginRequest(
        (CardInitRandomLimitCountRequest_o *)Request_object,
        this->fields.isOwn,
        !this->fields.isOwn,
        0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(Request_object, v17);
  }
  Request_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Request_object )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Request_object, 0LL);
}


void __fastcall SetRandomLimitCountResetOptionControl__EndCardInitRandomLimitCountRequest(
        SetRandomLimitCountResetOptionControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B11640 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, result, method);
    byte_4B11640 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall SetRandomLimitCountResetOptionControl__Init(
        SetRandomLimitCountResetOptionControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  SetRandomLimitCountResetOptionControl_CategoryInfo_o *ownSettingInfo; // x0
  const MethodInfo *v12; // x3

  if ( (byte_4B1163D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9812/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_BUTTON"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_9809/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_BUTTON"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_9813/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_EXPLANATION"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_9810/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_EXPLANATION"*/, v9, v10);
    byte_4B1163D = 1;
  }
  ownSettingInfo = this->fields.ownSettingInfo;
  if ( !ownSettingInfo
    || (SetRandomLimitCountResetOptionControl_CategoryInfo__Init(
          ownSettingInfo,
          (System_String_o *)StringLiteral_9812/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_BUTTON"*/,
          (System_String_o *)StringLiteral_9813/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_EXPLANATION"*/,
          v3),
        (ownSettingInfo = this->fields.friendSettingInfo) == 0LL) )
  {
    sub_1BCAA3C(ownSettingInfo, method);
  }
  SetRandomLimitCountResetOptionControl_CategoryInfo__Init(
    ownSettingInfo,
    (System_String_o *)StringLiteral_9809/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_BUTTON"*/,
    (System_String_o *)StringLiteral_9810/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_EXPLANATION"*/,
    v12);
  this->fields.isOwn = 0;
}


void __fastcall SetRandomLimitCountResetOptionControl__OnClickFriendSettingButton(
        SetRandomLimitCountResetOptionControl_o *this,
        const MethodInfo *method)
{
  this->fields.isOwn = 0;
  SetRandomLimitCountResetOptionControl__OpenDialog(this, method);
}


void __fastcall SetRandomLimitCountResetOptionControl__OnClickOwnSettingButton(
        SetRandomLimitCountResetOptionControl_o *this,
        const MethodInfo *method)
{
  this->fields.isOwn = 1;
  SetRandomLimitCountResetOptionControl__OpenDialog(this, method);
}


void __fastcall SetRandomLimitCountResetOptionControl__OpenDialog(
        SetRandomLimitCountResetOptionControl_o *this,
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
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  __int64 v24; // x1
  _BOOL4 isOwn; // w24
  System_String_o **v26; // x8
  __int64 v27; // x1
  System_String_o *v28; // x20
  System_String_o *v29; // x21
  System_String_o *v30; // x22
  Il2CppObject *Instance; // x23
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  CommonConfirmDialog_ClickDelegate_o *v35; // x24
  __int64 v36; // x0
  __int64 v37; // x1

  if ( (byte_4B1163F & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SetRandomLimitCountResetOptionControl_CloseDlg__, v6, v7);
    sub_1BCA7E0(&Method_SetRandomLimitCountResetOptionControl_OpenDialog__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_9811/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_MSG"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_9814/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_MSG"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v20, v21);
    byte_4B1163F = 1;
  }
  v22 = Method_SetRandomLimitCountResetOptionControl_OpenDialog__;
  if ( (*((_BYTE *)Method_SetRandomLimitCountResetOptionControl_OpenDialog__ + 83) & 2) != 0 )
    v22 = (_QWORD *)sub_1BCA7F8(Method_SetRandomLimitCountResetOptionControl_OpenDialog__);
  v23 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v22, v22[4]);
  OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
  isOwn = this->fields.isOwn;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
  if ( isOwn )
    v26 = (System_String_o **)&StringLiteral_9814/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_MSG"*/;
  else
    v26 = (System_String_o **)&StringLiteral_9811/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_MSG"*/;
  v28 = LocalizationManager__Get(*v26, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, 0LL);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v35 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v32, v33, v34);
  CommonConfirmDialog_ClickDelegate___ctor(
    v35,
    (Il2CppObject *)this,
    Method_SetRandomLimitCountResetOptionControl_CloseDlg__,
    0LL);
  if ( !Instance )
    sub_1BCAA3C(v36, v37);
  CommonUI__OpenConfirmDialog_30766668(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v28,
    v29,
    v30,
    v35,
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

  if ( (byte_4B11641 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, buttonKey, explanationKey);
    byte_4B11641 = 1;
  }
  buttonLabel = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, buttonKey);
  v8 = LocalizationManager__Get(buttonKey, 0LL);
  if ( !buttonLabel
    || (UILabel__set_text(buttonLabel, v8, 0LL),
        explanationLabel = this->fields.explanationLabel,
        v8 = LocalizationManager__Get(explanationKey, 0LL),
        !explanationLabel) )
  {
    sub_1BCAA3C(v8, v9);
  }
  UILabel__set_text(explanationLabel, v8, 0LL);
}