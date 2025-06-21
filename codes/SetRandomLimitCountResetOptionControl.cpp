void __fastcall SetRandomLimitCountResetOptionControl___ctor(
        SetRandomLimitCountResetOptionControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRandomLimitCountResetOptionControl__CloseDlg(
        SetRandomLimitCountResetOptionControl_o *this,
        bool isRes,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  Il2CppObject *Request_object; // x0
  __int64 v11; // x1

  if ( (byte_4B1762A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_NetworkManager_getRequest_CardInitRandomLimitCountRequest___, isRes);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_1BCAFF8(&Method_SetRandomLimitCountResetOptionControl_EndCardInitRandomLimitCountRequest__, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4B1762A = 1;
  }
  if ( isRes )
  {
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_SetRandomLimitCountResetOptionControl_EndCardInitRandomLimitCountRequest__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = NetworkManager__getRequest_object_(
                       v9,
                       (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_CardInitRandomLimitCountRequest___);
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
    sub_1BCB254(Request_object, v11);
  }
  Request_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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

  if ( (byte_4B1762C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, result);
    byte_4B1762C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall SetRandomLimitCountResetOptionControl__Init(
        SetRandomLimitCountResetOptionControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  SetRandomLimitCountResetOptionControl_CategoryInfo_o *ownSettingInfo; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4B17629 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_9610/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_BUTTON"*/, method);
    sub_1BCAFF8(&StringLiteral_9607/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_BUTTON"*/, v4);
    sub_1BCAFF8(&StringLiteral_9611/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_EXPLANATION"*/, v5);
    sub_1BCAFF8(&StringLiteral_9608/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_EXPLANATION"*/, v6);
    byte_4B17629 = 1;
  }
  ownSettingInfo = this->fields.ownSettingInfo;
  if ( !ownSettingInfo
    || (SetRandomLimitCountResetOptionControl_CategoryInfo__Init(
          ownSettingInfo,
          (System_String_o *)StringLiteral_9610/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_BUTTON"*/,
          (System_String_o *)StringLiteral_9611/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_EXPLANATION"*/,
          v2),
        (ownSettingInfo = this->fields.friendSettingInfo) == 0LL) )
  {
    sub_1BCB254(ownSettingInfo, method);
  }
  SetRandomLimitCountResetOptionControl_CategoryInfo__Init(
    ownSettingInfo,
    (System_String_o *)StringLiteral_9607/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_BUTTON"*/,
    (System_String_o *)StringLiteral_9608/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_EXPLANATION"*/,
    v8);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  _BOOL4 isOwn; // w23
  System_String_o **v15; // x8
  System_String_o *v16; // x20
  System_String_o *v17; // x21
  System_String_o *v18; // x22
  Il2CppObject *Instance; // x23
  CommonConfirmDialog_ClickDelegate_o *v20; // x24
  __int64 v21; // x0
  __int64 v22; // x1

  if ( (byte_4B1762B & 1) == 0 )
  {
    sub_1BCAFF8(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_SetRandomLimitCountResetOptionControl_CloseDlg__, v4);
    sub_1BCAFF8(&Method_SetRandomLimitCountResetOptionControl_OpenDialog__, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BCAFF8(&StringLiteral_9609/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_MSG"*/, v7);
    sub_1BCAFF8(&StringLiteral_9612/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_MSG"*/, v8);
    sub_1BCAFF8(&StringLiteral_3653/*"COMMON_CONFIRM_NO"*/, v9);
    sub_1BCAFF8(&StringLiteral_3658/*"COMMON_CONFIRM_YES"*/, v10);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v11);
    byte_4B1762B = 1;
  }
  v12 = Method_SetRandomLimitCountResetOptionControl_OpenDialog__;
  if ( (*((_BYTE *)Method_SetRandomLimitCountResetOptionControl_OpenDialog__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BCB010(Method_SetRandomLimitCountResetOptionControl_OpenDialog__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
  isOwn = this->fields.isOwn;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( isOwn )
    v15 = (System_String_o **)&StringLiteral_9612/*"OPTION_RANDOM_LIMIT_COUNT_RESET_OWN_MSG"*/;
  else
    v15 = (System_String_o **)&StringLiteral_9609/*"OPTION_RANDOM_LIMIT_COUNT_RESET_FRIEND_MSG"*/;
  v16 = LocalizationManager__Get(*v15, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3658/*"COMMON_CONFIRM_YES"*/, 0LL);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3653/*"COMMON_CONFIRM_NO"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCB244(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v20,
    (Il2CppObject *)this,
    Method_SetRandomLimitCountResetOptionControl_CloseDlg__,
    0LL);
  if ( !Instance )
    sub_1BCB254(v21, v22);
  CommonUI__OpenConfirmDialog_30763852(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v16,
    v17,
    v18,
    v20,
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

  if ( (byte_4B1762D & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, buttonKey);
    byte_4B1762D = 1;
  }
  buttonLabel = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get(buttonKey, 0LL);
  if ( !buttonLabel
    || (UILabel__set_text(buttonLabel, v8, 0LL),
        explanationLabel = this->fields.explanationLabel,
        v8 = LocalizationManager__Get(explanationKey, 0LL),
        !explanationLabel) )
  {
    sub_1BCB254(v8, v9);
  }
  UILabel__set_text(explanationLabel, v8, 0LL);
}