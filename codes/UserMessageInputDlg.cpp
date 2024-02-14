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
  __int64 v15; // x1
  System_String_o *v16; // x0

  if ( (byte_4213780 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_4213780 = 1;
  }
  nameInput = this->fields.nameInput;
  if ( !nameInput )
LABEL_17:
    sub_B0D97C(nameInput);
  Text = UILineInput__GetText(nameInput, 0LL);
  this->fields.changeName = Text;
  p_changeName = &this->fields.changeName;
  sub_B0D840(
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
  v16 = System_String__Trim_43837236((System_String_o *)nameInput, 0LL);
  if ( !System_String__op_Equality(v16, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
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
        v15 = 1LL;
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
  v15 = 0LL;
LABEL_15:
  nameInput = (UILineInput_o *)this->fields.decideButton;
  if ( !nameInput )
    goto LABEL_17;
  ((void (__fastcall *)(UILineInput_o *, __int64, void *))nameInput->klass[1]._1.namespaze)(
    nameInput,
    v15,
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  const MethodInfo *v37; // x2
  struct UIInput_o *inputTarget; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  UIInput_OnValidate_o *v41; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  __int64 v50; // x1
  __int64 v51; // x2
  System_Action_o *v52; // x20

  if ( (byte_421377E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, message);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_B0D8A4(&Method_EmojiUtility_ValidateNameText__, v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&UIInput_OnValidate_TypeInfo, v10);
    sub_B0D8A4(&Method_SupportDeckNameInputMenu_EndOpen__, v11);
    sub_B0D8A4(&StringLiteral_8764/*"MESSAGE_CHANGE_TITLE"*/, v12);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v13);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v14);
    sub_B0D8A4(&StringLiteral_8762/*"MESSAGE_CHANGE_EXPLANATION"*/, v15);
    byte_421377E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.changeName = message;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.changeName,
    (System_Int32_array **)message,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.baseName = message;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.baseName,
    (System_Int32_array **)message,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.callbackFunc = callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8764/*"MESSAGE_CHANGE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8762/*"MESSAGE_CHANGE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_16;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
  UserMessageInputDlg__inputLabelSetup(this, message, v37);
  gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget;
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             (UnityEngine_Component_o *)gameObject,
                                             (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  inputTarget = this->fields.inputTarget;
  v41 = (UIInput_OnValidate_o *)sub_B0D974(UIInput_OnValidate_TypeInfo, v39, v40);
  UIInput_OnValidate___ctor(v41, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !inputTarget )
    goto LABEL_16;
  inputTarget->fields.onValidate = v41;
  sub_B0D840(
    (BattleServantConfConponent_o *)&inputTarget->fields.onValidate,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL),
        cancelLabel = this->fields.cancelLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_16:
    sub_B0D97C(gameObject);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))gameObject->klass[1]._1.namespaze)(
    gameObject,
    0LL,
    gameObject->klass[1]._1.byval_arg.data);
  this->fields.isFirstSelected = 0;
  this->fields.state = 1;
  v52 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v50, v51);
  System_Action___ctor(v52, (Il2CppObject *)this, Method_SupportDeckNameInputMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v52, 0, 0LL);
}


void __fastcall UserMessageInputDlg__Update(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  UIInput_o *inputTarget; // x0

  if ( (byte_421377F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_421377F = 1;
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
    sub_B0D97C(inputTarget);
  }
}


System_String_o *__fastcall UserMessageInputDlg__get_closeBtnPath(
        UserMessageInputDlg_o *this,
        const MethodInfo *method)
{
  if ( (byte_4213782 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_2754/*"BaseWindow/CancleButton"*/, method);
    byte_4213782 = 1;
  }
  return (System_String_o *)StringLiteral_2754/*"BaseWindow/CancleButton"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserMessageInputDlg__inputLabelSetup(
        UserMessageInputDlg_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *IsNullOrEmpty; // x0
  UIInput_o *inputTarget; // x20
  struct UIInput_o *v8; // x8
  int v9; // s3
  float v10; // s4
  float v11; // s5
  float v12; // s6
  struct UIInput_o *v13; // x8
  UIWidget_o *label; // x19
  int v15; // s0
  int v16; // s1
  int v17; // s2
  struct UIInput_o *v18; // x8
  UnityEngine_Color_o v19; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4213781 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, message);
    sub_B0D8A4(&StringLiteral_8763/*"MESSAGE_CHANGE_NO_INPUT"*/, v5);
    byte_4213781 = 1;
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
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_8763/*"MESSAGE_CHANGE_NO_INPUT"*/, 0LL);
    if ( inputTarget )
    {
      UIInput__set_value(inputTarget, IsNullOrEmpty, 0LL);
      v8 = this->fields.inputTarget;
      if ( v8 )
      {
        IsNullOrEmpty = (System_String_o *)v8->fields.label;
        if ( IsNullOrEmpty )
        {
          UILabel__set_effectStyle((UILabel_o *)IsNullOrEmpty, 0, 0LL);
          v13 = this->fields.inputTarget;
          if ( v13 )
          {
            label = (UIWidget_o *)v13->fields.label;
            v15 = 1058642330;
            *(_QWORD *)&v19.fields.r = 0LL;
            *(_QWORD *)&v19.fields.b = 0LL;
            v16 = 1058642330;
            v17 = 1058642330;
            UnityEngine_Color___ctor_40757524(
              *(UnityEngine_Color_o *)(&v9 - 3),
              v10,
              v11,
              v12,
              (const MethodInfo *)&v19);
            if ( label )
            {
              UIWidget__set_color(label, v19, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_17:
    sub_B0D97C(IsNullOrEmpty);
  }
  if ( !inputTarget )
    goto LABEL_17;
  UIInput__set_value(this->fields.inputTarget, message, 0LL);
  v18 = this->fields.inputTarget;
  if ( !v18 )
    goto LABEL_17;
  IsNullOrEmpty = (System_String_o *)v18->fields.label;
  if ( !IsNullOrEmpty )
    goto LABEL_17;
  UILabel__set_effectStyle((UILabel_o *)IsNullOrEmpty, 3, 0LL);
}