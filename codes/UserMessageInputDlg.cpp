void __fastcall UserMessageInputDlg___ctor(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  SupportDeckNameInputMenu___ctor((SupportDeckNameInputMenu_o *)this, 0LL);
}


void __fastcall UserMessageInputDlg__OnChangeInput(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILineInput_o *nameInput; // x0
  struct System_String_o *Text; // x0
  struct System_String_o **p_changeName; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_o *v14; // x20
  int32_t v15; // w21
  uint16_t Chars; // w0
  System_String_o *v17; // x0

  if ( (byte_42E719C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E719C = 1;
  }
  nameInput = this->fields.nameInput;
  if ( !nameInput )
LABEL_17:
    sub_B5D69C(nameInput, method);
  Text = UILineInput__GetText(nameInput, 0LL);
  this->fields.changeName = Text;
  p_changeName = &this->fields.changeName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.changeName,
    (System_Int32_array **)Text,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  nameInput = (UILineInput_o *)System_String__IsNullOrEmpty(this->fields.changeName, 0LL);
  if ( ((unsigned __int8)nameInput & 1) != 0 )
    goto LABEL_5;
  nameInput = (UILineInput_o *)*p_changeName;
  if ( !*p_changeName )
    goto LABEL_17;
  v17 = System_String__Trim_44565120((System_String_o *)nameInput, 0LL);
  if ( !System_String__op_Equality(v17, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    nameInput = (UILineInput_o *)System_String__op_Equality(this->fields.changeName, this->fields.baseName, 0LL);
    if ( ((unsigned __int8)nameInput & 1) == 0 )
    {
LABEL_5:
      v14 = *p_changeName;
      if ( !v14 )
        goto LABEL_17;
      if ( v14->fields.m_stringLength < 1 )
      {
LABEL_10:
        method = (const MethodInfo *)(&dword_0 + 1);
        goto LABEL_15;
      }
      v15 = 0;
      while ( 1 )
      {
        Chars = System_String__get_Chars(v14, v15, 0LL);
        if ( EmojiUtility__IsEmojiChar(Chars, 0LL) )
          break;
        if ( ++v15 >= v14->fields.m_stringLength )
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  const MethodInfo *v56; // x2
  struct UIInput_o *inputTarget; // x20
  UIInput_OnValidate_o *v58; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v67; // x20

  if ( (byte_42E719A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)message, (_DWORD)callback, method);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, v7, v8, v9);
    sub_B5D5C4(&Method_EmojiUtility_ValidateNameText__, v10, v11, v12);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UIInput_OnValidate_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SupportDeckNameInputMenu_EndOpen__, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_8832/*"MESSAGE_CHANGE_TITLE"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_8830/*"MESSAGE_CHANGE_EXPLANATION"*/, v31, v32, v33);
    byte_42E719A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.changeName = message;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.changeName,
    (System_Int32_array **)message,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.baseName = message;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseName,
    (System_Int32_array **)message,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8832/*"MESSAGE_CHANGE_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8830/*"MESSAGE_CHANGE_EXPLANATION"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_16;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
  UserMessageInputDlg__inputLabelSetup(this, message, v56);
  gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget;
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                             (UnityEngine_Component_o *)gameObject,
                                             (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  inputTarget = this->fields.inputTarget;
  v58 = (UIInput_OnValidate_o *)sub_B5D694(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v58, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !inputTarget )
    goto LABEL_16;
  inputTarget->fields.onValidate = v58;
  sub_B5D560(
    (BattleServantConfConponent_o *)&inputTarget->fields.onValidate,
    (System_Int32_array **)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL),
        cancelLabel = this->fields.cancelLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_16:
    sub_B5D69C(gameObject, v35);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))gameObject->klass[1]._1.namespaze)(
    gameObject,
    0LL,
    gameObject->klass[1]._1.byval_arg.data);
  this->fields.isFirstSelected = 0;
  this->fields.state = 1;
  v67 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v67, (Il2CppObject *)this, Method_SupportDeckNameInputMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v67, 0, 0LL);
}


void __fastcall UserMessageInputDlg__Update(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UIInput_o *inputTarget; // x0

  if ( (byte_42E719B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E719B = 1;
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
    sub_B5D69C(inputTarget, method);
  }
}


System_String_o *__fastcall UserMessageInputDlg__get_closeBtnPath(
        UserMessageInputDlg_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E719E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2797/*"BaseWindow/CancleButton"*/, (_DWORD)method, v2, v3);
    byte_42E719E = 1;
  }
  return (System_String_o *)StringLiteral_2797/*"BaseWindow/CancleButton"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserMessageInputDlg__inputLabelSetup(
        UserMessageInputDlg_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_o *IsNullOrEmpty; // x0
  __int64 v10; // x1
  UIInput_o *inputTarget; // x20
  struct UIInput_o *v12; // x8
  int v13; // s3
  float v14; // s4
  float v15; // s5
  float v16; // s6
  struct UIInput_o *v17; // x8
  UIWidget_o *label; // x19
  int v19; // s0
  int v20; // s1
  int v21; // s2
  struct UIInput_o *v22; // x8
  UnityEngine_Color_o v23; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_42E719D & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)message, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_8831/*"MESSAGE_CHANGE_NO_INPUT"*/, v6, v7, v8);
    byte_42E719D = 1;
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
    IsNullOrEmpty = LocalizationManager__Get((System_String_o *)StringLiteral_8831/*"MESSAGE_CHANGE_NO_INPUT"*/, 0LL);
    if ( inputTarget )
    {
      UIInput__set_value(inputTarget, IsNullOrEmpty, 0LL);
      v12 = this->fields.inputTarget;
      if ( v12 )
      {
        IsNullOrEmpty = (System_String_o *)v12->fields.label;
        if ( IsNullOrEmpty )
        {
          UILabel__set_effectStyle((UILabel_o *)IsNullOrEmpty, 0, 0LL);
          v17 = this->fields.inputTarget;
          if ( v17 )
          {
            label = (UIWidget_o *)v17->fields.label;
            v19 = 1058642330;
            *(_QWORD *)&v23.fields.r = 0LL;
            *(_QWORD *)&v23.fields.b = 0LL;
            v20 = 1058642330;
            v21 = 1058642330;
            UnityEngine_Color___ctor_41567816(
              *(UnityEngine_Color_o *)(&v13 - 3),
              v14,
              v15,
              v16,
              (const MethodInfo *)&v23);
            if ( label )
            {
              UIWidget__set_color(label, v23, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_17:
    sub_B5D69C(IsNullOrEmpty, v10);
  }
  if ( !inputTarget )
    goto LABEL_17;
  UIInput__set_value(this->fields.inputTarget, message, 0LL);
  v22 = this->fields.inputTarget;
  if ( !v22 )
    goto LABEL_17;
  IsNullOrEmpty = (System_String_o *)v22->fields.label;
  if ( !IsNullOrEmpty )
    goto LABEL_17;
  UILabel__set_effectStyle((UILabel_o *)IsNullOrEmpty, 3, 0LL);
}