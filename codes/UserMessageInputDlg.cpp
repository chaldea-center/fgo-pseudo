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

  if ( (byte_42AEF9C & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AEF9C = 1;
  }
  nameInput = this->fields.nameInput;
  if ( !nameInput )
LABEL_17:
    sub_B52A5C(nameInput, method);
  Text = UILineInput__GetText(nameInput, 0LL);
  this->fields.changeName = Text;
  p_changeName = &this->fields.changeName;
  sub_B52920(
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
  v15 = System_String__Trim_44555648((System_String_o *)nameInput, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  const MethodInfo *v29; // x2
  struct UIInput_o *inputTarget; // x20
  UIInput_OnValidate_o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v40; // x20

  if ( (byte_42AEF9A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B52984(&Method_EmojiUtility_ValidateNameText__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UIInput_OnValidate_TypeInfo);
    sub_B52984(&Method_SupportDeckNameInputMenu_EndOpen__);
    sub_B52984(&StringLiteral_8795/*"MESSAGE_CHANGE_TITLE"*/);
    sub_B52984(&StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B52984(&StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B52984(&StringLiteral_8793/*"MESSAGE_CHANGE_EXPLANATION"*/);
    byte_42AEF9A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.changeName = message;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.changeName,
    (System_Int32_array **)message,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.baseName = message;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseName,
    (System_Int32_array **)message,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8795/*"MESSAGE_CHANGE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8793/*"MESSAGE_CHANGE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_16;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
  UserMessageInputDlg__inputLabelSetup(this, message, v29);
  gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget;
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             (UnityEngine_Component_o *)gameObject,
                                             (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  inputTarget = this->fields.inputTarget;
  v31 = (UIInput_OnValidate_o *)sub_B52A54(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v31, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !inputTarget )
    goto LABEL_16;
  inputTarget->fields.onValidate = v31;
  sub_B52920(
    (BattleServantConfConponent_o *)&inputTarget->fields.onValidate,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL),
        cancelLabel = this->fields.cancelLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_16:
    sub_B52A5C(gameObject, v8);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))gameObject->klass[1]._1.namespaze)(
    gameObject,
    0LL,
    gameObject->klass[1]._1.byval_arg.data);
  this->fields.isFirstSelected = 0;
  this->fields.state = 1;
  v40 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_SupportDeckNameInputMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0LL);
}


void __fastcall UserMessageInputDlg__Update(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  UIInput_o *inputTarget; // x0

  if ( (byte_42AEF9B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AEF9B = 1;
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
    sub_B52A5C(inputTarget, method);
  }
}


System_String_o *__fastcall UserMessageInputDlg__get_closeBtnPath(
        UserMessageInputDlg_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AEF9E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_2775/*"BaseWindow/CancleButton"*/);
    byte_42AEF9E = 1;
  }
  return (System_String_o *)StringLiteral_2775/*"BaseWindow/CancleButton"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserMessageInputDlg__inputLabelSetup(
        UserMessageInputDlg_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  System_String_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
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

  if ( (byte_42AEF9D & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_8794/*"MESSAGE_CHANGE_NO_INPUT"*/);
    byte_42AEF9D = 1;
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
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_8794/*"MESSAGE_CHANGE_NO_INPUT"*/, 0LL);
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
            UnityEngine_Color___ctor_41463668(
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
    sub_B52A5C(IsNullOrEmpty, v6);
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