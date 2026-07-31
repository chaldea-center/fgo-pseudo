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
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Request_object; // x0
  __int64 v9; // x1

  if ( (byte_59334A6 & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_CardInitRandomLimitCountRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SetRandomLimitCountResetOptionControl_EndCardInitRandomLimitCountRequest__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59334A6 = 1;
  }
  if ( isRes )
  {
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SetRandomLimitCountResetOptionControl_EndCardInitRandomLimitCountRequest__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Request_object = NetworkManager__getRequest_object_(
                       v5,
                       (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_CardInitRandomLimitCountRequest___);
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
    sub_21FFECC(Request_object, v9);
  }
  Request_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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

  if ( (byte_59334A8 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59334A8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void SetRandomLimitCountResetOptionControl__Init(
        SetRandomLimitCountResetOptionControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  SetRandomLimitCountResetOptionControl_CategoryInfo_o *ownSettingInfo; // x0
  const MethodInfo *v5; // x3

  if ( (byte_59334A5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_10070/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_BUTTON"*/);
    sub_21FFC50(&StringLiteral_10067/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_BUTTON"*/);
    sub_21FFC50(&StringLiteral_10071/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_EXPLANATION"*/);
    sub_21FFC50(&StringLiteral_10068/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_EXPLANATION"*/);
    byte_59334A5 = 1;
  }
  ownSettingInfo = this->fields.ownSettingInfo;
  if ( !ownSettingInfo
    || (SetRandomLimitCountResetOptionControl_CategoryInfo__Init(
          ownSettingInfo,
          (System_String_o *)StringLiteral_10070/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_BUTTON"*/,
          (System_String_o *)StringLiteral_10071/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_EXPLANATION"*/,
          v2),
        (ownSettingInfo = this->fields.friendSettingInfo) == 0) )
  {
    sub_21FFECC(ownSettingInfo, method);
  }
  SetRandomLimitCountResetOptionControl_CategoryInfo__Init(
    ownSettingInfo,
    (System_String_o *)StringLiteral_10067/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_BUTTON"*/,
    (System_String_o *)StringLiteral_10068/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_EXPLANATION"*/,
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
  __int64 v5; // x1
  __int64 v6; // x2
  _BOOL4 isOwn; // w23
  System_String_o **v8; // x8
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x20
  System_String_o *v12; // x21
  System_String_o *v13; // x22
  Il2CppObject *Instance; // x23
  CommonConfirmDialog_ClickDelegate_o *v15; // x24
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_59334A7 & 1) == 0 )
  {
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SetRandomLimitCountResetOptionControl_CloseDlg__);
    sub_21FFC50(&Method_SetRandomLimitCountResetOptionControl_OpenDialog__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_10069/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_MSG"*/);
    sub_21FFC50(&StringLiteral_10072/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_MSG"*/);
    sub_21FFC50(&StringLiteral_3826/*"COMMON_CONFIRM_NO"*/);
    sub_21FFC50(&StringLiteral_3831/*"COMMON_CONFIRM_YES"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59334A7 = 1;
  }
  v3 = Method_SetRandomLimitCountResetOptionControl_OpenDialog__;
  if ( (*((_BYTE *)Method_SetRandomLimitCountResetOptionControl_OpenDialog__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_SetRandomLimitCountResetOptionControl_OpenDialog__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  isOwn = this->fields.isOwn;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  if ( isOwn )
    v8 = (System_String_o **)&StringLiteral_10072/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_MSG"*/;
  else
    v8 = (System_String_o **)&StringLiteral_10069/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_MSG"*/;
  v11 = LocalizationManager__Get(*v8, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_YES"*/, 0);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3826/*"COMMON_CONFIRM_NO"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v15,
    (Il2CppObject *)this,
    Method_SetRandomLimitCountResetOptionControl_CloseDlg__,
    0);
  if ( !Instance )
    sub_21FFECC(v16, v17);
  CommonUI__OpenConfirmDialog_37292168(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v11,
    v12,
    v13,
    v15,
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

  if ( (byte_59334A9 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_59334A9 = 1;
  }
  buttonLabel = this->fields.buttonLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, buttonKey, explanationKey);
  v8 = LocalizationManager__Get(buttonKey, 0);
  if ( !buttonLabel
    || (UILabel__set_text(buttonLabel, v8, 0),
        explanationLabel = this->fields.explanationLabel,
        v8 = LocalizationManager__Get(explanationKey, 0),
        !explanationLabel) )
  {
    sub_21FFECC(v8, v9);
  }
  UILabel__set_text(explanationLabel, v8, 0);
}