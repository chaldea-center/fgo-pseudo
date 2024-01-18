void __fastcall UserMessageInputDlg___ctor(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  SupportDeckNameInputMenu___ctor((SupportDeckNameInputMenu_o *)this, 0LL);
}


void __fastcall UserMessageInputDlg__OnChangeInput(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  UILineInput_o *nameInput; // x0
  struct System_String_o *Text; // x0
  struct System_String_o **p_changeName; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_o *v12; // x20
  int32_t v13; // w21
  uint16_t Chars; // w0
  System_String_o *v15; // x0

  if ( (byte_418703A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418703A = 1;
  }
  nameInput = this->fields.nameInput;
  if ( !nameInput )
LABEL_17:
    sub_B2C434(nameInput, method);
  Text = UILineInput__GetText(nameInput, 0LL);
  this->fields.changeName = Text;
  p_changeName = &this->fields.changeName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.changeName,
    (System_Int32_array **)Text,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  nameInput = (UILineInput_o *)System_String__IsNullOrEmpty(this->fields.changeName, 0LL);
  if ( ((unsigned __int8)nameInput & 1) != 0 )
    goto LABEL_5;
  nameInput = (UILineInput_o *)*p_changeName;
  if ( !*p_changeName )
    goto LABEL_17;
  v15 = System_String__Trim_44292864((System_String_o *)nameInput, 0LL);
  if ( !System_String__op_Equality(v15, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    nameInput = (UILineInput_o *)System_String__op_Equality(this->fields.changeName, this->fields.baseName, 0LL);
    if ( ((unsigned __int8)nameInput & 1) == 0 )
    {
LABEL_5:
      v12 = *p_changeName;
      if ( !v12 )
        goto LABEL_17;
      if ( v12->fields.m_stringLength < 1 )
      {
LABEL_10:
        method = (const MethodInfo *)(&dword_0 + 1);
        goto LABEL_15;
      }
      v13 = 0;
      while ( 1 )
      {
        Chars = System_String__get_Chars(v12, v13, 0LL);
        if ( EmojiUtility__IsEmojiChar(Chars, 0LL) )
          break;
        if ( ++v13 >= v12->fields.m_stringLength )
          goto LABEL_10;
      }
    }
  }
  method = 0LL;
LABEL_15:
  nameInput = (UILineInput_o *)this->fields.decideButton;
  if ( !nameInput )
    goto LABEL_17;
  ((void (__fastcall *)(UILineInput_o *, const MethodInfo *, void *))nameInput->klass[1]._1.namespaze)(
    nameInput,
    method,
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  const MethodInfo *v38; // x2
  struct UIInput_o *inputTarget; // x20
  UIInput_OnValidate_o *v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v49; // x20

  if ( (byte_4187038 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, message);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_B2C35C(&Method_EmojiUtility_ValidateNameText__, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&UIInput_OnValidate_TypeInfo, v10);
    sub_B2C35C(&Method_SupportDeckNameInputMenu_EndOpen__, v11);
    sub_B2C35C(&StringLiteral_8742/*"MESSAGE_CHANGE_TITLE"*/, v12);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v13);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v14);
    sub_B2C35C(&StringLiteral_8740/*"MESSAGE_CHANGE_EXPLANATION"*/, v15);
    byte_4187038 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.changeName = message;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.changeName,
    (System_Int32_array **)message,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.baseName = message;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseName,
    (System_Int32_array **)message,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8742/*"MESSAGE_CHANGE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8740/*"MESSAGE_CHANGE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_16;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
  UserMessageInputDlg__inputLabelSetup(this, message, v38);
  gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget;
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             (UnityEngine_Component_o *)gameObject,
                                             (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  inputTarget = this->fields.inputTarget;
  v40 = (UIInput_OnValidate_o *)sub_B2C42C(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v40, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !inputTarget )
    goto LABEL_16;
  inputTarget->fields.onValidate = v40;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&inputTarget->fields.onValidate,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL),
        cancelLabel = this->fields.cancelLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_16:
    sub_B2C434(gameObject, v17);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))gameObject->klass[1]._1.namespaze)(
    gameObject,
    0LL,
    gameObject->klass[1]._1.byval_arg.data);
  this->fields.isFirstSelected = 0;
  this->fields.state = 1;
  v49 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v49, (Il2CppObject *)this, Method_SupportDeckNameInputMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0LL);
}


void __fastcall UserMessageInputDlg__Update(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  UIInput_o *inputTarget; // x0

  if ( (byte_4187039 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4187039 = 1;
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
    sub_B2C434(inputTarget, method);
  }
}


System_String_o *__fastcall UserMessageInputDlg__get_closeBtnPath(
        UserMessageInputDlg_o *this,
        const MethodInfo *method)
{
  if ( (byte_418703C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2743/*"BaseWindow/CancleButton"*/, method);
    byte_418703C = 1;
  }
  return (System_String_o *)StringLiteral_2743/*"BaseWindow/CancleButton"*/;
}


// local variable allocation has failed, the output may be wrong!
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
  int v10; // s3
  float v11; // s4
  float v12; // s5
  float v13; // s6
  struct UIInput_o *v14; // x8
  UIWidget_o *label; // x19
  int v16; // s0
  int v17; // s1
  int v18; // s2
  struct UIInput_o *v19; // x8
  UnityEngine_Color_o v20; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_418703B & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, message);
    sub_B2C35C(&StringLiteral_8741/*"MESSAGE_CHANGE_NO_INPUT"*/, v5);
    byte_418703B = 1;
  }
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(message, 0LL);
  inputTarget = this->fields.inputTarget;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_8741/*"MESSAGE_CHANGE_NO_INPUT"*/, 0LL);
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
          v14 = this->fields.inputTarget;
          if ( v14 )
          {
            label = (UIWidget_o *)v14->fields.label;
            v16 = 1058642330;
            *(_QWORD *)&v20.fields.r = 0LL;
            *(_QWORD *)&v20.fields.b = 0LL;
            v17 = 1058642330;
            v18 = 1058642330;
            UnityEngine_Color___ctor_40633184(
              *(UnityEngine_Color_o *)(&v10 - 3),
              v11,
              v12,
              v13,
              (const MethodInfo *)&v20);
            if ( label )
            {
              UIWidget__set_color(label, v20, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_17:
    sub_B2C434(IsNullOrEmpty, v7);
  }
  if ( !inputTarget )
    goto LABEL_17;
  UIInput__set_value(this->fields.inputTarget, message, 0LL);
  v19 = this->fields.inputTarget;
  if ( !v19 )
    goto LABEL_17;
  IsNullOrEmpty = (System_String_o *)v19->fields.label;
  if ( !IsNullOrEmpty )
    goto LABEL_17;
  UILabel__set_effectStyle((UILabel_o *)IsNullOrEmpty, 3, 0LL);
}