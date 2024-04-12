void __fastcall FriendOperationConfirmMenu___ctor(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_42B31EB & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B31EB = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendOperationConfirmMenu__Callback(
        FriendOperationConfirmMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  FriendOperationConfirmMenu_CallbackFunc_o *v9; // x19
  struct FriendOperationConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    FriendOperationConfirmMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall FriendOperationConfirmMenu__Close(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendOperationConfirmMenu__Close_30797428(this, 0LL, v2);
}


void __fastcall FriendOperationConfirmMenu__Close_30797428(
        FriendOperationConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_42B31E7 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_FriendOperationConfirmMenu_EndClose__);
    byte_42B31E7 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_FriendOperationConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall FriendOperationConfirmMenu__EndClose(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  FriendOperationConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B52920(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall FriendOperationConfirmMenu__EndOpen(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall FriendOperationConfirmMenu__Init(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_42B31E5 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B31E5 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.cancelLabel) == 0LL) )
  {
    sub_B52A5C(messageLabel, method);
  }
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendOperationConfirmMenu__OnClickCancel(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42B31E9 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B31E9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    FriendOperationConfirmMenu__Callback(this, 0, v3);
  }
}


void __fastcall FriendOperationConfirmMenu__OnClickDecide(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42B31E8 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B31E8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    FriendOperationConfirmMenu__Callback(this, 1, v3);
  }
}


void __fastcall FriendOperationConfirmMenu__Open(
        FriendOperationConfirmMenu_o *this,
        int32_t kind,
        OtherUserGameEntity_o *entity,
        FriendOperationConfirmMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UILabel_o *messageLabel; // x21
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  __int64 *v17; // x8
  UILabel_o *v18; // x21
  UILabel_o *v19; // x20
  UILabel_o *v20; // x21
  UILabel_o *v21; // x20
  UILabel_o *v22; // x21
  UILabel_o *v23; // x20
  UILabel_o *v24; // x21
  UILabel_o *v25; // x20
  UILabel_o *v26; // x21
  UILabel_o *v27; // x20
  UILabel_o *v28; // x21
  UILabel_o *v29; // x20
  System_Action_o *v30; // x20

  if ( (byte_42B31E6 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_FriendOperationConfirmMenu_EndOpen__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_6537/*"FRIEND_REMOVE_CANCEL"*/);
    sub_B52984(&StringLiteral_6499/*"FRIEND_ACCEPT_CANCEL"*/);
    sub_B52984(&StringLiteral_6539/*"FRIEND_REMOVE_MESSAGE"*/);
    sub_B52984(&StringLiteral_6536/*"FRIEND_REJECT_MESSAGE"*/);
    sub_B52984(&StringLiteral_6453/*"FOLLOW_REMOVE_DECIDE"*/);
    sub_B52984(&StringLiteral_6501/*"FRIEND_ACCEPT_MESSAGE"*/);
    sub_B52984(&StringLiteral_6535/*"FRIEND_REJECT_DECIDE"*/);
    sub_B52984(&StringLiteral_6500/*"FRIEND_ACCEPT_DECIDE"*/);
    sub_B52984(&StringLiteral_6505/*"FRIEND_CANCEL_MESSAGE"*/);
    sub_B52984(&StringLiteral_6524/*"FRIEND_OFFER_CANCEL"*/);
    sub_B52984(&StringLiteral_6454/*"FOLLOW_REMOVE_MESSAGE"*/);
    sub_B52984(&StringLiteral_6503/*"FRIEND_CANCEL_CANCEL"*/);
    sub_B52984(&StringLiteral_6538/*"FRIEND_REMOVE_DECIDE"*/);
    sub_B52984(&StringLiteral_6449/*"FOLLOW_OFFER_CANCEL"*/);
    sub_B52984(&StringLiteral_6452/*"FOLLOW_REMOVE_CANCEL"*/);
    sub_B52984(&StringLiteral_6525/*"FRIEND_OFFER_DECIDE"*/);
    sub_B52984(&StringLiteral_6450/*"FOLLOW_OFFER_DECIDE"*/);
    sub_B52984(&StringLiteral_6451/*"FOLLOW_OFFER_MESSAGE"*/);
    sub_B52984(&StringLiteral_6526/*"FRIEND_OFFER_MESSAGE"*/);
    sub_B52984(&StringLiteral_6504/*"FRIEND_CANCEL_DECIDE"*/);
    sub_B52984(&StringLiteral_6534/*"FRIEND_REJECT_CANCEL"*/);
    byte_42B31E6 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)entity,
      (System_String_array **)callback,
      (System_Boolean_array **)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_58;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    switch ( kind )
    {
      case 1:
        messageLabel = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6526/*"FRIEND_OFFER_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_58;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !messageLabel )
          goto LABEL_58;
        UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
        decideLabel = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6525/*"FRIEND_OFFER_DECIDE"*/, 0LL);
        if ( !decideLabel )
          goto LABEL_58;
        UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v17 = &StringLiteral_6524/*"FRIEND_OFFER_CANCEL"*/;
        break;
      case 2:
        v18 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6501/*"FRIEND_ACCEPT_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_58;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v18 )
          goto LABEL_58;
        UILabel__set_text(v18, (System_String_o *)gameObject, 0LL);
        v19 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6500/*"FRIEND_ACCEPT_DECIDE"*/, 0LL);
        if ( !v19 )
          goto LABEL_58;
        UILabel__set_text(v19, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v17 = &StringLiteral_6499/*"FRIEND_ACCEPT_CANCEL"*/;
        break;
      case 3:
        v20 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6536/*"FRIEND_REJECT_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_58;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v20 )
          goto LABEL_58;
        UILabel__set_text(v20, (System_String_o *)gameObject, 0LL);
        v21 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6535/*"FRIEND_REJECT_DECIDE"*/, 0LL);
        if ( !v21 )
          goto LABEL_58;
        UILabel__set_text(v21, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v17 = &StringLiteral_6534/*"FRIEND_REJECT_CANCEL"*/;
        break;
      case 4:
        v22 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6505/*"FRIEND_CANCEL_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_58;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v22 )
          goto LABEL_58;
        UILabel__set_text(v22, (System_String_o *)gameObject, 0LL);
        v23 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6504/*"FRIEND_CANCEL_DECIDE"*/, 0LL);
        if ( !v23 )
          goto LABEL_58;
        UILabel__set_text(v23, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v17 = &StringLiteral_6503/*"FRIEND_CANCEL_CANCEL"*/;
        break;
      case 5:
        v24 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6539/*"FRIEND_REMOVE_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_58;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v24 )
          goto LABEL_58;
        UILabel__set_text(v24, (System_String_o *)gameObject, 0LL);
        v25 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6538/*"FRIEND_REMOVE_DECIDE"*/, 0LL);
        if ( !v25 )
          goto LABEL_58;
        UILabel__set_text(v25, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v17 = &StringLiteral_6537/*"FRIEND_REMOVE_CANCEL"*/;
        break;
      case 6:
        v26 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6451/*"FOLLOW_OFFER_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_58;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v26 )
          goto LABEL_58;
        UILabel__set_text(v26, (System_String_o *)gameObject, 0LL);
        v27 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6450/*"FOLLOW_OFFER_DECIDE"*/, 0LL);
        if ( !v27 )
          goto LABEL_58;
        UILabel__set_text(v27, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v17 = &StringLiteral_6449/*"FOLLOW_OFFER_CANCEL"*/;
        break;
      case 7:
        v28 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6454/*"FOLLOW_REMOVE_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_58;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v28 )
          goto LABEL_58;
        UILabel__set_text(v28, (System_String_o *)gameObject, 0LL);
        v29 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6453/*"FOLLOW_REMOVE_DECIDE"*/, 0LL);
        if ( !v29 )
          goto LABEL_58;
        UILabel__set_text(v29, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v17 = &StringLiteral_6452/*"FOLLOW_REMOVE_CANCEL"*/;
        break;
      default:
        goto LABEL_57;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v17, 0LL);
    if ( !cancelLabel )
LABEL_58:
      sub_B52A5C(gameObject, v13);
    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
LABEL_57:
    this->fields.state = 1;
    v30 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_FriendOperationConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v30, 0, 0LL);
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

  if ( (byte_42B31E3 & 1) == 0 )
  {
    sub_B52984(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    byte_42B31E3 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
  FriendOperationConfirmMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall FriendOperationConfirmMenu__get_closeBtnPath(
        FriendOperationConfirmMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B31EA & 1) == 0 )
  {
    sub_B52984(&StringLiteral_4258/*"ConfirmWindow/CancelButton"*/);
    byte_42B31EA = 1;
  }
  return (System_String_o *)StringLiteral_4258/*"ConfirmWindow/CancelButton"*/;
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

  if ( (byte_42B31E4 & 1) == 0 )
  {
    sub_B52984(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    byte_42B31E4 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall FriendOperationConfirmMenu_CallbackFunc__BeginInvoke(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_42ACE29 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42ACE29 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall FriendOperationConfirmMenu_CallbackFunc__EndInvoke(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationConfirmMenu_CallbackFunc__Invoke(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  FriendOperationConfirmMenu_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  FriendOperationConfirmMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  FriendOperationConfirmMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (FriendOperationConfirmMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AEB880(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}