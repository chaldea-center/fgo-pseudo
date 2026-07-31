void UserMessageInputDlg___ctor(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  SupportDeckNameInputMenu___ctor((SupportDeckNameInputMenu_o *)this, 0);
}


void UserMessageInputDlg__OnChangeInput(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  UILineInput_o *nameInput; // x0
  struct System_String_o *Text; // x0
  struct System_String_o **p_changeName; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x20
  int32_t v13; // w21
  uint16_t Chars; // w0
  bool IsEmojiChar; // w0
  char v16; // w8
  System_String_o *v17; // x0

  if ( (byte_593356F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593356F = 1;
  }
  nameInput = this->fields.nameInput;
  if ( !nameInput )
    goto LABEL_18;
  Text = UILineInput__GetText(nameInput, 0);
  this->fields.changeName = Text;
  p_changeName = &this->fields.changeName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.changeName, (int32_t)Text, v6, v7, v8, v9, v10, v11);
  nameInput = (UILineInput_o *)System_String__IsNullOrEmpty(this->fields.changeName, 0);
  if ( ((unsigned __int8)nameInput & 1) != 0 )
    goto LABEL_5;
  nameInput = (UILineInput_o *)*p_changeName;
  if ( !*p_changeName )
    goto LABEL_18;
  v17 = System_String__Trim((System_String_o *)nameInput, 0);
  if ( System_String__op_Equality(v17, (System_String_o *)StringLiteral_1/*""*/, 0)
    || (nameInput = (UILineInput_o *)System_String__op_Equality(this->fields.changeName, this->fields.baseName, 0),
        ((unsigned __int8)nameInput & 1) != 0) )
  {
    v16 = 0;
  }
  else
  {
LABEL_5:
    v12 = *p_changeName;
    if ( !v12 )
      goto LABEL_18;
    if ( v12->fields._stringLength < 1 )
    {
      v16 = 1;
    }
    else
    {
      v13 = 0;
      do
      {
        Chars = System_String__get_Chars(v12, v13, 0);
        IsEmojiChar = EmojiUtility__IsEmojiChar(Chars, 0);
        if ( IsEmojiChar )
          break;
        ++v13;
      }
      while ( v13 < v12->fields._stringLength );
      v16 = !IsEmojiChar;
    }
  }
  nameInput = (UILineInput_o *)this->fields.decideButton;
  if ( !nameInput )
LABEL_18:
    sub_21FFECC(nameInput, method);
  ((void (__fastcall *)(UILineInput_o *, _QWORD, const char *))nameInput->klass[1]._1.name)(
    nameInput,
    v16 & 1,
    nameInput->klass[1]._1.namespaze);
}


void UserMessageInputDlg__Open(
        UserMessageInputDlg_o *this,
        System_String_o *message,
        SupportDeckNameInputMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  __int64 v28; // x2
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  const MethodInfo *v31; // x2
  struct UIInput_o *inputTarget; // x20
  UIInput_OnValidate_o *v33; // x21
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_c *v42; // x0
  System_Action_o *v43; // x20

  if ( (byte_593356D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_21FFC50(&Method_EmojiUtility_ValidateNameText__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UIInput_OnValidate_TypeInfo);
    sub_21FFC50(&Method_SupportDeckNameInputMenu_EndOpen__);
    sub_21FFC50(&StringLiteral_9018/*"MESSAGE_CHANGE_TITLE"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_9016/*"MESSAGE_CHANGE_EXPLANATION"*/);
    byte_593356D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.changeName = message;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.changeName,
    (int32_t)message,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.baseName = message;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseName,
    (int32_t)message,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27, v28);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9018/*"MESSAGE_CHANGE_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9016/*"MESSAGE_CHANGE_EXPLANATION"*/, 0);
  if ( !explanationLabel )
    goto LABEL_15;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0);
  UserMessageInputDlg__inputLabelSetup(this, message, v31);
  gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget;
  if ( !gameObject )
    goto LABEL_15;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)gameObject,
                                             (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
  inputTarget = this->fields.inputTarget;
  v33 = (UIInput_OnValidate_o *)sub_21FFEBC(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v33, 0, Method_EmojiUtility_ValidateNameText__, 0);
  if ( !inputTarget )
    goto LABEL_15;
  inputTarget->fields.onValidate = v33;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&inputTarget->fields.onValidate,
    (int32_t)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0),
        cancelLabel = this->fields.cancelLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton) == 0) )
  {
LABEL_15:
    sub_21FFECC(gameObject, v8);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, const char *))gameObject->klass[1]._1.name)(
    gameObject,
    0,
    gameObject->klass[1]._1.namespaze);
  v42 = System_Action_TypeInfo;
  this->fields.isFirstSelected = 0;
  this->fields.state = 1;
  v43 = (System_Action_o *)sub_21FFEBC(v42);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_SupportDeckNameInputMenu_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0, 0);
}


void UserMessageInputDlg__Update(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  UIInput_o *inputTarget; // x0

  if ( (byte_593356E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593356E = 1;
  }
  inputTarget = this->fields.inputTarget;
  if ( !inputTarget )
    goto LABEL_9;
  if ( UIInput__get_isSelected(inputTarget, 0) && !this->fields.isFirstSelected )
  {
    inputTarget = this->fields.inputTarget;
    this->fields.isFirstSelected = 1;
    if ( inputTarget )
    {
      UIInput__set_value(inputTarget, (System_String_o *)StringLiteral_1/*""*/, 0);
      return;
    }
LABEL_9:
    sub_21FFECC(inputTarget, method);
  }
}


System_String_o *UserMessageInputDlg__get_closeBtnPath(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  if ( (byte_5933571 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3192/*"BaseWindow/CancleButton"*/);
    byte_5933571 = 1;
  }
  return (System_String_o *)StringLiteral_3192/*"BaseWindow/CancleButton"*/;
}


void UserMessageInputDlg__inputLabelSetup(
        UserMessageInputDlg_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  System_String_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UIInput_o *inputTarget; // x20
  struct UIInput_o *v9; // x8
  struct UIInput_o *v10; // x8
  struct UIInput_o *v11; // x8
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5933570 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_9017/*"MESSAGE_CHANGE_NO_INPUT"*/);
    byte_5933570 = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(message, 0);
  inputTarget = this->fields.inputTarget;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_9017/*"MESSAGE_CHANGE_NO_INPUT"*/, 0);
    if ( inputTarget )
    {
      UIInput__set_value(inputTarget, IsNullOrEmpty, 0);
      v9 = this->fields.inputTarget;
      if ( v9 )
      {
        IsNullOrEmpty = (System_String_o *)v9->fields.label;
        if ( IsNullOrEmpty )
        {
          UILabel__set_effectStyle((UILabel_o *)IsNullOrEmpty, 0, 0);
          v10 = this->fields.inputTarget;
          if ( v10 )
          {
            IsNullOrEmpty = (System_String_o *)v10->fields.label;
            if ( IsNullOrEmpty )
            {
              v12.fields.r = 0.6;
              v12.fields.a = 1.0;
              v12.fields.g = 0.6;
              v12.fields.b = 0.6;
              UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v12, 0);
              return;
            }
          }
        }
      }
    }
LABEL_16:
    sub_21FFECC(IsNullOrEmpty, v6);
  }
  if ( !inputTarget )
    goto LABEL_16;
  UIInput__set_value(this->fields.inputTarget, message, 0);
  v11 = this->fields.inputTarget;
  if ( !v11 )
    goto LABEL_16;
  IsNullOrEmpty = (System_String_o *)v11->fields.label;
  if ( !IsNullOrEmpty )
    goto LABEL_16;
  UILabel__set_effectStyle((UILabel_o *)IsNullOrEmpty, 3, 0);
}