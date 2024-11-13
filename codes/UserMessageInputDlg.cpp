void __fastcall UserMessageInputDlg___ctor(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  SupportDeckNameInputMenu___ctor((SupportDeckNameInputMenu_o *)this, 0LL);
}


void __fastcall UserMessageInputDlg__OnChangeInput(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILineInput_o *nameInput; // x0
  struct System_String_o *Text; // x0
  struct System_String_o **p_changeName; // x20
  System_String_o *v7; // x0
  bool v8; // w8
  System_String_o *v9; // x20
  int stringLength; // w8
  bool v11; // w22
  int32_t i; // w21
  uint16_t Chars; // w0
  int32_t v14; // w8

  if ( (byte_4B11703 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11703 = 1;
  }
  nameInput = this->fields.nameInput;
  if ( !nameInput )
    goto LABEL_17;
  Text = UILineInput__GetText(nameInput, 0LL);
  this->fields.changeName = Text;
  p_changeName = &this->fields.changeName;
  sub_1BCA784(&this->fields.changeName, Text);
  nameInput = (UILineInput_o *)System_String__IsNullOrEmpty(this->fields.changeName, 0LL);
  if ( ((unsigned __int8)nameInput & 1) != 0 )
    goto LABEL_9;
  nameInput = (UILineInput_o *)*p_changeName;
  if ( !*p_changeName )
    goto LABEL_17;
  v7 = System_String__Trim((System_String_o *)nameInput, 0LL);
  if ( System_String__op_Equality(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL)
    || (nameInput = (UILineInput_o *)System_String__op_Equality(this->fields.changeName, this->fields.baseName, 0LL),
        ((unsigned __int8)nameInput & 1) != 0) )
  {
    v8 = 0;
  }
  else
  {
LABEL_9:
    v9 = *p_changeName;
    if ( !v9 )
      goto LABEL_17;
    stringLength = v9->fields._stringLength;
    v11 = stringLength > 0;
    if ( stringLength >= 1 )
    {
      for ( i = 0; i < v14; v11 = i < v14 )
      {
        Chars = System_String__get_Chars(v9, i, 0LL);
        if ( EmojiUtility__IsEmojiChar(Chars, 0LL) )
          break;
        v14 = v9->fields._stringLength;
        ++i;
      }
    }
    v8 = !v11;
  }
  nameInput = (UILineInput_o *)this->fields.decideButton;
  if ( !nameInput )
LABEL_17:
    sub_1BCAA3C(nameInput, method);
  ((void (__fastcall *)(UILineInput_o *, bool, void *))nameInput->klass[1]._1.namespaze)(
    nameInput,
    v8,
    nameInput->klass[1]._1.byval_arg.data);
}


void __fastcall UserMessageInputDlg__Open(
        UserMessageInputDlg_o *this,
        System_String_o *message,
        SupportDeckNameInputMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  const MethodInfo *v30; // x2
  struct UIInput_o *inputTarget; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  UIInput_OnValidate_o *v35; // x21
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Action_o *v41; // x20

  if ( (byte_4B11701 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, message, callback);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, v7, v8);
    sub_1BCA7E0(&Method_EmojiUtility_ValidateNameText__, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&UIInput_OnValidate_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SupportDeckNameInputMenu_EndOpen__, v15, v16);
    sub_1BCA7E0(&StringLiteral_8764/*"MESSAGE_CHANGE_TITLE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_8762/*"MESSAGE_CHANGE_EXPLANATION"*/, v23, v24);
    byte_4B11701 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.changeName = message;
  sub_1BCA784(&this->fields.changeName, message);
  this->fields.baseName = message;
  sub_1BCA784(&this->fields.baseName, message);
  this->fields.callbackFunc = callback;
  sub_1BCA784(&this->fields.callbackFunc, callback);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8764/*"MESSAGE_CHANGE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8762/*"MESSAGE_CHANGE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_15;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
  UserMessageInputDlg__inputLabelSetup(this, message, v30);
  gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget;
  if ( !gameObject )
    goto LABEL_15;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)gameObject,
                                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  inputTarget = this->fields.inputTarget;
  v35 = (UIInput_OnValidate_o *)sub_1BCAA2C(UIInput_OnValidate_TypeInfo, v32, v33, v34);
  UIInput_OnValidate___ctor(v35, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !inputTarget )
    goto LABEL_15;
  inputTarget->fields.onValidate = v35;
  sub_1BCA784(&inputTarget->fields.onValidate, v35);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL),
        cancelLabel = this->fields.cancelLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(gameObject, v26);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))gameObject->klass[1]._1.namespaze)(
    gameObject,
    0LL,
    gameObject->klass[1]._1.byval_arg.data);
  this->fields.state = 1;
  this->fields.isFirstSelected = 0;
  v41 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v38, v39, v40);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_SupportDeckNameInputMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
}


void __fastcall UserMessageInputDlg__Update(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UIInput_o *inputTarget; // x0

  if ( (byte_4B11702 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11702 = 1;
  }
  inputTarget = this->fields.inputTarget;
  if ( !inputTarget )
    goto LABEL_9;
  if ( UIInput__get_isSelected(inputTarget, 0LL) && !this->fields.isFirstSelected )
  {
    inputTarget = this->fields.inputTarget;
    this->fields.isFirstSelected = 1;
    if ( inputTarget )
    {
      UIInput__set_value(inputTarget, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_9:
    sub_1BCAA3C(inputTarget, method);
  }
}


System_String_o *__fastcall UserMessageInputDlg__get_closeBtnPath(
        UserMessageInputDlg_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11705 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3220/*"BaseWindow/CancleButton"*/, method, v2);
    byte_4B11705 = 1;
  }
  return (System_String_o *)StringLiteral_3220/*"BaseWindow/CancleButton"*/;
}


void __fastcall UserMessageInputDlg__inputLabelSetup(
        UserMessageInputDlg_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  UIInput_o *inputTarget; // x20
  struct UIInput_o *v10; // x8
  struct UIInput_o *v11; // x8
  struct UIInput_o *v12; // x8
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B11704 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, message, method);
    sub_1BCA7E0(&StringLiteral_8763/*"MESSAGE_CHANGE_NO_INPUT"*/, v5, v6);
    byte_4B11704 = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(message, 0LL);
  inputTarget = this->fields.inputTarget;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_8763/*"MESSAGE_CHANGE_NO_INPUT"*/, 0LL);
    if ( inputTarget )
    {
      UIInput__set_value(inputTarget, IsNullOrEmpty, 0LL);
      v10 = this->fields.inputTarget;
      if ( v10 )
      {
        IsNullOrEmpty = (System_String_o *)v10->fields.label;
        if ( IsNullOrEmpty )
        {
          UILabel__set_effectStyle((UILabel_o *)IsNullOrEmpty, 0, 0LL);
          v11 = this->fields.inputTarget;
          if ( v11 )
          {
            IsNullOrEmpty = (System_String_o *)v11->fields.label;
            if ( IsNullOrEmpty )
            {
              v13.fields.r = 0.6;
              v13.fields.a = 1.0;
              v13.fields.g = 0.6;
              v13.fields.b = 0.6;
              UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v13, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_16:
    sub_1BCAA3C(IsNullOrEmpty, v8);
  }
  if ( !inputTarget )
    goto LABEL_16;
  UIInput__set_value(this->fields.inputTarget, message, 0LL);
  v12 = this->fields.inputTarget;
  if ( !v12 )
    goto LABEL_16;
  IsNullOrEmpty = (System_String_o *)v12->fields.label;
  if ( !IsNullOrEmpty )
    goto LABEL_16;
  UILabel__set_effectStyle((UILabel_o *)IsNullOrEmpty, 3, 0LL);
}