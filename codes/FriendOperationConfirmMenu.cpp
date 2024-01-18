void __fastcall FriendOperationConfirmMenu___ctor(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_418A88A & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418A88A = 1;
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    FriendOperationConfirmMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall FriendOperationConfirmMenu__Close(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendOperationConfirmMenu__Close_30394860(this, 0LL, v2);
}


void __fastcall FriendOperationConfirmMenu__Close_30394860(
        FriendOperationConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_418A886 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_FriendOperationConfirmMenu_EndClose__, v10);
    byte_418A886 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendOperationConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_418A884 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418A884 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.cancelLabel) == 0LL) )
  {
    sub_B2C434(messageLabel, method);
  }
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendOperationConfirmMenu__OnClickCancel(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_418A888 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A888 = 1;
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

  if ( (byte_418A887 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A887 = 1;
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


// local variable allocation has failed, the output may be wrong!
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v36; // x1
  UILabel_o *messageLabel; // x21
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  __int64 *v40; // x8
  UILabel_o *v41; // x21
  UILabel_o *v42; // x20
  UILabel_o *v43; // x21
  UILabel_o *v44; // x20
  UILabel_o *v45; // x21
  UILabel_o *v46; // x20
  UILabel_o *v47; // x21
  UILabel_o *v48; // x20
  UILabel_o *v49; // x21
  UILabel_o *v50; // x20
  UILabel_o *v51; // x21
  UILabel_o *v52; // x20
  System_Action_o *v53; // x20

  if ( (byte_418A885 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_FriendOperationConfirmMenu_EndOpen__, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_6494/*"FRIEND_REMOVE_CANCEL"*/, v14);
    sub_B2C35C(&StringLiteral_6456/*"FRIEND_ACCEPT_CANCEL"*/, v15);
    sub_B2C35C(&StringLiteral_6496/*"FRIEND_REMOVE_MESSAGE"*/, v16);
    sub_B2C35C(&StringLiteral_6493/*"FRIEND_REJECT_MESSAGE"*/, v17);
    sub_B2C35C(&StringLiteral_6410/*"FOLLOW_REMOVE_DECIDE"*/, v18);
    sub_B2C35C(&StringLiteral_6458/*"FRIEND_ACCEPT_MESSAGE"*/, v19);
    sub_B2C35C(&StringLiteral_6492/*"FRIEND_REJECT_DECIDE"*/, v20);
    sub_B2C35C(&StringLiteral_6457/*"FRIEND_ACCEPT_DECIDE"*/, v21);
    sub_B2C35C(&StringLiteral_6462/*"FRIEND_CANCEL_MESSAGE"*/, v22);
    sub_B2C35C(&StringLiteral_6481/*"FRIEND_OFFER_CANCEL"*/, v23);
    sub_B2C35C(&StringLiteral_6411/*"FOLLOW_REMOVE_MESSAGE"*/, v24);
    sub_B2C35C(&StringLiteral_6460/*"FRIEND_CANCEL_CANCEL"*/, v25);
    sub_B2C35C(&StringLiteral_6495/*"FRIEND_REMOVE_DECIDE"*/, v26);
    sub_B2C35C(&StringLiteral_6406/*"FOLLOW_OFFER_CANCEL"*/, v27);
    sub_B2C35C(&StringLiteral_6409/*"FOLLOW_REMOVE_CANCEL"*/, v28);
    sub_B2C35C(&StringLiteral_6482/*"FRIEND_OFFER_DECIDE"*/, v29);
    sub_B2C35C(&StringLiteral_6407/*"FOLLOW_OFFER_DECIDE"*/, v30);
    sub_B2C35C(&StringLiteral_6408/*"FOLLOW_OFFER_MESSAGE"*/, v31);
    sub_B2C35C(&StringLiteral_6483/*"FRIEND_OFFER_MESSAGE"*/, v32);
    sub_B2C35C(&StringLiteral_6461/*"FRIEND_CANCEL_DECIDE"*/, v33);
    sub_B2C35C(&StringLiteral_6491/*"FRIEND_REJECT_CANCEL"*/, v34);
    byte_418A885 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
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
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6483/*"FRIEND_OFFER_MESSAGE"*/, 0LL);
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
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6482/*"FRIEND_OFFER_DECIDE"*/, 0LL);
        if ( !decideLabel )
          goto LABEL_58;
        UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v40 = &StringLiteral_6481/*"FRIEND_OFFER_CANCEL"*/;
        break;
      case 2:
        v41 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6458/*"FRIEND_ACCEPT_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_58;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v41 )
          goto LABEL_58;
        UILabel__set_text(v41, (System_String_o *)gameObject, 0LL);
        v42 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6457/*"FRIEND_ACCEPT_DECIDE"*/, 0LL);
        if ( !v42 )
          goto LABEL_58;
        UILabel__set_text(v42, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v40 = &StringLiteral_6456/*"FRIEND_ACCEPT_CANCEL"*/;
        break;
      case 3:
        v43 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6493/*"FRIEND_REJECT_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_58;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v43 )
          goto LABEL_58;
        UILabel__set_text(v43, (System_String_o *)gameObject, 0LL);
        v44 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6492/*"FRIEND_REJECT_DECIDE"*/, 0LL);
        if ( !v44 )
          goto LABEL_58;
        UILabel__set_text(v44, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v40 = &StringLiteral_6491/*"FRIEND_REJECT_CANCEL"*/;
        break;
      case 4:
        v45 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6462/*"FRIEND_CANCEL_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_58;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v45 )
          goto LABEL_58;
        UILabel__set_text(v45, (System_String_o *)gameObject, 0LL);
        v46 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6461/*"FRIEND_CANCEL_DECIDE"*/, 0LL);
        if ( !v46 )
          goto LABEL_58;
        UILabel__set_text(v46, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v40 = &StringLiteral_6460/*"FRIEND_CANCEL_CANCEL"*/;
        break;
      case 5:
        v47 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6496/*"FRIEND_REMOVE_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_58;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v47 )
          goto LABEL_58;
        UILabel__set_text(v47, (System_String_o *)gameObject, 0LL);
        v48 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6495/*"FRIEND_REMOVE_DECIDE"*/, 0LL);
        if ( !v48 )
          goto LABEL_58;
        UILabel__set_text(v48, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v40 = &StringLiteral_6494/*"FRIEND_REMOVE_CANCEL"*/;
        break;
      case 6:
        v49 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6408/*"FOLLOW_OFFER_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_58;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v49 )
          goto LABEL_58;
        UILabel__set_text(v49, (System_String_o *)gameObject, 0LL);
        v50 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6407/*"FOLLOW_OFFER_DECIDE"*/, 0LL);
        if ( !v50 )
          goto LABEL_58;
        UILabel__set_text(v50, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v40 = &StringLiteral_6406/*"FOLLOW_OFFER_CANCEL"*/;
        break;
      case 7:
        v51 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6411/*"FOLLOW_REMOVE_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_58;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0LL);
        if ( !v51 )
          goto LABEL_58;
        UILabel__set_text(v51, (System_String_o *)gameObject, 0LL);
        v52 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6410/*"FOLLOW_REMOVE_DECIDE"*/, 0LL);
        if ( !v52 )
          goto LABEL_58;
        UILabel__set_text(v52, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v40 = &StringLiteral_6409/*"FOLLOW_REMOVE_CANCEL"*/;
        break;
      default:
        goto LABEL_57;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v40, 0LL);
    if ( !cancelLabel )
LABEL_58:
      sub_B2C434(gameObject, v36);
    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
LABEL_57:
    this->fields.state = 1;
    v53 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v53, (Il2CppObject *)this, Method_FriendOperationConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v53, 0, 0LL);
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

  if ( (byte_418A882 & 1) == 0 )
  {
    sub_B2C35C(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_418A882 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  FriendOperationConfirmMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall FriendOperationConfirmMenu__get_closeBtnPath(
        FriendOperationConfirmMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_418A889 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_4220/*"ConfirmWindow/CancelButton"*/, method);
    byte_418A889 = 1;
  }
  return (System_String_o *)StringLiteral_4220/*"ConfirmWindow/CancelButton"*/;
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

  if ( (byte_418A883 & 1) == 0 )
  {
    sub_B2C35C(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_418A883 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_41841DE & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_41841DE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall FriendOperationConfirmMenu_CallbackFunc__EndInvoke(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
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
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
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
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
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
            v16 = sub_AC5258(v21, class_0, v10, v12);
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