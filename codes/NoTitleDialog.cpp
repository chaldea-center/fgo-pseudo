void __fastcall NoTitleDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  NoTitleDialog_c *v2; // x8

  if ( (byte_418840D & 1) == 0 )
  {
    sub_B2C35C(&NoTitleDialog_TypeInfo, v1);
    byte_418840D = 1;
  }
  NoTitleDialog_TypeInfo->static_fields->MESSAGE_WINDOW_SIZE_X_DEF = 780;
  NoTitleDialog_TypeInfo->static_fields->MESSAGE_WINDOW_SIZE_Y_DEF = 480;
  v2 = NoTitleDialog_TypeInfo;
  NoTitleDialog_TypeInfo->static_fields->MESSAGE_LABEL_SIZE_X_DEF = 700;
  v2->static_fields->MESSAGE_LABEL_SIZE_Y_DEF = 340;
  v2->static_fields->MESSAGE_LABEL_POS_Y_DEF = 20;
  v2->static_fields->MESSAGE_WINDOW_SIZE_X = 853;
  v2->static_fields->MESSAGE_LABEL_SIZE_X = 780;
  v2->static_fields->MESSAGE_LABEL_SIZE_Y = 346;
  v2->static_fields->MESSAGE_LABEL_POS_Y = 35;
}


void __fastcall NoTitleDialog___ctor(NoTitleDialog_o *this, const MethodInfo *method)
{
  if ( (byte_418840C & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418840C = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_418840B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool__Invoke__, result);
    byte_418840B = 1;
  }
  onClick = this->fields.onClick;
  p_onClick = (BattleServantConfConponent_o *)&this->fields.onClick;
  v11 = onClick;
  if ( onClick )
  {
    p_onClick->klass = 0LL;
    sub_B2C2F8(p_onClick, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    System_Action_bool___Invoke(v11, result, (const MethodInfo_24B7BA4 *)Method_System_Action_bool__Invoke__);
  }
}


void __fastcall NoTitleDialog__Close(NoTitleDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NoTitleDialog__Close_26301028(this, 0LL, v2);
}


void __fastcall NoTitleDialog__Close_26301028(
        NoTitleDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4188405 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_NoTitleDialog_EndClose__, v10);
    byte_4188405 = 1;
  }
  this->fields.onClose = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_NoTitleDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  onClose = this->fields.onClose;
  p_onClose = (BattleServantConfConponent_o *)&this->fields.onClose;
  v12 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0LL;
    sub_B2C2F8(p_onClose, 0LL, v5, v6, v7, v8, v9, v10);
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
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x3
  __int64 v7; // x1
  UIWidget_o *window; // x20
  UIWidget_o *messageLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4188402 & 1) == 0 )
  {
    sub_B2C35C(&NoTitleDialog_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4188402 = 1;
  }
  NoTitleDialog__SetLabelText(this, this->fields.messageLabel, (System_String_o *)StringLiteral_1/*""*/, v2);
  NoTitleDialog__SetLabelText(this, this->fields.buttonDecideLabel, (System_String_o *)StringLiteral_1/*""*/, v5);
  NoTitleDialog__SetLabelText(this, this->fields.buttonCancelLabel, (System_String_o *)StringLiteral_1/*""*/, v6);
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
    sub_B2C434(messageLabel, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall NoTitleDialog__OnClickCancel(NoTitleDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4188409 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4188409 = 1;
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

  if ( (byte_418840A & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418840A = 1;
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

  if ( (byte_4188407 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4188407 = 1;
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

  if ( (byte_4188408 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4188408 = 1;
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x3
  System_String_o *v23; // x2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  UnityEngine_GameObject_o *v26; // x20
  System_Action_o *v27; // x20

  if ( (byte_4188403 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, message);
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, v11);
    sub_B2C35C(&Method_NoTitleDialog_EndOpen__, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_4188403 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.onClick = onClick;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onClick,
    (System_Int32_array **)onClick,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( !this )
    goto LABEL_13;
  v23 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
  NoTitleDialog__SetLabelText(this, this->fields.messageLabel, v23, v22);
  NoTitleDialog__SetLabelText(this, this->fields.buttonDecideLabel, decideTxt, v24);
  NoTitleDialog__SetLabelText(this, this->fields.buttonCancelLabel, cancleTxt, v25);
  gameObject = (UnityEngine_GameObject_o *)this->fields.closeBtn;
  if ( !gameObject )
LABEL_13:
    sub_B2C434(gameObject, v15);
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn(v26, 0LL);
  this->fields.isButtonEnable = 0;
  v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_NoTitleDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0LL);
}


void __fastcall NoTitleDialog__SetLabelText(
        NoTitleDialog_o *this,
        UILabel_o *label,
        System_String_o *text,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UIWidget_o *messageLabel; // x0
  __int64 v9; // x1
  int32_t v10; // w21
  int v11; // w22
  uint16_t Chars; // w0
  UIWidget_o *window; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4188404 & 1) == 0 )
  {
    sub_B2C35C(&NoTitleDialog_TypeInfo, label);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4188404 = 1;
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
      v10 = 0;
      v11 = 0;
      do
      {
        Chars = System_String__get_Chars(text, v10++, 0LL);
        if ( Chars == 10 )
          ++v11;
      }
      while ( v10 < text->fields.m_stringLength );
      if ( v11 >= 14 )
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
        sub_B2C434(messageLabel, v9);
      }
    }
  }
}


UnityEngine_GameObject_o *__fastcall NoTitleDialog__get_closeBtnObject(NoTitleDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4188406 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4188406 = 1;
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
    sub_B2C434(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}