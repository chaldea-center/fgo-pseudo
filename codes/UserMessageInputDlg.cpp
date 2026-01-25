void UserMessageInputDlg___ctor(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  SupportDeckNameInputMenu___ctor((SupportDeckNameInputMenu_o *)this, 0);
}


void UserMessageInputDlg__OnChangeInput(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  UILineInput_o *nameInput; // x0
  struct System_String_o *Text; // x0
  struct System_String_o **p_changeName; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_String_o *v12; // x0
  bool v13; // w8
  System_String_o *v14; // x20
  int stringLength; // w8
  bool v16; // w22
  int32_t i; // w21
  uint16_t Chars; // w0
  int32_t v19; // w8

  if ( (byte_4CE9681 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE9681 = 1;
  }
  nameInput = this->fields.nameInput;
  if ( !nameInput )
    goto LABEL_17;
  Text = UILineInput__GetText(nameInput, 0);
  this->fields.changeName = Text;
  p_changeName = &this->fields.changeName;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.changeName, (int32_t)Text, v6, v7, v8, v9, v10, v11);
  nameInput = (UILineInput_o *)System_String__IsNullOrEmpty(this->fields.changeName, 0);
  if ( ((unsigned __int8)nameInput & 1) != 0 )
    goto LABEL_9;
  nameInput = (UILineInput_o *)*p_changeName;
  if ( !*p_changeName )
    goto LABEL_17;
  v12 = System_String__Trim((System_String_o *)nameInput, 0);
  if ( System_String__op_Equality(v12, (System_String_o *)StringLiteral_1/*""*/, 0)
    || (nameInput = (UILineInput_o *)System_String__op_Equality(this->fields.changeName, this->fields.baseName, 0),
        ((unsigned __int8)nameInput & 1) != 0) )
  {
    v13 = 0;
  }
  else
  {
LABEL_9:
    v14 = *p_changeName;
    if ( !v14 )
      goto LABEL_17;
    stringLength = v14->fields._stringLength;
    v16 = stringLength > 0;
    if ( stringLength >= 1 )
    {
      for ( i = 0; i < v19; v16 = i < v19 )
      {
        Chars = System_String__get_Chars(v14, i, 0);
        if ( EmojiUtility__IsEmojiChar(Chars, 0) )
          break;
        v19 = v14->fields._stringLength;
        ++i;
      }
    }
    v13 = !v16;
  }
  nameInput = (UILineInput_o *)this->fields.decideButton;
  if ( !nameInput )
LABEL_17:
    sub_1C7BD40(nameInput, method);
  ((void (__fastcall *)(UILineInput_o *, bool, const char *))nameInput->klass[1]._1.name)(
    nameInput,
    v13,
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  const MethodInfo *v29; // x2
  struct UIInput_o *inputTarget; // x20
  UIInput_OnValidate_o *v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v40; // x20

  if ( (byte_4CE967F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C7BAE8(&Method_EmojiUtility_ValidateNameText__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UIInput_OnValidate_TypeInfo);
    sub_1C7BAE8(&Method_SupportDeckNameInputMenu_EndOpen__);
    sub_1C7BAE8(&StringLiteral_8692/*"MESSAGE_CHANGE_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_8690/*"MESSAGE_CHANGE_EXPLANATION"*/);
    byte_4CE967F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.changeName = message;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.changeName, (int32_t)message, v9, v10, v11, v12, v13, v14);
  this->fields.baseName = message;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.baseName, (int32_t)message, v15, v16, v17, v18, v19, v20);
  this->fields.callbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8692/*"MESSAGE_CHANGE_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8690/*"MESSAGE_CHANGE_EXPLANATION"*/, 0);
  if ( !explanationLabel )
    goto LABEL_15;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0);
  UserMessageInputDlg__inputLabelSetup(this, message, v29);
  gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget;
  if ( !gameObject )
    goto LABEL_15;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)gameObject,
                                             (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
  inputTarget = this->fields.inputTarget;
  v31 = (UIInput_OnValidate_o *)sub_1C7BD34(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v31, 0, Method_EmojiUtility_ValidateNameText__, 0);
  if ( !inputTarget )
    goto LABEL_15;
  inputTarget->fields.onValidate = v31;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&inputTarget->fields.onValidate,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0),
        cancelLabel = this->fields.cancelLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton) == 0) )
  {
LABEL_15:
    sub_1C7BD40(gameObject, v8);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, const char *))gameObject->klass[1]._1.name)(
    gameObject,
    0,
    gameObject->klass[1]._1.namespaze);
  this->fields.state = 1;
  this->fields.isFirstSelected = 0;
  v40 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_SupportDeckNameInputMenu_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0, 0);
}


void UserMessageInputDlg__Update(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  UIInput_o *inputTarget; // x0

  if ( (byte_4CE9680 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE9680 = 1;
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
    sub_1C7BD40(inputTarget, method);
  }
}


System_String_o *UserMessageInputDlg__get_closeBtnPath(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  if ( (byte_4CE9683 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_3075/*"BaseWindow/CancleButton"*/);
    byte_4CE9683 = 1;
  }
  return (System_String_o *)StringLiteral_3075/*"BaseWindow/CancleButton"*/;
}


void UserMessageInputDlg__inputLabelSetup(
        UserMessageInputDlg_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  System_String_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  UIInput_o *inputTarget; // x20
  struct UIInput_o *v8; // x8
  struct UIInput_o *v9; // x8
  struct UIInput_o *v10; // x8
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CE9682 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8691/*"MESSAGE_CHANGE_NO_INPUT"*/);
    byte_4CE9682 = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(message, 0);
  inputTarget = this->fields.inputTarget;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_8691/*"MESSAGE_CHANGE_NO_INPUT"*/, 0);
    if ( inputTarget )
    {
      UIInput__set_value(inputTarget, IsNullOrEmpty, 0);
      v8 = this->fields.inputTarget;
      if ( v8 )
      {
        IsNullOrEmpty = (System_String_o *)v8->fields.label;
        if ( IsNullOrEmpty )
        {
          UILabel__set_effectStyle((UILabel_o *)IsNullOrEmpty, 0, 0);
          v9 = this->fields.inputTarget;
          if ( v9 )
          {
            IsNullOrEmpty = (System_String_o *)v9->fields.label;
            if ( IsNullOrEmpty )
            {
              v11.fields.r = 0.6;
              v11.fields.a = 1.0;
              v11.fields.g = 0.6;
              v11.fields.b = 0.6;
              UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v11, 0);
              return;
            }
          }
        }
      }
    }
LABEL_16:
    sub_1C7BD40(IsNullOrEmpty, v6);
  }
  if ( !inputTarget )
    goto LABEL_16;
  UIInput__set_value(this->fields.inputTarget, message, 0);
  v10 = this->fields.inputTarget;
  if ( !v10 )
    goto LABEL_16;
  IsNullOrEmpty = (System_String_o *)v10->fields.label;
  if ( !IsNullOrEmpty )
    goto LABEL_16;
  UILabel__set_effectStyle((UILabel_o *)IsNullOrEmpty, 3, 0);
}