void __fastcall FriendOperationConfirmMenu___ctor(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A564D7 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A564D7 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendOperationConfirmMenu__Callback(
        FriendOperationConfirmMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  struct FriendOperationConfirmMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct FriendOperationConfirmMenu_CallbackFunc_o *v4; // x20
  struct FriendOperationConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1B88554(p_callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall FriendOperationConfirmMenu__Close(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendOperationConfirmMenu__Close_30875868(this, 0LL, v2);
}


void __fastcall FriendOperationConfirmMenu__Close_30875868(
        FriendOperationConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4A564D3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FriendOperationConfirmMenu_EndClose__);
    byte_4A564D3 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FriendOperationConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall FriendOperationConfirmMenu__EndClose(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
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
    *p_closeCallbackFunc = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall FriendOperationConfirmMenu__EndOpen(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall FriendOperationConfirmMenu__Init(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_4A564D1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A564D1 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.cancelLabel) == 0LL) )
  {
    sub_1B8880C(messageLabel, method);
  }
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendOperationConfirmMenu__OnClickCancel(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A564D5 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendOperationConfirmMenu_OnClickCancel__);
    byte_4A564D5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendOperationConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_FriendOperationConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    FriendOperationConfirmMenu__Callback(this, 0, v5);
  }
}


void __fastcall FriendOperationConfirmMenu__OnClickDecide(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A564D4 & 1) == 0 )
  {
    sub_1B885B0(&Method_FriendOperationConfirmMenu_OnClickDecide__);
    byte_4A564D4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendOperationConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_FriendOperationConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8();
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    FriendOperationConfirmMenu__Callback(this, 1, v5);
  }
}


void __fastcall FriendOperationConfirmMenu__Open(
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

  if ( (byte_4A564D2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FriendOperationConfirmMenu_EndOpen__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6528/*"FRIEND_REMOVE_CANCEL"*/);
    sub_1B885B0(&StringLiteral_6490/*"FRIEND_ACCEPT_CANCEL"*/);
    sub_1B885B0(&StringLiteral_6530/*"FRIEND_REMOVE_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_6527/*"FRIEND_REJECT_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_6443/*"FOLLOW_REMOVE_DECIDE"*/);
    sub_1B885B0(&StringLiteral_6492/*"FRIEND_ACCEPT_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_6526/*"FRIEND_REJECT_DECIDE"*/);
    sub_1B885B0(&StringLiteral_6491/*"FRIEND_ACCEPT_DECIDE"*/);
    sub_1B885B0(&StringLiteral_6496/*"FRIEND_CANCEL_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_6515/*"FRIEND_OFFER_CANCEL"*/);
    sub_1B885B0(&StringLiteral_6444/*"FOLLOW_REMOVE_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_6494/*"FRIEND_CANCEL_CANCEL"*/);
    sub_1B885B0(&StringLiteral_6529/*"FRIEND_REMOVE_DECIDE"*/);
    sub_1B885B0(&StringLiteral_6439/*"FOLLOW_OFFER_CANCEL"*/);
    sub_1B885B0(&StringLiteral_6442/*"FOLLOW_REMOVE_CANCEL"*/);
    sub_1B885B0(&StringLiteral_6516/*"FRIEND_OFFER_DECIDE"*/);
    sub_1B885B0(&StringLiteral_6440/*"FOLLOW_OFFER_DECIDE"*/);
    sub_1B885B0(&StringLiteral_6441/*"FOLLOW_OFFER_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_6517/*"FRIEND_OFFER_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_6495/*"FRIEND_CANCEL_DECIDE"*/);
    sub_1B885B0(&StringLiteral_6525/*"FRIEND_REJECT_CANCEL"*/);
    byte_4A564D2 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1B88554(&this->fields.callbackFunc, callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    switch ( kind )
    {
      case 1:
        messageLabel = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6517/*"FRIEND_OFFER_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_51;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !messageLabel )
          goto LABEL_51;
        UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
        decideLabel = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6516/*"FRIEND_OFFER_DECIDE"*/, 0LL);
        if ( !decideLabel )
          goto LABEL_51;
        UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v14 = &StringLiteral_6515/*"FRIEND_OFFER_CANCEL"*/;
        break;
      case 2:
        v15 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6492/*"FRIEND_ACCEPT_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_51;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v15 )
          goto LABEL_51;
        UILabel__set_text(v15, (System_String_o *)gameObject, 0LL);
        v16 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6491/*"FRIEND_ACCEPT_DECIDE"*/, 0LL);
        if ( !v16 )
          goto LABEL_51;
        UILabel__set_text(v16, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v14 = &StringLiteral_6490/*"FRIEND_ACCEPT_CANCEL"*/;
        break;
      case 3:
        v17 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6527/*"FRIEND_REJECT_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_51;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v17 )
          goto LABEL_51;
        UILabel__set_text(v17, (System_String_o *)gameObject, 0LL);
        v18 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6526/*"FRIEND_REJECT_DECIDE"*/, 0LL);
        if ( !v18 )
          goto LABEL_51;
        UILabel__set_text(v18, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v14 = &StringLiteral_6525/*"FRIEND_REJECT_CANCEL"*/;
        break;
      case 4:
        v19 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6496/*"FRIEND_CANCEL_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_51;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v19 )
          goto LABEL_51;
        UILabel__set_text(v19, (System_String_o *)gameObject, 0LL);
        v20 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6495/*"FRIEND_CANCEL_DECIDE"*/, 0LL);
        if ( !v20 )
          goto LABEL_51;
        UILabel__set_text(v20, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v14 = &StringLiteral_6494/*"FRIEND_CANCEL_CANCEL"*/;
        break;
      case 5:
        v21 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6530/*"FRIEND_REMOVE_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_51;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v21 )
          goto LABEL_51;
        UILabel__set_text(v21, (System_String_o *)gameObject, 0LL);
        v22 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6529/*"FRIEND_REMOVE_DECIDE"*/, 0LL);
        if ( !v22 )
          goto LABEL_51;
        UILabel__set_text(v22, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v14 = &StringLiteral_6528/*"FRIEND_REMOVE_CANCEL"*/;
        break;
      case 6:
        v23 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6441/*"FOLLOW_OFFER_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_51;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v23 )
          goto LABEL_51;
        UILabel__set_text(v23, (System_String_o *)gameObject, 0LL);
        v24 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6440/*"FOLLOW_OFFER_DECIDE"*/, 0LL);
        if ( !v24 )
          goto LABEL_51;
        UILabel__set_text(v24, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v14 = &StringLiteral_6439/*"FOLLOW_OFFER_CANCEL"*/;
        break;
      case 7:
        v25 = this->fields.messageLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6444/*"FOLLOW_REMOVE_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_51;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v25 )
          goto LABEL_51;
        UILabel__set_text(v25, (System_String_o *)gameObject, 0LL);
        v26 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6443/*"FOLLOW_REMOVE_DECIDE"*/, 0LL);
        if ( !v26 )
          goto LABEL_51;
        UILabel__set_text(v26, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v14 = &StringLiteral_6442/*"FOLLOW_REMOVE_CANCEL"*/;
        break;
      default:
        goto LABEL_50;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v14, 0LL);
    if ( !cancelLabel )
LABEL_51:
      sub_1B8880C(gameObject, v10);
    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
LABEL_50:
    this->fields.state = 1;
    v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_FriendOperationConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0LL);
  }
}


void __fastcall FriendOperationConfirmMenu__add_callbackFunc(
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

  if ( (byte_4A564CF & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    byte_4A564CF = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (FriendOperationConfirmMenu_CallbackFunc_c *)v8->klass != FriendOperationConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendOperationConfirmMenu_o *)sub_1B88ACC(v8);
  FriendOperationConfirmMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall FriendOperationConfirmMenu__get_closeBtnPath(
        FriendOperationConfirmMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A564D6 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4677/*"ConfirmWindow/CancelButton"*/);
    byte_4A564D6 = 1;
  }
  return (System_String_o *)StringLiteral_4677/*"ConfirmWindow/CancelButton"*/;
}


void __fastcall FriendOperationConfirmMenu__remove_callbackFunc(
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

  if ( (byte_4A564D0 & 1) == 0 )
  {
    sub_1B885B0(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    byte_4A564D0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (FriendOperationConfirmMenu_CallbackFunc_c *)v8->klass != FriendOperationConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FriendOperationConfirmMenu_o *)sub_1B88ACC(v8);
  FriendOperationConfirmMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationConfirmMenu_CallbackFunc___ctor(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19C71C0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C7178;
}


System_IAsyncResult_o *__fastcall FriendOperationConfirmMenu_CallbackFunc__BeginInvoke(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4A564D8 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A564D8 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall FriendOperationConfirmMenu_CallbackFunc__EndInvoke(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall FriendOperationConfirmMenu_CallbackFunc__Invoke(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}