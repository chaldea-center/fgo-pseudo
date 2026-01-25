void FriendOperationConfirmMenu___ctor(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CE90FC & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CE90FC = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void FriendOperationConfirmMenu__Callback(FriendOperationConfirmMenu_o *this, bool result, const MethodInfo *method)
{
  struct FriendOperationConfirmMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct FriendOperationConfirmMenu_CallbackFunc_o *v4; // x20
  struct FriendOperationConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0;
    sub_1C7BA8C(p_callbackFunc, 0);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v4->fields.invoke_impl)(
      v4->fields.method_code,
      result,
      v4->fields.method);
  }
}


void FriendOperationConfirmMenu__Close(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendOperationConfirmMenu__Close_33147696(this, 0, v2);
}


void FriendOperationConfirmMenu__Close_33147696(
        FriendOperationConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4CE90F8 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_FriendOperationConfirmMenu_EndClose__);
    byte_4CE90F8 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C7BA8C(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendOperationConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void FriendOperationConfirmMenu__EndClose(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  FriendOperationConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C7BA8C(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void FriendOperationConfirmMenu__EndOpen(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void FriendOperationConfirmMenu__Init(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_4CE90F6 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE90F6 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (messageLabel = this->fields.decideLabel) == 0)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (messageLabel = this->fields.cancelLabel) == 0) )
  {
    sub_1C7BD40(messageLabel, method);
  }
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void FriendOperationConfirmMenu__OnClickCancel(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CE90FA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_FriendOperationConfirmMenu_OnClickCancel__);
    byte_4CE90FA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendOperationConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_FriendOperationConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_FriendOperationConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    FriendOperationConfirmMenu__Callback(this, 0, v5);
  }
}


void FriendOperationConfirmMenu__OnClickDecide(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CE90F9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_FriendOperationConfirmMenu_OnClickDecide__);
    byte_4CE90F9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendOperationConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_FriendOperationConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_FriendOperationConfirmMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    FriendOperationConfirmMenu__Callback(this, 1, v5);
  }
}


void FriendOperationConfirmMenu__Open(
        FriendOperationConfirmMenu_o *this,
        int32_t kind,
        OtherUserGameEntity_o *entity,
        FriendOperationConfirmMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UILabel_o *messageLabel; // x21
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  __int64 *v14; // x8
  UILabel_o *v15; // x21
  UILabel_o *v16; // x20
  UILabel_o *v17; // x21
  UILabel_o *v18; // x20
  UILabel_o *v19; // x21
  UILabel_o *v20; // x20
  UILabel_o *v21; // x21
  UILabel_o *v22; // x20
  UILabel_o *v23; // x21
  UILabel_o *v24; // x20
  UILabel_o *v25; // x21
  UILabel_o *v26; // x20
  System_Action_o *v27; // x20

  if ( (byte_4CE90F7 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_FriendOperationConfirmMenu_EndOpen__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_6568/*"FRIEND_REMOVE_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_6530/*"FRIEND_ACCEPT_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_6570/*"FRIEND_REMOVE_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_6567/*"FRIEND_REJECT_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_6483/*"FOLLOW_REMOVE_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_6532/*"FRIEND_ACCEPT_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_6566/*"FRIEND_REJECT_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_6531/*"FRIEND_ACCEPT_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_6536/*"FRIEND_CANCEL_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_6555/*"FRIEND_OFFER_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_6484/*"FOLLOW_REMOVE_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_6534/*"FRIEND_CANCEL_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_6569/*"FRIEND_REMOVE_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_6479/*"FOLLOW_OFFER_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_6482/*"FOLLOW_REMOVE_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_6556/*"FRIEND_OFFER_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_6480/*"FOLLOW_OFFER_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_6481/*"FOLLOW_OFFER_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_6557/*"FRIEND_OFFER_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_6535/*"FRIEND_CANCEL_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_6565/*"FRIEND_REJECT_CANCEL"*/);
    byte_4CE90F7 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C7BA8C(&this->fields.callbackFunc, callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    switch ( kind )
    {
      case 1:
        messageLabel = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6557/*"FRIEND_OFFER_MESSAGE"*/, 0);
        if ( !entity )
          goto LABEL_51;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0);
        if ( !messageLabel )
          goto LABEL_51;
        UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
        decideLabel = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6556/*"FRIEND_OFFER_DECIDE"*/, 0);
        if ( !decideLabel )
          goto LABEL_51;
        UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.cancelLabel;
        v14 = &StringLiteral_6555/*"FRIEND_OFFER_CANCEL"*/;
        break;
      case 2:
        v15 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6532/*"FRIEND_ACCEPT_MESSAGE"*/, 0);
        if ( !entity )
          goto LABEL_51;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0);
        if ( !v15 )
          goto LABEL_51;
        UILabel__set_text(v15, (System_String_o *)gameObject, 0);
        v16 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6531/*"FRIEND_ACCEPT_DECIDE"*/, 0);
        if ( !v16 )
          goto LABEL_51;
        UILabel__set_text(v16, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.cancelLabel;
        v14 = &StringLiteral_6530/*"FRIEND_ACCEPT_CANCEL"*/;
        break;
      case 3:
        v17 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6567/*"FRIEND_REJECT_MESSAGE"*/, 0);
        if ( !entity )
          goto LABEL_51;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0);
        if ( !v17 )
          goto LABEL_51;
        UILabel__set_text(v17, (System_String_o *)gameObject, 0);
        v18 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6566/*"FRIEND_REJECT_DECIDE"*/, 0);
        if ( !v18 )
          goto LABEL_51;
        UILabel__set_text(v18, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.cancelLabel;
        v14 = &StringLiteral_6565/*"FRIEND_REJECT_CANCEL"*/;
        break;
      case 4:
        v19 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6536/*"FRIEND_CANCEL_MESSAGE"*/, 0);
        if ( !entity )
          goto LABEL_51;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0);
        if ( !v19 )
          goto LABEL_51;
        UILabel__set_text(v19, (System_String_o *)gameObject, 0);
        v20 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6535/*"FRIEND_CANCEL_DECIDE"*/, 0);
        if ( !v20 )
          goto LABEL_51;
        UILabel__set_text(v20, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.cancelLabel;
        v14 = &StringLiteral_6534/*"FRIEND_CANCEL_CANCEL"*/;
        break;
      case 5:
        v21 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6570/*"FRIEND_REMOVE_MESSAGE"*/, 0);
        if ( !entity )
          goto LABEL_51;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0);
        if ( !v21 )
          goto LABEL_51;
        UILabel__set_text(v21, (System_String_o *)gameObject, 0);
        v22 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6569/*"FRIEND_REMOVE_DECIDE"*/, 0);
        if ( !v22 )
          goto LABEL_51;
        UILabel__set_text(v22, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.cancelLabel;
        v14 = &StringLiteral_6568/*"FRIEND_REMOVE_CANCEL"*/;
        break;
      case 6:
        v23 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6481/*"FOLLOW_OFFER_MESSAGE"*/, 0);
        if ( !entity )
          goto LABEL_51;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0);
        if ( !v23 )
          goto LABEL_51;
        UILabel__set_text(v23, (System_String_o *)gameObject, 0);
        v24 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6480/*"FOLLOW_OFFER_DECIDE"*/, 0);
        if ( !v24 )
          goto LABEL_51;
        UILabel__set_text(v24, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.cancelLabel;
        v14 = &StringLiteral_6479/*"FOLLOW_OFFER_CANCEL"*/;
        break;
      case 7:
        v25 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6484/*"FOLLOW_REMOVE_MESSAGE"*/, 0);
        if ( !entity )
          goto LABEL_51;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0);
        if ( !v25 )
          goto LABEL_51;
        UILabel__set_text(v25, (System_String_o *)gameObject, 0);
        v26 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6483/*"FOLLOW_REMOVE_DECIDE"*/, 0);
        if ( !v26 )
          goto LABEL_51;
        UILabel__set_text(v26, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.cancelLabel;
        v14 = &StringLiteral_6482/*"FOLLOW_REMOVE_CANCEL"*/;
        break;
      default:
        goto LABEL_50;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v14, 0);
    if ( !cancelLabel )
LABEL_51:
      sub_1C7BD40(gameObject, v10);
    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
LABEL_50:
    this->fields.state = 1;
    v27 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_FriendOperationConfirmMenu_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0, 0);
  }
}


void FriendOperationConfirmMenu__add_callbackFunc(
        FriendOperationConfirmMenu_o *this,
        FriendOperationConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct FriendOperationConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct FriendOperationConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendOperationConfirmMenu_o *v11; // x0
  FriendOperationConfirmMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CE90F4 & 1) == 0 )
  {
    sub_1C7BAE8(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    byte_4CE90F4 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (FriendOperationConfirmMenu_CallbackFunc_c *)v8->klass != FriendOperationConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendOperationConfirmMenu_o *)sub_1C7C0DC(v8);
  FriendOperationConfirmMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *FriendOperationConfirmMenu__get_closeBtnPath(
        FriendOperationConfirmMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CE90FB & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_4652/*"ConfirmWindow/CancelButton"*/);
    byte_4CE90FB = 1;
  }
  return (System_String_o *)StringLiteral_4652/*"ConfirmWindow/CancelButton"*/;
}


void FriendOperationConfirmMenu__remove_callbackFunc(
        FriendOperationConfirmMenu_o *this,
        FriendOperationConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct FriendOperationConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct FriendOperationConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  FriendOperationConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CE90F5 & 1) == 0 )
  {
    sub_1C7BAE8(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    byte_4CE90F5 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (FriendOperationConfirmMenu_CallbackFunc_c *)v8->klass != FriendOperationConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendOperationConfirmMenu_o *)sub_1C7C0DC(v8);
  FriendOperationConfirmMenu__Init(v11, v12);
}


void FriendOperationConfirmMenu_CallbackFunc___ctor(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
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
  sub_1C7BA8C(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA92C4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA927C;
}


System_IAsyncResult_o *FriendOperationConfirmMenu_CallbackFunc__BeginInvoke(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4CE90FD & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    byte_4CE90FD = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void FriendOperationConfirmMenu_CallbackFunc__EndInvoke(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void FriendOperationConfirmMenu_CallbackFunc__Invoke(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}