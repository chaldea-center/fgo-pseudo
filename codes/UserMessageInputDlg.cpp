void __fastcall UserMessageInputDlg___ctor(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  SupportDeckNameInputMenu___ctor((SupportDeckNameInputMenu_o *)this, 0LL);
}


void __fastcall UserMessageInputDlg__OnChangeInput(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  UILineInput_o *nameInput; // x0
  struct System_String_o *Text; // x0
  System_String_o **p_changeName; // x20
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
  struct UICommonButton_o *decideButton; // x0

  if ( (byte_40F9744 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F9744 = 1;
  }
  nameInput = this->fields.nameInput;
  if ( !nameInput )
LABEL_17:
    sub_B170D4();
  Text = UILineInput__GetText(nameInput, 0LL);
  this->fields.changeName = Text;
  p_changeName = &this->fields.changeName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.changeName,
    (System_Int32_array **)Text,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( System_String__IsNullOrEmpty(this->fields.changeName, 0LL) )
    goto LABEL_5;
  if ( !*p_changeName )
    goto LABEL_17;
  v16 = System_String__Trim_43731064(*p_changeName, 0LL);
  if ( !System_String__op_Equality(v16, (System_String_o *)StringLiteral_1, 0LL)
    && !System_String__op_Equality(this->fields.changeName, this->fields.baseName, 0LL) )
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
  v15 = 0LL;
LABEL_15:
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_17;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))decideButton->klass->vtable._5_set_isEnabled.method)(
    decideButton,
    v15,
    decideButton->klass->vtable._6_OnInit.methodPtr);
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
  System_String_o *v36; // x0
  UILabel_o *explanationLabel; // x21
  System_String_o *v38; // x0
  const MethodInfo *v39; // x2
  UnityEngine_Component_o *inputTarget; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  struct UIInput_o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  UIInput_OnValidate_o *v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UILabel_o *decideLabel; // x20
  System_String_o *v55; // x0
  UILabel_o *cancelLabel; // x20
  System_String_o *v57; // x0
  struct UICommonButton_o *decideButton; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  System_Action_o *v63; // x20

  if ( (byte_40F9742 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, message);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_B16FFC(&Method_EmojiUtility_ValidateNameText__, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&UIInput_OnValidate_TypeInfo, v10);
    sub_B16FFC(&Method_SupportDeckNameInputMenu_EndOpen__, v11);
    sub_B16FFC(&StringLiteral_8713, v12);
    sub_B16FFC(&StringLiteral_3253, v13);
    sub_B16FFC(&StringLiteral_3251, v14);
    sub_B16FFC(&StringLiteral_8711, v15);
    byte_40F9742 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.changeName = message;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.changeName,
    (System_Int32_array **)message,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.baseName = message;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseName,
    (System_Int32_array **)message,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.callbackFunc = callback;
  sub_B16F98(
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
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_8713, 0LL);
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, v36, 0LL);
  explanationLabel = this->fields.explanationLabel;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_8711, 0LL);
  if ( !explanationLabel )
    goto LABEL_16;
  UILabel__set_text(explanationLabel, v38, 0LL);
  UserMessageInputDlg__inputLabelSetup(this, message, v39);
  inputTarget = (UnityEngine_Component_o *)this->fields.inputTarget;
  if ( !inputTarget )
    goto LABEL_16;
  Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        inputTarget,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_WebViewObject )
    goto LABEL_16;
  UnityEngine_Collider__set_enabled(Component_WebViewObject, 0, 0LL);
  v42 = this->fields.inputTarget;
  v47 = (UIInput_OnValidate_o *)sub_B170CC(UIInput_OnValidate_TypeInfo, v43, v44, v45, v46);
  UIInput_OnValidate___ctor(v47, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !v42 )
    goto LABEL_16;
  v42->fields.onValidate = v47;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v42->fields.onValidate,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  decideLabel = this->fields.decideLabel;
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_3253, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, v55, 0LL),
        cancelLabel = this->fields.cancelLabel,
        v57 = LocalizationManager__Get((System_String_o *)StringLiteral_3251, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, v57, 0LL), (decideButton = this->fields.decideButton) == 0LL) )
  {
LABEL_16:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, Il2CppMethodPointer))decideButton->klass->vtable._5_set_isEnabled.method)(
    decideButton,
    0LL,
    decideButton->klass->vtable._6_OnInit.methodPtr);
  this->fields.isFirstSelected = 0;
  this->fields.state = 1;
  v63 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v59, v60, v61, v62);
  System_Action___ctor(v63, (Il2CppObject *)this, Method_SupportDeckNameInputMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v63, 0, 0LL);
}


void __fastcall UserMessageInputDlg__Update(UserMessageInputDlg_o *this, const MethodInfo *method)
{
  UIInput_o *inputTarget; // x0
  UIInput_o *v4; // x0

  if ( (byte_40F9743 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F9743 = 1;
  }
  inputTarget = this->fields.inputTarget;
  if ( !inputTarget )
    goto LABEL_9;
  if ( UIInput__get_isSelected(inputTarget, 0LL) && !this->fields.isFirstSelected )
  {
    v4 = this->fields.inputTarget;
    this->fields.isFirstSelected = 1;
    if ( v4 )
    {
      UIInput__set_value(v4, (System_String_o *)StringLiteral_1, 0LL);
      return;
    }
LABEL_9:
    sub_B170D4();
  }
}


System_String_o *__fastcall UserMessageInputDlg__get_closeBtnPath(
        UserMessageInputDlg_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F9746 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2731, method);
    byte_40F9746 = 1;
  }
  return (System_String_o *)StringLiteral_2731;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserMessageInputDlg__inputLabelSetup(
        UserMessageInputDlg_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool IsNullOrEmpty; // w0
  UIInput_o *inputTarget; // x20
  System_String_o *v8; // x0
  struct UIInput_o *v9; // x8
  UILabel_o *label; // x0
  int v11; // s3
  float v12; // s4
  float v13; // s5
  float v14; // s6
  struct UIInput_o *v15; // x8
  UIWidget_o *v16; // x19
  int v17; // s0
  int v18; // s1
  int v19; // s2
  struct UIInput_o *v20; // x8
  UILabel_o *v21; // x0
  UnityEngine_Color_o v22; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_40F9745 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, message);
    sub_B16FFC(&StringLiteral_8712, v5);
    byte_40F9745 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(message, 0LL);
  inputTarget = this->fields.inputTarget;
  if ( IsNullOrEmpty )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8712, 0LL);
    if ( inputTarget )
    {
      UIInput__set_value(inputTarget, v8, 0LL);
      v9 = this->fields.inputTarget;
      if ( v9 )
      {
        label = v9->fields.label;
        if ( label )
        {
          UILabel__set_effectStyle(label, 0, 0LL);
          v15 = this->fields.inputTarget;
          if ( v15 )
          {
            v16 = (UIWidget_o *)v15->fields.label;
            v17 = 1058642330;
            *(_QWORD *)&v22.fields.r = 0LL;
            *(_QWORD *)&v22.fields.b = 0LL;
            v18 = 1058642330;
            v19 = 1058642330;
            UnityEngine_Color___ctor_40666012(
              *(UnityEngine_Color_o *)(&v11 - 3),
              v12,
              v13,
              v14,
              (const MethodInfo *)&v22);
            if ( v16 )
            {
              UIWidget__set_color(v16, v22, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_17:
    sub_B170D4();
  }
  if ( !inputTarget )
    goto LABEL_17;
  UIInput__set_value(this->fields.inputTarget, message, 0LL);
  v20 = this->fields.inputTarget;
  if ( !v20 )
    goto LABEL_17;
  v21 = v20->fields.label;
  if ( !v21 )
    goto LABEL_17;
  UILabel__set_effectStyle(v21, 3, 0LL);
}