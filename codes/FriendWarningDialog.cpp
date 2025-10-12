void FriendWarningDialog___ctor(FriendWarningDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C32663 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C32663 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void FriendWarningDialog__Callback(FriendWarningDialog_o *this, bool result, const MethodInfo *method)
{
  struct FriendWarningDialog_CallbackFunc_o **p_callbackFunc; // x0
  struct FriendWarningDialog_CallbackFunc_o *v4; // x20
  struct FriendWarningDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0;
    sub_1C32BC4(p_callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v4->fields.invoke_impl)(
      v4->fields.method_code,
      result,
      v4->fields.method);
  }
}


void FriendWarningDialog__Close(FriendWarningDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendWarningDialog__Close_32738220(this, 0, v2);
}


void FriendWarningDialog__Close_32738220(
        FriendWarningDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4C32660 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_FriendWarningDialog_EndClose__);
    byte_4C32660 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C32BC4(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendWarningDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void FriendWarningDialog__EndClose(FriendWarningDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  FriendWarningDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C32BC4(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void FriendWarningDialog__EndOpen(FriendWarningDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void FriendWarningDialog__Init(FriendWarningDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_4C3265E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3265E = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (messageLabel = this->fields.closeLabel) == 0) )
  {
    sub_1C32E7C(messageLabel);
  }
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void FriendWarningDialog__OnClickClose(FriendWarningDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C32661 & 1) == 0 )
  {
    sub_1C32C20(&Method_FriendWarningDialog_OnClickClose__);
    byte_4C32661 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendWarningDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_FriendWarningDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_FriendWarningDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    FriendWarningDialog__Callback(this, 0, v5);
  }
}


void FriendWarningDialog__Open(
        FriendWarningDialog_o *this,
        int32_t kind,
        FriendWarningDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UserGameEntity_o *SelfUserGame; // x20
  OtherUserGameEntity_array *List; // x0
  UILabel_o *messageLabel; // x21
  OtherUserGameEntity_array *v11; // x23
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  System_String_o *v18; // x22
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  Il2CppObject *v25; // x23
  Il2CppObject *v26; // x0
  UILabel_o *closeLabel; // x20
  __int64 *v28; // x8
  UILabel_o *v29; // x20
  UILabel_o *v30; // x20
  UILabel_o *v31; // x20
  UILabel_o *v32; // x20
  UILabel_o *v33; // x20
  Il2CppObject *MasterData_object; // x0
  UILabel_o *v35; // x20
  UserFollowMaster_o *v36; // x22
  System_String_o *v37; // x21
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x5
  __int64 v48; // x6
  __int64 v49; // x7
  Il2CppObject *v50; // x22
  BalanceConfig_c *v51; // x8
  Il2CppObject *v52; // x0
  System_Action_o *v53; // x20
  int32_t friendKeep; // [xsp+8h] [xbp-48h] BYREF
  int32_t max_length; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3265F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C32C20(&Method_FriendWarningDialog_EndOpen__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_6537/*"FRIEND_NO_FRIEND_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_6541/*"FRIEND_NO_OFFER_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_6536/*"FRIEND_NO_FRIEND_CLOSE"*/);
    sub_1C32C20(&StringLiteral_6544/*"FRIEND_NO_STRING_CLOSE"*/);
    sub_1C32C20(&StringLiteral_6534/*"FRIEND_MAX_FRIEND_CLOSE"*/);
    sub_1C32C20(&StringLiteral_6545/*"FRIEND_NO_STRING_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_6535/*"FRIEND_MAX_FRIEND_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_6538/*"FRIEND_NO_OFFERED_CLOSE"*/);
    sub_1C32C20(&StringLiteral_6467/*"FOLLOW_MAX_CLOSE"*/);
    sub_1C32C20(&StringLiteral_6540/*"FRIEND_NO_OFFER_CLOSE"*/);
    sub_1C32C20(&StringLiteral_6543/*"FRIEND_NO_SEARCH_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_6542/*"FRIEND_NO_SEARCH_CLOSE"*/);
    sub_1C32C20(&StringLiteral_6468/*"FOLLOW_MAX_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_6539/*"FRIEND_NO_OFFERED_MESSAGE"*/);
    byte_4C3265F = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C32BC4(&this->fields.callbackFunc, callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    switch ( kind )
    {
      case 1:
        SelfUserGame = UserGameMaster__getSelfUserGame(0);
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_46;
        gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TblFriendMaster___);
        if ( !gameObject )
          goto LABEL_46;
        List = TblFriendMaster__GetList((TblFriendMaster_o *)gameObject, 3, 0);
        messageLabel = this->fields.messageLabel;
        v11 = List;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6535/*"FRIEND_MAX_FRIEND_MESSAGE"*/, 0);
        if ( !v11 )
          goto LABEL_46;
        v18 = (System_String_o *)gameObject;
        max_length = v11->max_length;
        gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(
                                                   int_TypeInfo,
                                                   &max_length,
                                                   v12,
                                                   v13,
                                                   v14,
                                                   v15,
                                                   v16,
                                                   v17);
        if ( !SelfUserGame )
          goto LABEL_46;
        v25 = (Il2CppObject *)gameObject;
        friendKeep = SelfUserGame->fields.friendKeep;
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep, v19, v20, v21, v22, v23, v24);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_63559836(v18, v25, v26, 0);
        if ( !messageLabel )
          goto LABEL_46;
        UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
        closeLabel = this->fields.closeLabel;
        v28 = &StringLiteral_6534/*"FRIEND_MAX_FRIEND_CLOSE"*/;
        break;
      case 2:
        v29 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6543/*"FRIEND_NO_SEARCH_MESSAGE"*/, 0);
        if ( !v29 )
          goto LABEL_46;
        UILabel__set_text(v29, (System_String_o *)gameObject, 0);
        closeLabel = this->fields.closeLabel;
        v28 = &StringLiteral_6542/*"FRIEND_NO_SEARCH_CLOSE"*/;
        break;
      case 3:
        v30 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6545/*"FRIEND_NO_STRING_MESSAGE"*/, 0);
        if ( !v30 )
          goto LABEL_46;
        UILabel__set_text(v30, (System_String_o *)gameObject, 0);
        closeLabel = this->fields.closeLabel;
        v28 = &StringLiteral_6544/*"FRIEND_NO_STRING_CLOSE"*/;
        break;
      case 4:
        v31 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6541/*"FRIEND_NO_OFFER_MESSAGE"*/, 0);
        if ( !v31 )
          goto LABEL_46;
        UILabel__set_text(v31, (System_String_o *)gameObject, 0);
        closeLabel = this->fields.closeLabel;
        v28 = &StringLiteral_6540/*"FRIEND_NO_OFFER_CLOSE"*/;
        break;
      case 5:
        v32 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6539/*"FRIEND_NO_OFFERED_MESSAGE"*/, 0);
        if ( !v32 )
          goto LABEL_46;
        UILabel__set_text(v32, (System_String_o *)gameObject, 0);
        closeLabel = this->fields.closeLabel;
        v28 = &StringLiteral_6538/*"FRIEND_NO_OFFERED_CLOSE"*/;
        break;
      case 6:
        v33 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6537/*"FRIEND_NO_FRIEND_MESSAGE"*/, 0);
        if ( !v33 )
          goto LABEL_46;
        UILabel__set_text(v33, (System_String_o *)gameObject, 0);
        closeLabel = this->fields.closeLabel;
        v28 = &StringLiteral_6536/*"FRIEND_NO_FRIEND_CLOSE"*/;
        break;
      case 7:
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_46;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserFollowMaster___);
        v35 = this->fields.messageLabel;
        v36 = (UserFollowMaster_o *)MasterData_object;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6468/*"FOLLOW_MAX_MESSAGE"*/, 0);
        if ( !v36 )
          goto LABEL_46;
        v37 = (System_String_o *)gameObject;
        max_length = UserFollowMaster__GetFollowSum(v36, 0);
        v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &max_length, v38, v39, v40, v41, v42, v43);
        v51 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v51 = BalanceConfig_TypeInfo;
        }
        friendKeep = v51->static_fields->FollowNum;
        v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep, v44, v45, v46, v47, v48, v49);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_63559836(v37, v50, v52, 0);
        if ( !v35 )
          goto LABEL_46;
        UILabel__set_text(v35, (System_String_o *)gameObject, 0);
        closeLabel = this->fields.closeLabel;
        v28 = &StringLiteral_6467/*"FOLLOW_MAX_CLOSE"*/;
        break;
      default:
        goto LABEL_44;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v28, 0);
    if ( !closeLabel )
LABEL_46:
      sub_1C32E7C(gameObject);
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
LABEL_44:
    this->fields.state = 1;
    v53 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v53, (Il2CppObject *)this, Method_FriendWarningDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v53, 0, 0, 0);
  }
}


void FriendWarningDialog__add_callbackFunc(
        FriendWarningDialog_o *this,
        FriendWarningDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct FriendWarningDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct FriendWarningDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendWarningDialog_o *v11; // x0
  FriendWarningDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C3265C & 1) == 0 )
  {
    sub_1C32C20(&FriendWarningDialog_CallbackFunc_TypeInfo);
    byte_4C3265C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (FriendWarningDialog_CallbackFunc_c *)v8->klass != FriendWarningDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendWarningDialog_o *)sub_1C3313C(v8);
  FriendWarningDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *FriendWarningDialog__get_closeBtnPath(FriendWarningDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C32662 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_4649/*"ConfirmWindow/CloseButton"*/);
    byte_4C32662 = 1;
  }
  return (System_String_o *)StringLiteral_4649/*"ConfirmWindow/CloseButton"*/;
}


void FriendWarningDialog__remove_callbackFunc(
        FriendWarningDialog_o *this,
        FriendWarningDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct FriendWarningDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct FriendWarningDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendWarningDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C3265D & 1) == 0 )
  {
    sub_1C32C20(&FriendWarningDialog_CallbackFunc_TypeInfo);
    byte_4C3265D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (FriendWarningDialog_CallbackFunc_c *)v8->klass != FriendWarningDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendWarningDialog_o *)sub_1C3313C(v8);
  FriendWarningDialog__Init(v11, v12);
}


void FriendWarningDialog_CallbackFunc___ctor(
        FriendWarningDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6F834;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6F7EC;
}


System_IAsyncResult_o *FriendWarningDialog_CallbackFunc__BeginInvoke(
        FriendWarningDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = result;
  if ( (byte_4C32664 & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    byte_4C32664 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void FriendWarningDialog_CallbackFunc__EndInvoke(
        FriendWarningDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void FriendWarningDialog_CallbackFunc__Invoke(
        FriendWarningDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}