void FriendWarningDialog___ctor(FriendWarningDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CC2019 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC2019 = 1;
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
    sub_1C71354(p_callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v4->fields.invoke_impl)(
      v4->fields.method_code,
      result,
      v4->fields.method);
  }
}


void FriendWarningDialog__Close(FriendWarningDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendWarningDialog__Close_33067440(this, 0, v2);
}


void FriendWarningDialog__Close_33067440(
        FriendWarningDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4CC2016 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_FriendWarningDialog_EndClose__);
    byte_4CC2016 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C71354(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
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
    sub_1C71354(p_closeCallbackFunc, 0);
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

  if ( (byte_4CC2014 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC2014 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (messageLabel = this->fields.closeLabel) == 0) )
  {
    sub_1C71608(messageLabel, method);
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

  if ( (byte_4CC2017 & 1) == 0 )
  {
    sub_1C713B0(&Method_FriendWarningDialog_OnClickClose__);
    byte_4CC2017 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendWarningDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_FriendWarningDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_FriendWarningDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
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
  __int64 v8; // x1
  UserGameEntity_o *SelfUserGame; // x20
  OtherUserGameEntity_array *List; // x0
  UILabel_o *messageLabel; // x21
  OtherUserGameEntity_array *v12; // x23
  System_String_o *v13; // x22
  Il2CppObject *v14; // x23
  Il2CppObject *v15; // x0
  UILabel_o *closeLabel; // x20
  __int64 *v17; // x8
  UILabel_o *v18; // x20
  UILabel_o *v19; // x20
  UILabel_o *v20; // x20
  UILabel_o *v21; // x20
  UILabel_o *v22; // x20
  Il2CppObject *MasterData_object; // x0
  UILabel_o *v24; // x20
  UserFollowMaster_o *v25; // x22
  System_String_o *v26; // x21
  Il2CppObject *v27; // x22
  BalanceConfig_c *v28; // x8
  Il2CppObject *v29; // x0
  System_Action_o *v30; // x20
  int32_t friendKeep; // [xsp+8h] [xbp-48h] BYREF
  int32_t max_length; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CC2015 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserFollowMaster___);
    sub_1C713B0(&Method_FriendWarningDialog_EndOpen__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_6532/*"FRIEND_NO_FRIEND_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_6536/*"FRIEND_NO_OFFER_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_6531/*"FRIEND_NO_FRIEND_CLOSE"*/);
    sub_1C713B0(&StringLiteral_6539/*"FRIEND_NO_STRING_CLOSE"*/);
    sub_1C713B0(&StringLiteral_6529/*"FRIEND_MAX_FRIEND_CLOSE"*/);
    sub_1C713B0(&StringLiteral_6540/*"FRIEND_NO_STRING_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_6530/*"FRIEND_MAX_FRIEND_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_6533/*"FRIEND_NO_OFFERED_CLOSE"*/);
    sub_1C713B0(&StringLiteral_6462/*"FOLLOW_MAX_CLOSE"*/);
    sub_1C713B0(&StringLiteral_6535/*"FRIEND_NO_OFFER_CLOSE"*/);
    sub_1C713B0(&StringLiteral_6538/*"FRIEND_NO_SEARCH_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_6537/*"FRIEND_NO_SEARCH_CLOSE"*/);
    sub_1C713B0(&StringLiteral_6463/*"FOLLOW_MAX_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_6534/*"FRIEND_NO_OFFERED_MESSAGE"*/);
    byte_4CC2015 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C71354(&this->fields.callbackFunc, callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    switch ( kind )
    {
      case 1:
        SelfUserGame = UserGameMaster__getSelfUserGame(0);
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_46;
        gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_TblFriendMaster___);
        if ( !gameObject )
          goto LABEL_46;
        List = TblFriendMaster__GetList((TblFriendMaster_o *)gameObject, 3, 0);
        messageLabel = this->fields.messageLabel;
        v12 = List;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6530/*"FRIEND_MAX_FRIEND_MESSAGE"*/, 0);
        if ( !v12 )
          goto LABEL_46;
        v13 = (System_String_o *)gameObject;
        max_length = v12->max_length;
        gameObject = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &max_length);
        if ( !SelfUserGame )
          goto LABEL_46;
        v14 = (Il2CppObject *)gameObject;
        friendKeep = SelfUserGame->fields.friendKeep;
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_64073032(v13, v14, v15, 0);
        if ( !messageLabel )
          goto LABEL_46;
        UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
        closeLabel = this->fields.closeLabel;
        v17 = &StringLiteral_6529/*"FRIEND_MAX_FRIEND_CLOSE"*/;
        break;
      case 2:
        v18 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6538/*"FRIEND_NO_SEARCH_MESSAGE"*/, 0);
        if ( !v18 )
          goto LABEL_46;
        UILabel__set_text(v18, (System_String_o *)gameObject, 0);
        closeLabel = this->fields.closeLabel;
        v17 = &StringLiteral_6537/*"FRIEND_NO_SEARCH_CLOSE"*/;
        break;
      case 3:
        v19 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6540/*"FRIEND_NO_STRING_MESSAGE"*/, 0);
        if ( !v19 )
          goto LABEL_46;
        UILabel__set_text(v19, (System_String_o *)gameObject, 0);
        closeLabel = this->fields.closeLabel;
        v17 = &StringLiteral_6539/*"FRIEND_NO_STRING_CLOSE"*/;
        break;
      case 4:
        v20 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6536/*"FRIEND_NO_OFFER_MESSAGE"*/, 0);
        if ( !v20 )
          goto LABEL_46;
        UILabel__set_text(v20, (System_String_o *)gameObject, 0);
        closeLabel = this->fields.closeLabel;
        v17 = &StringLiteral_6535/*"FRIEND_NO_OFFER_CLOSE"*/;
        break;
      case 5:
        v21 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6534/*"FRIEND_NO_OFFERED_MESSAGE"*/, 0);
        if ( !v21 )
          goto LABEL_46;
        UILabel__set_text(v21, (System_String_o *)gameObject, 0);
        closeLabel = this->fields.closeLabel;
        v17 = &StringLiteral_6533/*"FRIEND_NO_OFFERED_CLOSE"*/;
        break;
      case 6:
        v22 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6532/*"FRIEND_NO_FRIEND_MESSAGE"*/, 0);
        if ( !v22 )
          goto LABEL_46;
        UILabel__set_text(v22, (System_String_o *)gameObject, 0);
        closeLabel = this->fields.closeLabel;
        v17 = &StringLiteral_6531/*"FRIEND_NO_FRIEND_CLOSE"*/;
        break;
      case 7:
        gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_46;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserFollowMaster___);
        v24 = this->fields.messageLabel;
        v25 = (UserFollowMaster_o *)MasterData_object;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6463/*"FOLLOW_MAX_MESSAGE"*/, 0);
        if ( !v25 )
          goto LABEL_46;
        v26 = (System_String_o *)gameObject;
        max_length = UserFollowMaster__GetFollowSum(v25, 0);
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &max_length);
        v28 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v28 = BalanceConfig_TypeInfo;
        }
        friendKeep = v28->static_fields->FollowNum;
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &friendKeep);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_64073032(v26, v27, v29, 0);
        if ( !v24 )
          goto LABEL_46;
        UILabel__set_text(v24, (System_String_o *)gameObject, 0);
        closeLabel = this->fields.closeLabel;
        v17 = &StringLiteral_6462/*"FOLLOW_MAX_CLOSE"*/;
        break;
      default:
        goto LABEL_44;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v17, 0);
    if ( !closeLabel )
LABEL_46:
      sub_1C71608(gameObject, v8);
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
LABEL_44:
    this->fields.state = 1;
    v30 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_FriendWarningDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v30, 0, 0, 0);
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

  if ( (byte_4CC2012 & 1) == 0 )
  {
    sub_1C713B0(&FriendWarningDialog_CallbackFunc_TypeInfo);
    byte_4CC2012 = 1;
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
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendWarningDialog_o *)sub_1C719A4(v8);
  FriendWarningDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *FriendWarningDialog__get_closeBtnPath(FriendWarningDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CC2018 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_4642/*"ConfirmWindow/CloseButton"*/);
    byte_4CC2018 = 1;
  }
  return (System_String_o *)StringLiteral_4642/*"ConfirmWindow/CloseButton"*/;
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

  if ( (byte_4CC2013 & 1) == 0 )
  {
    sub_1C713B0(&FriendWarningDialog_CallbackFunc_TypeInfo);
    byte_4CC2013 = 1;
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
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendWarningDialog_o *)sub_1C719A4(v8);
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
  sub_1C71354(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A9EE8C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9EE44;
}


System_IAsyncResult_o *FriendWarningDialog_CallbackFunc__BeginInvoke(
        FriendWarningDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4CC201A & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    byte_4CC201A = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void FriendWarningDialog_CallbackFunc__EndInvoke(
        FriendWarningDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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