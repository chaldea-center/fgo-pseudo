void __fastcall NoTitleDialog___cctor(const MethodInfo *method)
{
  NoTitleDialog_c *v1; // x8

  if ( (byte_438BA7D & 1) == 0 )
  {
    sub_B775C4(&NoTitleDialog_TypeInfo);
    byte_438BA7D = 1;
  }
  NoTitleDialog_TypeInfo->static_fields->MESSAGE_WINDOW_SIZE_X_DEF = 780;
  NoTitleDialog_TypeInfo->static_fields->MESSAGE_WINDOW_SIZE_Y_DEF = 480;
  v1 = NoTitleDialog_TypeInfo;
  NoTitleDialog_TypeInfo->static_fields->MESSAGE_LABEL_SIZE_X_DEF = 700;
  v1->static_fields->MESSAGE_LABEL_SIZE_Y_DEF = 340;
  v1->static_fields->MESSAGE_LABEL_POS_Y_DEF = 20;
  v1->static_fields->MESSAGE_WINDOW_SIZE_X = 853;
  v1->static_fields->MESSAGE_LABEL_SIZE_X = 780;
  v1->static_fields->MESSAGE_LABEL_SIZE_Y = 346;
  v1->static_fields->MESSAGE_LABEL_POS_Y = 35;
}


void __fastcall NoTitleDialog___ctor(NoTitleDialog_o *this, const MethodInfo *method)
{
  if ( (byte_438BA7C & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438BA7C = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall NoTitleDialog__CallOnClick(NoTitleDialog_o *this, bool result, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_onClick; // x20
  System_Action_bool__o *v11; // x21
  struct System_Action_bool__o *onClick; // t1

  if ( (byte_438BA7B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool__Invoke__);
    byte_438BA7B = 1;
  }
  onClick = this->fields.onClick;
  p_onClick = (BattleServantConfConponent_o *)&this->fields.onClick;
  v11 = onClick;
  if ( onClick )
  {
    p_onClick->klass = 0LL;
    sub_B77560(p_onClick, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action_bool___Invoke(v11, result, (const MethodInfo_269C934 *)Method_System_Action_bool__Invoke__);
  }
}


void __fastcall NoTitleDialog__Close(NoTitleDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NoTitleDialog__Close_26237292(this, 0LL, v2);
}


void __fastcall NoTitleDialog__Close_26237292(
        NoTitleDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_438BA75 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_NoTitleDialog_EndClose__);
    byte_438BA75 = 1;
  }
  this->fields.onClose = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_NoTitleDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall NoTitleDialog__EndClose(NoTitleDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_onClose; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *onClose; // t1

  NoTitleDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  onClose = this->fields.onClose;
  p_onClose = (BattleServantConfConponent_o *)&this->fields.onClose;
  v12 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0LL;
    sub_B77560(p_onClose, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall NoTitleDialog__EndOpen(NoTitleDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall NoTitleDialog__Init(NoTitleDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  UIWidget_o *window; // x20
  UIWidget_o *messageLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_438BA72 & 1) == 0 )
  {
    sub_B775C4(&NoTitleDialog_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438BA72 = 1;
  }
  NoTitleDialog__SetLabelText(this, this->fields.messageLabel, (System_String_o *)StringLiteral_1/*""*/, v2);
  NoTitleDialog__SetLabelText(this, this->fields.buttonDecideLabel, (System_String_o *)StringLiteral_1/*""*/, v4);
  NoTitleDialog__SetLabelText(this, this->fields.buttonCancelLabel, (System_String_o *)StringLiteral_1/*""*/, v5);
  window = (UIWidget_o *)this->fields.window;
  messageLabel = (UIWidget_o *)NoTitleDialog_TypeInfo;
  if ( (BYTE3(NoTitleDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NoTitleDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoTitleDialog_TypeInfo);
  }
  if ( !window )
    goto LABEL_13;
  UIWidget__set_width(window, NoTitleDialog_TypeInfo->static_fields->MESSAGE_WINDOW_SIZE_X_DEF, 0LL);
  messageLabel = (UIWidget_o *)this->fields.window;
  if ( !messageLabel )
    goto LABEL_13;
  UIWidget__set_height(messageLabel, NoTitleDialog_TypeInfo->static_fields->MESSAGE_WINDOW_SIZE_Y_DEF, 0LL);
  messageLabel = (UIWidget_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_13;
  UIWidget__set_width(messageLabel, NoTitleDialog_TypeInfo->static_fields->MESSAGE_LABEL_SIZE_X_DEF, 0LL);
  messageLabel = (UIWidget_o *)this->fields.messageLabel;
  if ( !messageLabel
    || (UIWidget__set_height(messageLabel, NoTitleDialog_TypeInfo->static_fields->MESSAGE_LABEL_SIZE_Y_DEF, 0LL),
        (messageLabel = (UIWidget_o *)this->fields.messageLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL),
        GameObjectExtensions__SetLocalPositionY(
          gameObject,
          (float)NoTitleDialog_TypeInfo->static_fields->MESSAGE_LABEL_POS_Y_DEF,
          0LL),
        this->fields.isButtonEnable = 0,
        (messageLabel = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_13:
    sub_B7769C(messageLabel, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall NoTitleDialog__OnClickCancel(NoTitleDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_438BA79 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438BA79 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    this->fields.isButtonEnable = 0;
    NoTitleDialog__CallOnClick(this, 0, v3);
  }
}


void __fastcall NoTitleDialog__OnClickClose(NoTitleDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_438BA7A & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438BA7A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this->fields.isButtonEnable = 0;
    NoTitleDialog__CallOnClick(this, 0, v3);
  }
}


void __fastcall NoTitleDialog__OnClickDecide(NoTitleDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_438BA77 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438BA77 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    this->fields.isButtonEnable = 0;
    NoTitleDialog__CallOnClick(this, 1, v3);
  }
}


void __fastcall NoTitleDialog__OnClickDecide2(NoTitleDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_438BA78 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438BA78 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    this->fields.isButtonEnable = 0;
    NoTitleDialog__CallOnClick(this, 1, v3);
  }
}


void __fastcall NoTitleDialog__Open(
        NoTitleDialog_o *this,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancleTxt,
        System_Action_bool__o *onClick,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x3
  System_String_o *v20; // x2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  UnityEngine_GameObject_o *v23; // x20
  System_Action_o *v24; // x20

  if ( (byte_438BA73 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AndroidBackKeyManager_TypeInfo);
    sub_B775C4(&Method_NoTitleDialog_EndOpen__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438BA73 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.onClick = onClick;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.onClick,
    (System_Int32_array **)onClick,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !this )
    goto LABEL_13;
  v20 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
  NoTitleDialog__SetLabelText(this, this->fields.messageLabel, v20, v19);
  NoTitleDialog__SetLabelText(this, this->fields.buttonDecideLabel, decideTxt, v21);
  NoTitleDialog__SetLabelText(this, this->fields.buttonCancelLabel, cancleTxt, v22);
  gameObject = (UnityEngine_GameObject_o *)this->fields.closeBtn;
  if ( !gameObject )
LABEL_13:
    sub_B7769C(gameObject, v12);
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn(v23, 0LL);
  this->fields.isButtonEnable = 0;
  v24 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_NoTitleDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0LL);
}


void __fastcall NoTitleDialog__SetLabelText(
        NoTitleDialog_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  UIWidget_o *messageLabel; // x0
  __int64 v8; // x1
  int32_t v9; // w21
  int v10; // w22
  uint16_t Chars; // w0
  UIWidget_o *window; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_438BA74 & 1) == 0 )
  {
    sub_B775C4(&NoTitleDialog_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438BA74 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  messageLabel = (UIWidget_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0LL, 0LL);
  if ( ((unsigned __int8)messageLabel & 1) == 0 )
  {
    if ( !label )
      goto LABEL_24;
    UILabel__set_text(label, text, 0LL);
    if ( !text )
      goto LABEL_24;
    if ( text->fields.m_stringLength >= 1 )
    {
      v9 = 0;
      v10 = 0;
      do
      {
        Chars = System_String__get_Chars(text, v9++, 0LL);
        if ( Chars == 10 )
          ++v10;
      }
      while ( v9 < text->fields.m_stringLength );
      if ( v10 >= 14 )
      {
        window = (UIWidget_o *)this->fields.window;
        messageLabel = (UIWidget_o *)NoTitleDialog_TypeInfo;
        if ( (BYTE3(NoTitleDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NoTitleDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NoTitleDialog_TypeInfo);
        }
        if ( window )
        {
          UIWidget__set_width(window, NoTitleDialog_TypeInfo->static_fields->MESSAGE_WINDOW_SIZE_X, 0LL);
          messageLabel = (UIWidget_o *)this->fields.messageLabel;
          if ( messageLabel )
          {
            UIWidget__set_width(messageLabel, NoTitleDialog_TypeInfo->static_fields->MESSAGE_LABEL_SIZE_X, 0LL);
            messageLabel = (UIWidget_o *)this->fields.messageLabel;
            if ( messageLabel )
            {
              UIWidget__set_height(messageLabel, NoTitleDialog_TypeInfo->static_fields->MESSAGE_LABEL_SIZE_Y, 0LL);
              messageLabel = (UIWidget_o *)this->fields.messageLabel;
              if ( messageLabel )
              {
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
                GameObjectExtensions__SetLocalPositionY(
                  gameObject,
                  (float)NoTitleDialog_TypeInfo->static_fields->MESSAGE_LABEL_POS_Y,
                  0LL);
                return;
              }
            }
          }
        }
LABEL_24:
        sub_B7769C(messageLabel, v8);
      }
    }
  }
}


UnityEngine_GameObject_o *__fastcall NoTitleDialog__get_closeBtnObject(NoTitleDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_438BA76 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438BA76 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeBtn, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeBtn;
  if ( !v6 )
    sub_B7769C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}