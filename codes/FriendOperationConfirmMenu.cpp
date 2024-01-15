void __fastcall FriendOperationConfirmMenu___ctor(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FD8DB & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FD8DB = 1;
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    FriendOperationConfirmMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall FriendOperationConfirmMenu__Close(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendOperationConfirmMenu__Close_31822388(this, 0LL, v2);
}


void __fastcall FriendOperationConfirmMenu__Close_31822388(
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FD8D7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_FriendOperationConfirmMenu_EndClose__, v10);
    byte_40FD8D7 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_FriendOperationConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  UILabel_o *decideLabel; // x0
  UILabel_o *cancelLabel; // x0

  if ( (byte_40FD8D5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FD8D5 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (decideLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(decideLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (cancelLabel = this->fields.cancelLabel) == 0LL) )
  {
    sub_B170D4();
  }
  UILabel__set_text(cancelLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendOperationConfirmMenu__OnClickCancel(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FD8D9 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD8D9 = 1;
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

  if ( (byte_40FD8D8 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FD8D8 = 1;
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
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  UILabel_o *messageLabel; // x21
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  UILabel_o *decideLabel; // x20
  System_String_o *v44; // x0
  UILabel_o *cancelLabel; // x20
  __int64 *v46; // x8
  UILabel_o *v47; // x21
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  UILabel_o *v50; // x20
  System_String_o *v51; // x0
  UILabel_o *v52; // x21
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  UILabel_o *v55; // x20
  System_String_o *v56; // x0
  UILabel_o *v57; // x21
  System_String_o *v58; // x0
  System_String_o *v59; // x0
  UILabel_o *v60; // x20
  System_String_o *v61; // x0
  UILabel_o *v62; // x21
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  UILabel_o *v65; // x20
  System_String_o *v66; // x0
  UILabel_o *v67; // x21
  System_String_o *v68; // x0
  System_String_o *v69; // x0
  UILabel_o *v70; // x20
  System_String_o *v71; // x0
  UILabel_o *v72; // x21
  System_String_o *v73; // x0
  System_String_o *v74; // x0
  UILabel_o *v75; // x20
  System_String_o *v76; // x0
  System_String_o *v77; // x0
  System_Action_o *v78; // x20

  if ( (byte_40FD8D6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_FriendOperationConfirmMenu_EndOpen__, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_6470/*"FRIEND_REMOVE_CANCEL"*/, v14);
    sub_B16FFC(&StringLiteral_6432/*"FRIEND_ACCEPT_CANCEL"*/, v15);
    sub_B16FFC(&StringLiteral_6472/*"FRIEND_REMOVE_MESSAGE"*/, v16);
    sub_B16FFC(&StringLiteral_6469/*"FRIEND_REJECT_MESSAGE"*/, v17);
    sub_B16FFC(&StringLiteral_6392/*"FOLLOW_REMOVE_DECIDE"*/, v18);
    sub_B16FFC(&StringLiteral_6434/*"FRIEND_ACCEPT_MESSAGE"*/, v19);
    sub_B16FFC(&StringLiteral_6468/*"FRIEND_REJECT_DECIDE"*/, v20);
    sub_B16FFC(&StringLiteral_6433/*"FRIEND_ACCEPT_DECIDE"*/, v21);
    sub_B16FFC(&StringLiteral_6438/*"FRIEND_CANCEL_MESSAGE"*/, v22);
    sub_B16FFC(&StringLiteral_6457/*"FRIEND_OFFER_CANCEL"*/, v23);
    sub_B16FFC(&StringLiteral_6393/*"FOLLOW_REMOVE_MESSAGE"*/, v24);
    sub_B16FFC(&StringLiteral_6436/*"FRIEND_CANCEL_CANCEL"*/, v25);
    sub_B16FFC(&StringLiteral_6471/*"FRIEND_REMOVE_DECIDE"*/, v26);
    sub_B16FFC(&StringLiteral_6388/*"FOLLOW_OFFER_CANCEL"*/, v27);
    sub_B16FFC(&StringLiteral_6391/*"FOLLOW_REMOVE_CANCEL"*/, v28);
    sub_B16FFC(&StringLiteral_6458/*"FRIEND_OFFER_DECIDE"*/, v29);
    sub_B16FFC(&StringLiteral_6389/*"FOLLOW_OFFER_DECIDE"*/, v30);
    sub_B16FFC(&StringLiteral_6390/*"FOLLOW_OFFER_MESSAGE"*/, v31);
    sub_B16FFC(&StringLiteral_6459/*"FRIEND_OFFER_MESSAGE"*/, v32);
    sub_B16FFC(&StringLiteral_6437/*"FRIEND_CANCEL_DECIDE"*/, v33);
    sub_B16FFC(&StringLiteral_6467/*"FRIEND_REJECT_CANCEL"*/, v34);
    byte_40FD8D6 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
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
        v41 = LocalizationManager__Get((System_String_o *)StringLiteral_6459/*"FRIEND_OFFER_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_58;
        v42 = System_String__Format(v41, (Il2CppObject *)entity->fields.userName, 0LL);
        if ( !messageLabel )
          goto LABEL_58;
        UILabel__set_text(messageLabel, v42, 0LL);
        decideLabel = this->fields.decideLabel;
        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_6458/*"FRIEND_OFFER_DECIDE"*/, 0LL);
        if ( !decideLabel )
          goto LABEL_58;
        UILabel__set_text(decideLabel, v44, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v46 = &StringLiteral_6457/*"FRIEND_OFFER_CANCEL"*/;
        break;
      case 2:
        v47 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v48 = LocalizationManager__Get((System_String_o *)StringLiteral_6434/*"FRIEND_ACCEPT_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_58;
        v49 = System_String__Format(v48, (Il2CppObject *)entity->fields.userName, 0LL);
        if ( !v47 )
          goto LABEL_58;
        UILabel__set_text(v47, v49, 0LL);
        v50 = this->fields.decideLabel;
        v51 = LocalizationManager__Get((System_String_o *)StringLiteral_6433/*"FRIEND_ACCEPT_DECIDE"*/, 0LL);
        if ( !v50 )
          goto LABEL_58;
        UILabel__set_text(v50, v51, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v46 = &StringLiteral_6432/*"FRIEND_ACCEPT_CANCEL"*/;
        break;
      case 3:
        v52 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v53 = LocalizationManager__Get((System_String_o *)StringLiteral_6469/*"FRIEND_REJECT_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_58;
        v54 = System_String__Format(v53, (Il2CppObject *)entity->fields.userName, 0LL);
        if ( !v52 )
          goto LABEL_58;
        UILabel__set_text(v52, v54, 0LL);
        v55 = this->fields.decideLabel;
        v56 = LocalizationManager__Get((System_String_o *)StringLiteral_6468/*"FRIEND_REJECT_DECIDE"*/, 0LL);
        if ( !v55 )
          goto LABEL_58;
        UILabel__set_text(v55, v56, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v46 = &StringLiteral_6467/*"FRIEND_REJECT_CANCEL"*/;
        break;
      case 4:
        v57 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v58 = LocalizationManager__Get((System_String_o *)StringLiteral_6438/*"FRIEND_CANCEL_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_58;
        v59 = System_String__Format(v58, (Il2CppObject *)entity->fields.userName, 0LL);
        if ( !v57 )
          goto LABEL_58;
        UILabel__set_text(v57, v59, 0LL);
        v60 = this->fields.decideLabel;
        v61 = LocalizationManager__Get((System_String_o *)StringLiteral_6437/*"FRIEND_CANCEL_DECIDE"*/, 0LL);
        if ( !v60 )
          goto LABEL_58;
        UILabel__set_text(v60, v61, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v46 = &StringLiteral_6436/*"FRIEND_CANCEL_CANCEL"*/;
        break;
      case 5:
        v62 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v63 = LocalizationManager__Get((System_String_o *)StringLiteral_6472/*"FRIEND_REMOVE_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_58;
        v64 = System_String__Format(v63, (Il2CppObject *)entity->fields.userName, 0LL);
        if ( !v62 )
          goto LABEL_58;
        UILabel__set_text(v62, v64, 0LL);
        v65 = this->fields.decideLabel;
        v66 = LocalizationManager__Get((System_String_o *)StringLiteral_6471/*"FRIEND_REMOVE_DECIDE"*/, 0LL);
        if ( !v65 )
          goto LABEL_58;
        UILabel__set_text(v65, v66, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v46 = &StringLiteral_6470/*"FRIEND_REMOVE_CANCEL"*/;
        break;
      case 6:
        v67 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v68 = LocalizationManager__Get((System_String_o *)StringLiteral_6390/*"FOLLOW_OFFER_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_58;
        v69 = System_String__Format(v68, (Il2CppObject *)entity->fields.userName, 0LL);
        if ( !v67 )
          goto LABEL_58;
        UILabel__set_text(v67, v69, 0LL);
        v70 = this->fields.decideLabel;
        v71 = LocalizationManager__Get((System_String_o *)StringLiteral_6389/*"FOLLOW_OFFER_DECIDE"*/, 0LL);
        if ( !v70 )
          goto LABEL_58;
        UILabel__set_text(v70, v71, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v46 = &StringLiteral_6388/*"FOLLOW_OFFER_CANCEL"*/;
        break;
      case 7:
        v72 = this->fields.messageLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v73 = LocalizationManager__Get((System_String_o *)StringLiteral_6393/*"FOLLOW_REMOVE_MESSAGE"*/, 0LL);
        if ( !entity )
          goto LABEL_58;
        v74 = System_String__Format(v73, (Il2CppObject *)entity->fields.userName, 0LL);
        if ( !v72 )
          goto LABEL_58;
        UILabel__set_text(v72, v74, 0LL);
        v75 = this->fields.decideLabel;
        v76 = LocalizationManager__Get((System_String_o *)StringLiteral_6392/*"FOLLOW_REMOVE_DECIDE"*/, 0LL);
        if ( !v75 )
          goto LABEL_58;
        UILabel__set_text(v75, v76, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v46 = &StringLiteral_6391/*"FOLLOW_REMOVE_CANCEL"*/;
        break;
      default:
        goto LABEL_57;
    }
    v77 = LocalizationManager__Get((System_String_o *)*v46, 0LL);
    if ( !cancelLabel )
LABEL_58:
      sub_B170D4();
    UILabel__set_text(cancelLabel, v77, 0LL);
LABEL_57:
    this->fields.state = 1;
    v78 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
    System_Action___ctor(v78, (Il2CppObject *)this, Method_FriendOperationConfirmMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v78, 0, 0LL);
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

  if ( (byte_40FD8D3 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_40FD8D3 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  FriendOperationConfirmMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall FriendOperationConfirmMenu__get_closeBtnPath(
        FriendOperationConfirmMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FD8DA & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_4202/*"ConfirmWindow/CancelButton"*/, method);
    byte_40FD8DA = 1;
  }
  return (System_String_o *)StringLiteral_4202/*"ConfirmWindow/CancelButton"*/;
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

  if ( (byte_40FD8D4 & 1) == 0 )
  {
    sub_B16FFC(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_40FD8D4 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  FriendOperationConfirmMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationConfirmMenu_CallbackFunc___ctor(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F68C8 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F68C8 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall FriendOperationConfirmMenu_CallbackFunc__EndInvoke(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendOperationConfirmMenu_CallbackFunc__Invoke(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  FriendOperationConfirmMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  FriendOperationConfirmMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  FriendOperationConfirmMenu_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (FriendOperationConfirmMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}