void FriendOperationConfirmMenu___ctor(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596B017 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596B017 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void FriendOperationConfirmMenu__Callback(FriendOperationConfirmMenu_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct FriendOperationConfirmMenu_CallbackFunc_o *v9; // x20
  struct FriendOperationConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void FriendOperationConfirmMenu__Close(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendOperationConfirmMenu__Close_39320592(this, 0, v2);
}


void FriendOperationConfirmMenu__Close_39320592(
        FriendOperationConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596B013 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_FriendOperationConfirmMenu_EndClose__);
    byte_596B013 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_FriendOperationConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void FriendOperationConfirmMenu__EndClose(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  FriendOperationConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void FriendOperationConfirmMenu__EndOpen(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void FriendOperationConfirmMenu__Init(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_596B011 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B011 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (messageLabel = this->fields.decideLabel) == 0)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (messageLabel = this->fields.cancelLabel) == 0) )
  {
    sub_2213CDC(messageLabel, method);
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

  if ( (byte_596B015 & 1) == 0 )
  {
    sub_2213A60(&Method_FriendOperationConfirmMenu_OnClickCancel__);
    byte_596B015 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendOperationConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_FriendOperationConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FriendOperationConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    FriendOperationConfirmMenu__Callback(this, 0, v5);
  }
}


void FriendOperationConfirmMenu__OnClickDecide(FriendOperationConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596B014 & 1) == 0 )
  {
    sub_2213A60(&Method_FriendOperationConfirmMenu_OnClickDecide__);
    byte_596B014 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FriendOperationConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_FriendOperationConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FriendOperationConfirmMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  UILabel_o *v16; // x21
  UILabel_o *v17; // x20
  __int64 *v18; // x8
  UILabel_o *v19; // x21
  UILabel_o *v20; // x20
  UILabel_o *v21; // x21
  UILabel_o *v22; // x20
  UILabel_o *messageLabel; // x21
  UILabel_o *decideLabel; // x20
  UILabel_o *v25; // x21
  UILabel_o *v26; // x20
  UILabel_o *v27; // x21
  UILabel_o *v28; // x20
  UILabel_o *v29; // x21
  UILabel_o *v30; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v32; // x20

  if ( (byte_596B012 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_FriendOperationConfirmMenu_EndOpen__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_6845/*"FRIEND_REMOVE_CANCEL"*/);
    sub_2213A60(&StringLiteral_6807/*"FRIEND_ACCEPT_CANCEL"*/);
    sub_2213A60(&StringLiteral_6847/*"FRIEND_REMOVE_MESSAGE"*/);
    sub_2213A60(&StringLiteral_6844/*"FRIEND_REJECT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_6760/*"FOLLOW_REMOVE_DECIDE"*/);
    sub_2213A60(&StringLiteral_6809/*"FRIEND_ACCEPT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_6843/*"FRIEND_REJECT_DECIDE"*/);
    sub_2213A60(&StringLiteral_6808/*"FRIEND_ACCEPT_DECIDE"*/);
    sub_2213A60(&StringLiteral_6813/*"FRIEND_CANCEL_MESSAGE"*/);
    sub_2213A60(&StringLiteral_6832/*"FRIEND_OFFER_CANCEL"*/);
    sub_2213A60(&StringLiteral_6761/*"FOLLOW_REMOVE_MESSAGE"*/);
    sub_2213A60(&StringLiteral_6811/*"FRIEND_CANCEL_CANCEL"*/);
    sub_2213A60(&StringLiteral_6846/*"FRIEND_REMOVE_DECIDE"*/);
    sub_2213A60(&StringLiteral_6756/*"FOLLOW_OFFER_CANCEL"*/);
    sub_2213A60(&StringLiteral_6759/*"FOLLOW_REMOVE_CANCEL"*/);
    sub_2213A60(&StringLiteral_6833/*"FRIEND_OFFER_DECIDE"*/);
    sub_2213A60(&StringLiteral_6757/*"FOLLOW_OFFER_DECIDE"*/);
    sub_2213A60(&StringLiteral_6758/*"FOLLOW_OFFER_MESSAGE"*/);
    sub_2213A60(&StringLiteral_6834/*"FRIEND_OFFER_MESSAGE"*/);
    sub_2213A60(&StringLiteral_6812/*"FRIEND_CANCEL_DECIDE"*/);
    sub_2213A60(&StringLiteral_6842/*"FRIEND_REJECT_CANCEL"*/);
    byte_596B012 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)entity,
      (System_String_o *)callback,
      (int32_t)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_58;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    if ( kind <= 3 )
    {
      switch ( kind )
      {
        case 1:
          messageLabel = this->fields.messageLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6834/*"FRIEND_OFFER_MESSAGE"*/, 0);
          if ( !entity )
            goto LABEL_58;
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     (System_String_o *)gameObject,
                                                     (Il2CppObject *)entity->fields.userName,
                                                     0);
          if ( !messageLabel )
            goto LABEL_58;
          UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
          decideLabel = this->fields.decideLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6833/*"FRIEND_OFFER_DECIDE"*/, 0);
          if ( !decideLabel )
            goto LABEL_58;
          UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
          v18 = &StringLiteral_6832/*"FRIEND_OFFER_CANCEL"*/;
LABEL_55:
          cancelLabel = this->fields.cancelLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v18, 0);
          if ( cancelLabel )
          {
            UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
            break;
          }
LABEL_58:
          sub_2213CDC(gameObject, v13);
        case 2:
          v29 = this->fields.messageLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6809/*"FRIEND_ACCEPT_MESSAGE"*/, 0);
          if ( !entity )
            goto LABEL_58;
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     (System_String_o *)gameObject,
                                                     (Il2CppObject *)entity->fields.userName,
                                                     0);
          if ( !v29 )
            goto LABEL_58;
          UILabel__set_text(v29, (System_String_o *)gameObject, 0);
          v30 = this->fields.decideLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6808/*"FRIEND_ACCEPT_DECIDE"*/, 0);
          if ( !v30 )
            goto LABEL_58;
          UILabel__set_text(v30, (System_String_o *)gameObject, 0);
          v18 = &StringLiteral_6807/*"FRIEND_ACCEPT_CANCEL"*/;
          goto LABEL_55;
        case 3:
          v19 = this->fields.messageLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6844/*"FRIEND_REJECT_MESSAGE"*/, 0);
          if ( !entity )
            goto LABEL_58;
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     (System_String_o *)gameObject,
                                                     (Il2CppObject *)entity->fields.userName,
                                                     0);
          if ( !v19 )
            goto LABEL_58;
          UILabel__set_text(v19, (System_String_o *)gameObject, 0);
          v20 = this->fields.decideLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6843/*"FRIEND_REJECT_DECIDE"*/, 0);
          if ( !v20 )
            goto LABEL_58;
          UILabel__set_text(v20, (System_String_o *)gameObject, 0);
          v18 = &StringLiteral_6842/*"FRIEND_REJECT_CANCEL"*/;
          goto LABEL_55;
      }
    }
    else
    {
      if ( kind <= 5 )
      {
        if ( kind == 4 )
        {
          v25 = this->fields.messageLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6813/*"FRIEND_CANCEL_MESSAGE"*/, 0);
          if ( !entity )
            goto LABEL_58;
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     (System_String_o *)gameObject,
                                                     (Il2CppObject *)entity->fields.userName,
                                                     0);
          if ( !v25 )
            goto LABEL_58;
          UILabel__set_text(v25, (System_String_o *)gameObject, 0);
          v26 = this->fields.decideLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6812/*"FRIEND_CANCEL_DECIDE"*/, 0);
          if ( !v26 )
            goto LABEL_58;
          UILabel__set_text(v26, (System_String_o *)gameObject, 0);
          v18 = &StringLiteral_6811/*"FRIEND_CANCEL_CANCEL"*/;
        }
        else
        {
          v16 = this->fields.messageLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6847/*"FRIEND_REMOVE_MESSAGE"*/, 0);
          if ( !entity )
            goto LABEL_58;
          gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                     (System_String_o *)gameObject,
                                                     (Il2CppObject *)entity->fields.userName,
                                                     0);
          if ( !v16 )
            goto LABEL_58;
          UILabel__set_text(v16, (System_String_o *)gameObject, 0);
          v17 = this->fields.decideLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6846/*"FRIEND_REMOVE_DECIDE"*/, 0);
          if ( !v17 )
            goto LABEL_58;
          UILabel__set_text(v17, (System_String_o *)gameObject, 0);
          v18 = &StringLiteral_6845/*"FRIEND_REMOVE_CANCEL"*/;
        }
        goto LABEL_55;
      }
      if ( kind == 6 )
      {
        v27 = this->fields.messageLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6758/*"FOLLOW_OFFER_MESSAGE"*/, 0);
        if ( !entity )
          goto LABEL_58;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0);
        if ( !v27 )
          goto LABEL_58;
        UILabel__set_text(v27, (System_String_o *)gameObject, 0);
        v28 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6757/*"FOLLOW_OFFER_DECIDE"*/, 0);
        if ( !v28 )
          goto LABEL_58;
        UILabel__set_text(v28, (System_String_o *)gameObject, 0);
        v18 = &StringLiteral_6756/*"FOLLOW_OFFER_CANCEL"*/;
        goto LABEL_55;
      }
      if ( kind == 7 )
      {
        v21 = this->fields.messageLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6761/*"FOLLOW_REMOVE_MESSAGE"*/, 0);
        if ( !entity )
          goto LABEL_58;
        gameObject = (UnityEngine_GameObject_o *)System_String__Format(
                                                   (System_String_o *)gameObject,
                                                   (Il2CppObject *)entity->fields.userName,
                                                   0);
        if ( !v21 )
          goto LABEL_58;
        UILabel__set_text(v21, (System_String_o *)gameObject, 0);
        v22 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6760/*"FOLLOW_REMOVE_DECIDE"*/, 0);
        if ( !v22 )
          goto LABEL_58;
        UILabel__set_text(v22, (System_String_o *)gameObject, 0);
        v18 = &StringLiteral_6759/*"FOLLOW_REMOVE_CANCEL"*/;
        goto LABEL_55;
      }
    }
    this->fields.state = 1;
    v32 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_FriendOperationConfirmMenu_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v32, 0, 0, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  FriendOperationConfirmMenu_o *v13; // x0
  FriendOperationConfirmMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596B00F & 1) == 0 )
  {
    sub_2213A60(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    byte_596B00F = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (FriendOperationConfirmMenu_o *)sub_221405C(v8, FriendOperationConfirmMenu_CallbackFunc_TypeInfo, v9, v10);
  FriendOperationConfirmMenu__remove_callbackFunc(v13, v14, v15);
}


System_String_o *FriendOperationConfirmMenu__get_closeBtnPath(
        FriendOperationConfirmMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_596B016 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4826/*"ConfirmWindow/CancelButton"*/);
    byte_596B016 = 1;
  }
  return (System_String_o *)StringLiteral_4826/*"ConfirmWindow/CancelButton"*/;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  FriendOperationConfirmMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596B010 & 1) == 0 )
  {
    sub_2213A60(&FriendOperationConfirmMenu_CallbackFunc_TypeInfo);
    byte_596B010 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (FriendOperationConfirmMenu_o *)sub_221405C(v8, FriendOperationConfirmMenu_CallbackFunc_TypeInfo, v9, v10);
  FriendOperationConfirmMenu__Init(v13, v14);
}


void FriendOperationConfirmMenu_CallbackFunc___ctor(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2000DD4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2000D8C;
}


System_IAsyncResult_o *FriendOperationConfirmMenu_CallbackFunc__BeginInvoke(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void FriendOperationConfirmMenu_CallbackFunc__EndInvoke(
        FriendOperationConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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