void SupportSelectConfirmMenu___ctor(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5934AF9 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5934AF9 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SupportSelectConfirmMenu__Callback(SupportSelectConfirmMenu_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct SupportSelectConfirmMenu_CallbackFunc_o *v9; // x20
  struct SupportSelectConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void SupportSelectConfirmMenu__Close(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportSelectConfirmMenu__Close_42431720(this, 0, v2);
}


void SupportSelectConfirmMenu__Close_42431720(
        SupportSelectConfirmMenu_o *this,
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

  if ( (byte_5934AF5 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SupportSelectConfirmMenu_EndClose__);
    byte_5934AF5 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
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
  v11 = (System_Action_o *)sub_21FFEBC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SupportSelectConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void SupportSelectConfirmMenu__EndClose(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
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

  SupportSelectConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void SupportSelectConfirmMenu__EndOpen(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void SupportSelectConfirmMenu__Init(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_5934AF2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934AF2 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.closeLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.cancelLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.decideLabel) == 0) )
  {
LABEL_9:
    sub_21FFECC(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SupportSelectConfirmMenu__OnCancelClose(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5934AF7 & 1) == 0 )
  {
    sub_21FFC50(&Method_SupportSelectConfirmMenu_OnCancelClose__);
    byte_5934AF7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SupportSelectConfirmMenu_OnCancelClose__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmMenu_OnCancelClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SupportSelectConfirmMenu_OnCancelClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    SupportSelectConfirmMenu__Callback(this, 0, v5);
  }
}


void SupportSelectConfirmMenu__OnClickClose(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5934AF6 & 1) == 0 )
  {
    sub_21FFC50(&Method_SupportSelectConfirmMenu_OnClickClose__);
    byte_5934AF6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SupportSelectConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SupportSelectConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    SupportSelectConfirmMenu__Callback(this, 1, v5);
  }
}


void SupportSelectConfirmMenu__OnDecideClose(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5934AF8 & 1) == 0 )
  {
    sub_21FFC50(&Method_SupportSelectConfirmMenu_OnDecideClose__);
    byte_5934AF8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SupportSelectConfirmMenu_OnDecideClose__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmMenu_OnDecideClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SupportSelectConfirmMenu_OnDecideClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    SupportSelectConfirmMenu__Callback(this, 1, v5);
  }
}


void SupportSelectConfirmMenu__Open(
        SupportSelectConfirmMenu_o *this,
        int32_t kind,
        SupportSelectConfirmMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  if ( (byte_5934AF3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934AF3 = 1;
  }
  SupportSelectConfirmMenu__Open_42430304(
    this,
    kind,
    callback,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_1/*""*/,
    v4);
}


void SupportSelectConfirmMenu__Open_42430304(
        SupportSelectConfirmMenu_o *this,
        int32_t kind,
        SupportSelectConfirmMenu_CallbackFunc_o *callback,
        System_String_o *class1,
        System_String_o *class2,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *v17; // x22
  struct UILabel_o *v18; // x22
  System_String_o *v19; // x0
  System_String_o *v20; // x1
  UILabel_o *v21; // x0
  UILabel_o *v22; // x20
  __int64 *v23; // x8
  UILabel_o *v24; // x20
  UILabel_o *v25; // x20
  struct UILabel_o *v26; // x20
  bool v27; // w1
  UILabel_o *closeLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *decideLabel; // x20
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  System_Action_o *v33; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20

  if ( (byte_5934AF4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SupportSelectConfirmMenu_EndOpen__);
    sub_21FFC50(&StringLiteral_13051/*"SUPPORT_SELECT_EQUIP_CHANGE_TITLE"*/);
    sub_21FFC50(&StringLiteral_13014/*"SUPPORT_SELECT_ALL_CLEAR_TITLE"*/);
    sub_21FFC50(&StringLiteral_13053/*"SUPPORT_SELECT_EQUIP_CLEAR_WARNING"*/);
    sub_21FFC50(&StringLiteral_13068/*"SUPPORT_SELECT_WARNING_DIALOG_CLOSE"*/);
    sub_21FFC50(&StringLiteral_13063/*"SUPPORT_SELECT_SERVANT_CLEAR_TITLE"*/);
    sub_21FFC50(&StringLiteral_13060/*"SUPPORT_SELECT_NO_SERVANT_TITLE"*/);
    sub_21FFC50(&StringLiteral_13061/*"SUPPORT_SELECT_NO_SERVANT_WARNING"*/);
    sub_21FFC50(&StringLiteral_13050/*"SUPPORT_SELECT_EQUIP_CHANGE_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_13069/*"SUPPORT_SELECT_WARNING_DIALOG_DECIDE"*/);
    sub_21FFC50(&StringLiteral_13064/*"SUPPORT_SELECT_SERVANT_CLEAR_WARNING"*/);
    sub_21FFC50(&StringLiteral_13067/*"SUPPORT_SELECT_WARNING_DIALOG_CANCEL"*/);
    sub_21FFC50(&StringLiteral_13015/*"SUPPORT_SELECT_ALL_CLEAR_WARNING"*/);
    sub_21FFC50(&StringLiteral_13052/*"SUPPORT_SELECT_EQUIP_CLEAR_TITLE"*/);
    byte_5934AF4 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)callback,
      class1,
      (int32_t)class2,
      (int32_t)method,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    if ( kind <= 2 )
    {
      if ( kind == 1 )
      {
        titleLabel = this->fields.titleLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13060/*"SUPPORT_SELECT_NO_SERVANT_TITLE"*/, 0);
        if ( !titleLabel )
          goto LABEL_66;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
        messageLabel = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13061/*"SUPPORT_SELECT_NO_SERVANT_WARNING"*/, 0);
        if ( !messageLabel )
          goto LABEL_66;
        UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_66;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_66;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_66;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_66;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( !gameObject )
          goto LABEL_66;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_66;
        v27 = 0;
        goto LABEL_38;
      }
      if ( kind != 2 )
        goto LABEL_39;
      v22 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13063/*"SUPPORT_SELECT_SERVANT_CLEAR_TITLE"*/, 0);
      if ( !v22 )
        goto LABEL_66;
      UILabel__set_text(v22, (System_String_o *)gameObject, 0);
      v23 = &StringLiteral_13064/*"SUPPORT_SELECT_SERVANT_CLEAR_WARNING"*/;
    }
    else
    {
      switch ( kind )
      {
        case 3:
          v24 = this->fields.titleLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13052/*"SUPPORT_SELECT_EQUIP_CLEAR_TITLE"*/, 0);
          if ( !v24 )
            goto LABEL_66;
          UILabel__set_text(v24, (System_String_o *)gameObject, 0);
          v23 = &StringLiteral_13053/*"SUPPORT_SELECT_EQUIP_CLEAR_WARNING"*/;
          break;
        case 4:
          v25 = this->fields.titleLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13014/*"SUPPORT_SELECT_ALL_CLEAR_TITLE"*/, 0);
          if ( !v25 )
            goto LABEL_66;
          UILabel__set_text(v25, (System_String_o *)gameObject, 0);
          v23 = &StringLiteral_13015/*"SUPPORT_SELECT_ALL_CLEAR_WARNING"*/;
          break;
        case 5:
          v17 = this->fields.titleLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13051/*"SUPPORT_SELECT_EQUIP_CHANGE_TITLE"*/, 0);
          if ( !v17 )
            goto LABEL_66;
          UILabel__set_text(v17, (System_String_o *)gameObject, 0);
          v18 = this->fields.messageLabel;
          v19 = LocalizationManager__Get((System_String_o *)StringLiteral_13050/*"SUPPORT_SELECT_EQUIP_CHANGE_MESSAGE"*/, 0);
          gameObject = (UnityEngine_GameObject_o *)System_String__Format_75484576(
                                                     v19,
                                                     (Il2CppObject *)class1,
                                                     (Il2CppObject *)class2,
                                                     0);
          if ( !v18 )
            goto LABEL_66;
          v20 = (System_String_o *)gameObject;
          v21 = v18;
          goto LABEL_31;
        default:
          goto LABEL_39;
      }
    }
    v26 = this->fields.messageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v23, 0);
    if ( !v26 )
      goto LABEL_66;
    v20 = (System_String_o *)gameObject;
    v21 = v26;
LABEL_31:
    UILabel__set_text(v21, v20, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
    if ( !gameObject )
      goto LABEL_66;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
    if ( !gameObject )
      goto LABEL_66;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !gameObject )
      goto LABEL_66;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_66;
    v27 = 1;
LABEL_38:
    UnityEngine_GameObject__SetActive(gameObject, v27, 0);
LABEL_39:
    closeLabel = this->fields.closeLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13068/*"SUPPORT_SELECT_WARNING_DIALOG_CLOSE"*/, 0);
    if ( closeLabel )
    {
      UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
      cancelLabel = this->fields.cancelLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13067/*"SUPPORT_SELECT_WARNING_DIALOG_CANCEL"*/, 0);
      if ( cancelLabel )
      {
        UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
        decideLabel = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13069/*"SUPPORT_SELECT_WARNING_DIALOG_DECIDE"*/, 0);
        if ( decideLabel )
        {
          UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
          if ( gameObject )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( gameObject )
            {
              if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
              {
                gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
                if ( !gameObject )
                  goto LABEL_66;
                v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                AndroidBackKeyManager__AddBackBtn(v31, 0);
              }
              gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
              if ( gameObject )
              {
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( gameObject )
                {
                  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
                  {
LABEL_54:
                    this->fields.state = 1;
                    v33 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                    System_Action___ctor(v33, (Il2CppObject *)this, Method_SupportSelectConfirmMenu_EndOpen__, 0);
                    BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0, 0);
                    return;
                  }
                  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                  if ( gameObject )
                  {
                    v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                    AndroidBackKeyManager__AddBackBtn(v32, 0);
                    goto LABEL_54;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_66:
    sub_21FFECC(gameObject, v14);
  }
}


void SupportSelectConfirmMenu__add_callbackFunc(
        SupportSelectConfirmMenu_o *this,
        SupportSelectConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportSelectConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SupportSelectConfirmMenu_o *v13; // x0
  SupportSelectConfirmMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5934AF0 & 1) == 0 )
  {
    sub_21FFC50(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    byte_5934AF0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SupportSelectConfirmMenu_CallbackFunc_c *)v8->klass != SupportSelectConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, SupportSelectConfirmMenu_CallbackFunc_TypeInfo, v9, v10);
  SupportSelectConfirmMenu__remove_callbackFunc(v13, v14, v15);
}


void SupportSelectConfirmMenu__remove_callbackFunc(
        SupportSelectConfirmMenu_o *this,
        SupportSelectConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportSelectConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SupportSelectConfirmMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5934AF1 & 1) == 0 )
  {
    sub_21FFC50(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    byte_5934AF1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SupportSelectConfirmMenu_CallbackFunc_c *)v8->klass != SupportSelectConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, SupportSelectConfirmMenu_CallbackFunc_TypeInfo, v9, v10);
  SupportSelectConfirmMenu__Init(v13, v14);
}


void SupportSelectConfirmMenu_CallbackFunc___ctor(
        SupportSelectConfirmMenu_CallbackFunc_o *this,
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF4120;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF40D8;
}


System_IAsyncResult_o *SupportSelectConfirmMenu_CallbackFunc__BeginInvoke(
        SupportSelectConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void SupportSelectConfirmMenu_CallbackFunc__EndInvoke(
        SupportSelectConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void SupportSelectConfirmMenu_CallbackFunc__Invoke(
        SupportSelectConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}