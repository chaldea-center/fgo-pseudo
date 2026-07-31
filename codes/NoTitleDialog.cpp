void NoTitleDialog___cctor(const MethodInfo *method)
{
  struct NoTitleDialog_StaticFields *static_fields; // x8

  if ( (byte_5934544 & 1) == 0 )
  {
    sub_21FFC50(&NoTitleDialog_TypeInfo);
    byte_5934544 = 1;
  }
  static_fields = NoTitleDialog_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MESSAGE_WINDOW_SIZE_X_DEF = xmmword_E93AD0;
  *(_OWORD *)&static_fields->MESSAGE_LABEL_POS_Y_DEF = xmmword_E948E0;
  static_fields->MESSAGE_LABEL_POS_Y = 35;
}


void NoTitleDialog___ctor(NoTitleDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5934543 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5934543 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void NoTitleDialog__CallOnClick(NoTitleDialog_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_onClick; // x0
  struct System_Action_bool__o *v9; // x20
  struct System_Action_bool__o *onClick; // t1

  onClick = this->fields.onClick;
  p_onClick = (MissionNaviTransitionBoardItem_o *)&this->fields.onClick;
  v9 = onClick;
  if ( onClick )
  {
    p_onClick->klass = 0;
    sub_21FFBF4(p_onClick, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void NoTitleDialog__Close(NoTitleDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NoTitleDialog__Close_41755868(this, 0, v2);
}


void NoTitleDialog__Close_41755868(NoTitleDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_593453D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_NoTitleDialog_EndClose__);
    byte_593453D = 1;
  }
  this->fields.onClose = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClose,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_21FFEBC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_NoTitleDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void NoTitleDialog__EndClose(NoTitleDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_onClose; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *onClose; // t1

  NoTitleDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  onClose = this->fields.onClose;
  p_onClose = (MissionNaviTransitionBoardItem_o *)&this->fields.onClose;
  v12 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0;
    sub_21FFBF4(p_onClose, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void NoTitleDialog__EndOpen(NoTitleDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void NoTitleDialog__Init(NoTitleDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  UIWidget_o *messageLabel; // x0
  UIWidget_o *window; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_593453A & 1) == 0 )
  {
    sub_21FFC50(&NoTitleDialog_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593453A = 1;
  }
  NoTitleDialog__SetLabelText(this, this->fields.messageLabel, (System_String_o *)StringLiteral_1/*""*/, v2);
  NoTitleDialog__SetLabelText(this, this->fields.buttonDecideLabel, (System_String_o *)StringLiteral_1/*""*/, v4);
  NoTitleDialog__SetLabelText(this, this->fields.buttonCancelLabel, (System_String_o *)StringLiteral_1/*""*/, v5);
  messageLabel = (UIWidget_o *)NoTitleDialog_TypeInfo;
  window = (UIWidget_o *)this->fields.window;
  if ( !*(&NoTitleDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NoTitleDialog_TypeInfo, v6, v7);
  if ( !window )
    goto LABEL_12;
  UIWidget__set_width(window, NoTitleDialog_TypeInfo->static_fields->MESSAGE_WINDOW_SIZE_X_DEF, 0);
  messageLabel = (UIWidget_o *)this->fields.window;
  if ( !messageLabel )
    goto LABEL_12;
  UIWidget__set_height(messageLabel, NoTitleDialog_TypeInfo->static_fields->MESSAGE_WINDOW_SIZE_Y_DEF, 0);
  messageLabel = (UIWidget_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_12;
  UIWidget__set_width(messageLabel, NoTitleDialog_TypeInfo->static_fields->MESSAGE_LABEL_SIZE_X_DEF, 0);
  messageLabel = (UIWidget_o *)this->fields.messageLabel;
  if ( !messageLabel
    || (UIWidget__set_height(messageLabel, NoTitleDialog_TypeInfo->static_fields->MESSAGE_LABEL_SIZE_Y_DEF, 0),
        (messageLabel = (UIWidget_o *)this->fields.messageLabel) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0),
        GameObjectExtensions__SetLocalPositionY(
          gameObject,
          (float)NoTitleDialog_TypeInfo->static_fields->MESSAGE_LABEL_POS_Y_DEF,
          0),
        this->fields.isButtonEnable = 0,
        (messageLabel = (UIWidget_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_12:
    sub_21FFECC(messageLabel, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void NoTitleDialog__OnClickCancel(NoTitleDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5934541 & 1) == 0 )
  {
    sub_21FFC50(&Method_NoTitleDialog_OnClickCancel__);
    byte_5934541 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NoTitleDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_NoTitleDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_NoTitleDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    this->fields.isButtonEnable = 0;
    NoTitleDialog__CallOnClick(this, 0, v5);
  }
}


void NoTitleDialog__OnClickClose(NoTitleDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5934542 & 1) == 0 )
  {
    sub_21FFC50(&Method_NoTitleDialog_OnClickClose__);
    byte_5934542 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NoTitleDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_NoTitleDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_NoTitleDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    this->fields.isButtonEnable = 0;
    NoTitleDialog__CallOnClick(this, 0, v5);
  }
}


void NoTitleDialog__OnClickDecide(NoTitleDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_593453F & 1) == 0 )
  {
    sub_21FFC50(&Method_NoTitleDialog_OnClickDecide__);
    byte_593453F = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NoTitleDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_NoTitleDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_NoTitleDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    this->fields.isButtonEnable = 0;
    NoTitleDialog__CallOnClick(this, 1, v5);
  }
}


void NoTitleDialog__OnClickDecide2(NoTitleDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5934540 & 1) == 0 )
  {
    sub_21FFC50(&Method_NoTitleDialog_OnClickDecide2__);
    byte_5934540 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NoTitleDialog_OnClickDecide2__;
    if ( (*((_BYTE *)Method_NoTitleDialog_OnClickDecide2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_NoTitleDialog_OnClickDecide2__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    this->fields.isButtonEnable = 0;
    NoTitleDialog__CallOnClick(this, 1, v5);
  }
}


void NoTitleDialog__Open(
        NoTitleDialog_o *this,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancleTxt,
        System_Action_bool__o *onClick,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x3
  System_String_o *v20; // x2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  UnityEngine_GameObject_o *v23; // x0
  System_Action_c *v24; // x0
  System_Action_o *v25; // x20

  if ( (byte_593453B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_NoTitleDialog_EndOpen__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593453B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.onClick = onClick;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onClick, (int32_t)onClick, v13, v14, v15, v16, v17, v18);
  v20 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
  NoTitleDialog__SetLabelText(this, this->fields.messageLabel, v20, v19);
  NoTitleDialog__SetLabelText(this, this->fields.buttonDecideLabel, decideTxt, v21);
  NoTitleDialog__SetLabelText(this, this->fields.buttonCancelLabel, cancleTxt, v22);
  gameObject = (UnityEngine_GameObject_o *)this->fields.closeBtn;
  if ( !gameObject )
LABEL_9:
    sub_21FFECC(gameObject, v12);
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  AndroidBackKeyManager__AddBackBtn(v23, 0);
  v24 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v25 = (System_Action_o *)sub_21FFEBC(v24);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_NoTitleDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v25, 0, 0, 0);
}


void NoTitleDialog__SetLabelText(
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
  __int64 v12; // x2
  UIWidget_o *window; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_593453C & 1) == 0 )
  {
    sub_21FFC50(&NoTitleDialog_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593453C = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, label, text);
  messageLabel = (UIWidget_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)label, 0, 0);
  if ( ((unsigned __int8)messageLabel & 1) == 0 )
  {
    if ( !label )
      goto LABEL_22;
    UILabel__set_text(label, text, 0);
    if ( !text )
      goto LABEL_22;
    if ( text->fields._stringLength >= 1 )
    {
      v9 = 0;
      v10 = 0;
      do
      {
        Chars = System_String__get_Chars(text, v9++, 0);
        if ( Chars == 10 )
          ++v10;
      }
      while ( v9 < text->fields._stringLength );
      if ( v10 >= 14 )
      {
        window = (UIWidget_o *)this->fields.window;
        messageLabel = (UIWidget_o *)NoTitleDialog_TypeInfo;
        if ( !*(&NoTitleDialog_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NoTitleDialog_TypeInfo, v8, v12);
        if ( window )
        {
          UIWidget__set_width(window, NoTitleDialog_TypeInfo->static_fields->MESSAGE_WINDOW_SIZE_X, 0);
          messageLabel = (UIWidget_o *)this->fields.messageLabel;
          if ( messageLabel )
          {
            UIWidget__set_width(messageLabel, NoTitleDialog_TypeInfo->static_fields->MESSAGE_LABEL_SIZE_X, 0);
            messageLabel = (UIWidget_o *)this->fields.messageLabel;
            if ( messageLabel )
            {
              UIWidget__set_height(messageLabel, NoTitleDialog_TypeInfo->static_fields->MESSAGE_LABEL_SIZE_Y, 0);
              messageLabel = (UIWidget_o *)this->fields.messageLabel;
              if ( messageLabel )
              {
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0);
                GameObjectExtensions__SetLocalPositionY(
                  gameObject,
                  (float)NoTitleDialog_TypeInfo->static_fields->MESSAGE_LABEL_POS_Y,
                  0);
                return;
              }
            }
          }
        }
LABEL_22:
        sub_21FFECC(messageLabel, v8);
      }
    }
  }
}


UnityEngine_GameObject_o *NoTitleDialog__get_closeBtnObject(NoTitleDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeBtn; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_593453E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593453E = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(closeBtn, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.closeBtn;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}