void SetRandomLimitCountResetOptionControl___ctor(
        SetRandomLimitCountResetOptionControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SetRandomLimitCountResetOptionControl__CloseDlg(
        SetRandomLimitCountResetOptionControl_o *this,
        bool isRes,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1

  if ( (byte_4D27811 & 1) == 0 )
  {
    sub_1C94098(&Method_NetworkManager_getRequest_CardInitRandomLimitCountRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C94098(&Method_SetRandomLimitCountResetOptionControl_EndCardInitRandomLimitCountRequest__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D27811 = 1;
  }
  if ( isRes )
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SetRandomLimitCountResetOptionControl_EndCardInitRandomLimitCountRequest__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v5,
                       (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_CardInitRandomLimitCountRequest___);
    if ( Request_object )
    {
      CardInitRandomLimitCountRequest__beginRequest(
        (CardInitRandomLimitCountRequest_o *)Request_object,
        this->fields.isOwn,
        !this->fields.isOwn,
        0);
      return;
    }
LABEL_10:
    sub_1C942F0(Request_object, v7);
  }
  Request_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Request_object )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Request_object, 0);
}


void SetRandomLimitCountResetOptionControl__EndCardInitRandomLimitCountRequest(
        SetRandomLimitCountResetOptionControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D27813 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D27813 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v4);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void SetRandomLimitCountResetOptionControl__Init(
        SetRandomLimitCountResetOptionControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  SetRandomLimitCountResetOptionControl_CategoryInfo_o *ownSettingInfo; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4D27810 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_9706/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_BUTTON"*/);
    sub_1C94098(&StringLiteral_9703/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_BUTTON"*/);
    sub_1C94098(&StringLiteral_9707/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_EXPLANATION"*/);
    sub_1C94098(&StringLiteral_9704/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_EXPLANATION"*/);
    byte_4D27810 = 1;
  }
  ownSettingInfo = this->fields.ownSettingInfo;
  if ( !ownSettingInfo
    || (SetRandomLimitCountResetOptionControl_CategoryInfo__Init(
          ownSettingInfo,
          (System_String_o *)StringLiteral_9706/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_BUTTON"*/,
          (System_String_o *)StringLiteral_9707/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_EXPLANATION"*/,
          v2),
        (ownSettingInfo = this->fields.friendSettingInfo) == 0) )
  {
    sub_1C942F0(ownSettingInfo, method);
  }
  SetRandomLimitCountResetOptionControl_CategoryInfo__Init(
    ownSettingInfo,
    (System_String_o *)StringLiteral_9703/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_BUTTON"*/,
    (System_String_o *)StringLiteral_9704/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_EXPLANATION"*/,
    v5);
  this->fields.isOwn = 0;
}


void SetRandomLimitCountResetOptionControl__OnClickFriendSettingButton(
        SetRandomLimitCountResetOptionControl_o *this,
        const MethodInfo *method)
{
  this->fields.isOwn = 0;
  SetRandomLimitCountResetOptionControl__OpenDialog(this, method);
}


void SetRandomLimitCountResetOptionControl__OnClickOwnSettingButton(
        SetRandomLimitCountResetOptionControl_o *this,
        const MethodInfo *method)
{
  this->fields.isOwn = 1;
  SetRandomLimitCountResetOptionControl__OpenDialog(this, method);
}


void SetRandomLimitCountResetOptionControl__OpenDialog(
        SetRandomLimitCountResetOptionControl_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  _BOOL4 isOwn; // w23
  System_String_o **v6; // x8
  System_String_o *v7; // x20
  System_String_o *v8; // x21
  System_String_o *v9; // x22
  Il2CppObject *Instance; // x23
  CommonConfirmDialog_ClickDelegate_o *v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4D27812 & 1) == 0 )
  {
    sub_1C94098(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SetRandomLimitCountResetOptionControl_CloseDlg__);
    sub_1C94098(&Method_SetRandomLimitCountResetOptionControl_OpenDialog__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&StringLiteral_9705/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_MSG"*/);
    sub_1C94098(&StringLiteral_9708/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_MSG"*/);
    sub_1C94098(&StringLiteral_3693/*"COMMON_CONFIRM_NO"*/);
    sub_1C94098(&StringLiteral_3698/*"COMMON_CONFIRM_YES"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D27812 = 1;
  }
  v3 = Method_SetRandomLimitCountResetOptionControl_OpenDialog__;
  if ( (*((_BYTE *)Method_SetRandomLimitCountResetOptionControl_OpenDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_SetRandomLimitCountResetOptionControl_OpenDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isOwn = this->fields.isOwn;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( isOwn )
    v6 = (System_String_o **)&StringLiteral_9708/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_MSG"*/;
  else
    v6 = (System_String_o **)&StringLiteral_9705/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_MSG"*/;
  v7 = LocalizationManager__Get(*v6, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3698/*"COMMON_CONFIRM_YES"*/, 0);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMMON_CONFIRM_NO"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C942E4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_SetRandomLimitCountResetOptionControl_CloseDlg__,
    0);
  if ( !Instance )
    sub_1C942F0(v12, v13);
  CommonUI__OpenConfirmDialog_31583464(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v7,
    v8,
    v9,
    v11,
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
    0);
}


void SetRandomLimitCountResetOptionControl_CategoryInfo___ctor(
        SetRandomLimitCountResetOptionControl_CategoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SetRandomLimitCountResetOptionControl_CategoryInfo__Init(
        SetRandomLimitCountResetOptionControl_CategoryInfo_o *this,
        System_String_o *buttonKey,
        System_String_o *explanationKey,
        const MethodInfo *method)
{
  UILabel_o *buttonLabel; // x22
  System_String_o *v8; // x0
  __int64 v9; // x1
  UILabel_o *explanationLabel; // x20

  if ( (byte_4D27814 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    byte_4D27814 = 1;
  }
  buttonLabel = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(buttonKey, 0);
  if ( !buttonLabel
    || (UILabel__set_text(buttonLabel, v8, 0),
        explanationLabel = this->fields.explanationLabel,
        v8 = LocalizationManager__Get(explanationKey, 0),
        !explanationLabel) )
  {
    sub_1C942F0(v8, v9);
  }
  UILabel__set_text(explanationLabel, v8, 0);
}