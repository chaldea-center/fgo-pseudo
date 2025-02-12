void __fastcall UserMessageInputDlg___ctor(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  SupportDeckNameInputMenu___ctor((SupportDeckNameInputMenu_o *)this, 0LL);
}


void __fastcall UserMessageInputDlg__OnChangeInput(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  UILineInput_o *nameInput; // x0
  struct System_String_o **p_changeName; // x20
  System_String_o *v5; // x0
  bool v6; // w8
  System_String_o *v7; // x20
  int stringLength; // w8
  bool v9; // w22
  int32_t i; // w21
  uint16_t Chars; // w0
  int32_t v12; // w8

  if ( (byte_4BAFB4F & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, method);
    byte_4BAFB4F = 1;
  }
  nameInput = this->fields.nameInput;
  if ( !nameInput )
    goto LABEL_17;
  this->fields.changeName = UILineInput__GetText(nameInput, 0LL);
  p_changeName = &this->fields.changeName;
  sub_1C13CC8(&this->fields.changeName);
  nameInput = (UILineInput_o *)System_String__IsNullOrEmpty(this->fields.changeName, 0LL);
  if ( ((unsigned __int8)nameInput & 1) != 0 )
    goto LABEL_9;
  nameInput = (UILineInput_o *)*p_changeName;
  if ( !*p_changeName )
    goto LABEL_17;
  v5 = System_String__Trim((System_String_o *)nameInput, 0LL);
  if ( System_String__op_Equality(v5, (System_String_o *)StringLiteral_1/*""*/, 0LL)
    || (nameInput = (UILineInput_o *)System_String__op_Equality(this->fields.changeName, this->fields.baseName, 0LL),
        ((unsigned __int8)nameInput & 1) != 0) )
  {
    v6 = 0;
  }
  else
  {
LABEL_9:
    v7 = *p_changeName;
    if ( !v7 )
      goto LABEL_17;
    stringLength = v7->fields._stringLength;
    v9 = stringLength > 0;
    if ( stringLength >= 1 )
    {
      for ( i = 0; i < v12; v9 = i < v12 )
      {
        Chars = System_String__get_Chars(v7, i, 0LL);
        if ( EmojiUtility__IsEmojiChar(Chars, 0LL) )
          break;
        v12 = v7->fields._stringLength;
        ++i;
      }
    }
    v6 = !v9;
  }
  nameInput = (UILineInput_o *)this->fields.decideButton;
  if ( !nameInput )
LABEL_17:
    sub_1C13F80(nameInput, method);
  ((void (__fastcall *)(UILineInput_o *, bool, void *))nameInput->klass[1]._1.namespaze)(
    nameInput,
    v6,
    nameInput->klass[1]._1.byval_arg.data);
}


void __fastcall UserMessageInputDlg__Open(
        UserMessageInputDlg_o *this,
        System_String_o *message,
        SupportDeckNameInputMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  const MethodInfo *v20; // x2
  struct UIInput_o *inputTarget; // x20
  UIInput_OnValidate_o *v22; // x21
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v25; // x20

  if ( (byte_4BAFB4D & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, message);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_1C13D24(&Method_EmojiUtility_ValidateNameText__, v8);
    sub_1C13D24(&LocalizationManager_TypeInfo, v9);
    sub_1C13D24(&UIInput_OnValidate_TypeInfo, v10);
    sub_1C13D24(&Method_SupportDeckNameInputMenu_EndOpen__, v11);
    sub_1C13D24(&StringLiteral_8808/*"MENU_SERVANT_LIST"*/, v12);
    sub_1C13D24(&StringLiteral_3800/*"COMMON"*/, v13);
    sub_1C13D24(&StringLiteral_3798/*"COMMAND_TYPE_NAME_{0}"*/, v14);
    sub_1C13D24(&StringLiteral_8806/*"MENU_SELECT_ITEM_REMOVE"*/, v15);
    byte_4BAFB4D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.changeName = message;
  sub_1C13CC8(&this->fields.changeName);
  this->fields.baseName = message;
  sub_1C13CC8(&this->fields.baseName);
  this->fields.callbackFunc = callback;
  sub_1C13CC8(&this->fields.callbackFunc);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8808/*"MENU_SERVANT_LIST"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8806/*"MENU_SELECT_ITEM_REMOVE"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_15;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
  UserMessageInputDlg__inputLabelSetup(this, message, v20);
  gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget;
  if ( !gameObject )
    goto LABEL_15;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)gameObject,
                                             (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  inputTarget = this->fields.inputTarget;
  v22 = (UIInput_OnValidate_o *)sub_1C13F70(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v22, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !inputTarget )
    goto LABEL_15;
  inputTarget->fields.onValidate = v22;
  sub_1C13CC8(&inputTarget->fields.onValidate);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3800/*"COMMON"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL),
        cancelLabel = this->fields.cancelLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"COMMAND_TYPE_NAME_{0}"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_15:
    sub_1C13F80(gameObject, v17);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))gameObject->klass[1]._1.namespaze)(
    gameObject,
    0LL,
    gameObject->klass[1]._1.byval_arg.data);
  this->fields.state = 1;
  this->fields.isFirstSelected = 0;
  v25 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_SupportDeckNameInputMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v25, 0, 0LL);
}


void __fastcall UserMessageInputDlg__Update(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  UIInput_o *inputTarget; // x0

  if ( (byte_4BAFB4E & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, method);
    byte_4BAFB4E = 1;
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
    sub_1C13F80(inputTarget, method);
  }
}


System_String_o *__fastcall UserMessageInputDlg__get_closeBtnPath(
        UserMessageInputDlg_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BAFB51 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_3231/*"BaseWindow/CacnelButton"*/, method);
    byte_4BAFB51 = 1;
  }
  return (System_String_o *)StringLiteral_3231/*"BaseWindow/CacnelButton"*/;
}


void __fastcall UserMessageInputDlg__inputLabelSetup(
        UserMessageInputDlg_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  UIInput_o *inputTarget; // x20
  struct UIInput_o *v9; // x8
  struct UIInput_o *v10; // x8
  struct UIInput_o *v11; // x8
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BAFB50 & 1) == 0 )
  {
    sub_1C13D24(&LocalizationManager_TypeInfo, message);
    sub_1C13D24(&StringLiteral_8807/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/, v5);
    byte_4BAFB50 = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(message, 0LL);
  inputTarget = this->fields.inputTarget;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_8807/*"MENU_SELECT_ITEM_REMOVE_FOLLOW"*/, 0LL);
    if ( inputTarget )
    {
      UIInput__set_value(inputTarget, IsNullOrEmpty, 0LL);
      v9 = this->fields.inputTarget;
      if ( v9 )
      {
        IsNullOrEmpty = (System_String_o *)v9->fields.label;
        if ( IsNullOrEmpty )
        {
          UILabel__set_effectStyle((UILabel_o *)IsNullOrEmpty, 0, 0LL);
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
              UIWidget__set_color((UIWidget_o *)IsNullOrEmpty, v12, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_16:
    sub_1C13F80(IsNullOrEmpty, v7);
  }
  if ( !inputTarget )
    goto LABEL_16;
  UIInput__set_value(this->fields.inputTarget, message, 0LL);
  v11 = this->fields.inputTarget;
  if ( !v11 )
    goto LABEL_16;
  IsNullOrEmpty = (System_String_o *)v11->fields.label;
  if ( !IsNullOrEmpty )
    goto LABEL_16;
  UILabel__set_effectStyle((UILabel_o *)IsNullOrEmpty, 3, 0LL);
}