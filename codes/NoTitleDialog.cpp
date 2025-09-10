void NoTitleDialog___cctor(const MethodInfo *method)
{
  struct NoTitleDialog_StaticFields *static_fields; // x8

  if ( (byte_4C23398 & 1) == 0 )
  {
    sub_1C2D490(&NoTitleDialog_TypeInfo);
    byte_4C23398 = 1;
  }
  static_fields = NoTitleDialog_TypeInfo->static_fields;
  static_fields->MESSAGE_LABEL_POS_Y = 35;
  *(_OWORD *)&static_fields->MESSAGE_WINDOW_SIZE_X_DEF = xmmword_C09260;
  *(_OWORD *)&static_fields->MESSAGE_LABEL_POS_Y_DEF = xmmword_C0A940;
}


void NoTitleDialog___ctor(NoTitleDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C23397 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C23397 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void NoTitleDialog__CallOnClick(NoTitleDialog_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_onClick; // x0
  struct System_Action_bool__o *v5; // x20
  struct System_Action_bool__o *onClick; // t1

  onClick = this->fields.onClick;
  p_onClick = (CGThumbnailListItem_o *)&this->fields.onClick;
  v5 = onClick;
  if ( onClick )
  {
    p_onClick->klass = 0;
    sub_1C2D434(p_onClick, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      result,
      v5->fields.method);
  }
}


void NoTitleDialog__Close(NoTitleDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NoTitleDialog__Close_34808680(this, 0, v2);
}


void NoTitleDialog__Close_34808680(NoTitleDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C23391 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_NoTitleDialog_EndClose__);
    byte_4C23391 = 1;
  }
  this->fields.onClose = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onClose, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_NoTitleDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void NoTitleDialog__EndClose(NoTitleDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_onClose; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *onClose; // t1

  NoTitleDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  onClose = this->fields.onClose;
  p_onClose = (CGThumbnailListItem_o *)&this->fields.onClose;
  v8 = onClose;
  if ( onClose )
  {
    p_onClose->klass = 0;
    sub_1C2D434(p_onClose, 0, v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
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
  UIWidget_o *messageLabel; // x0
  UIWidget_o *window; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C2338E & 1) == 0 )
  {
    sub_1C2D490(&NoTitleDialog_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2338E = 1;
  }
  NoTitleDialog__SetLabelText(this, this->fields.messageLabel, (System_String_o *)StringLiteral_1/*""*/, v2);
  NoTitleDialog__SetLabelText(this, this->fields.buttonDecideLabel, (System_String_o *)StringLiteral_1/*""*/, v4);
  NoTitleDialog__SetLabelText(this, this->fields.buttonCancelLabel, (System_String_o *)StringLiteral_1/*""*/, v5);
  messageLabel = (UIWidget_o *)NoTitleDialog_TypeInfo;
  window = (UIWidget_o *)this->fields.window;
  if ( !NoTitleDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NoTitleDialog_TypeInfo);
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
    sub_1C2D6EC(messageLabel, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void NoTitleDialog__OnClickCancel(NoTitleDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C23395 & 1) == 0 )
  {
    sub_1C2D490(&Method_NoTitleDialog_OnClickCancel__);
    byte_4C23395 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NoTitleDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_NoTitleDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_NoTitleDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C23396 & 1) == 0 )
  {
    sub_1C2D490(&Method_NoTitleDialog_OnClickClose__);
    byte_4C23396 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NoTitleDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_NoTitleDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_NoTitleDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C23393 & 1) == 0 )
  {
    sub_1C2D490(&Method_NoTitleDialog_OnClickDecide__);
    byte_4C23393 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NoTitleDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_NoTitleDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_NoTitleDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C23394 & 1) == 0 )
  {
    sub_1C2D490(&Method_NoTitleDialog_OnClickDecide2__);
    byte_4C23394 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NoTitleDialog_OnClickDecide2__;
    if ( (*((_BYTE *)Method_NoTitleDialog_OnClickDecide2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_NoTitleDialog_OnClickDecide2__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  System_String_o *v16; // x2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  UnityEngine_GameObject_o *v19; // x0
  System_Action_o *v20; // x20

  if ( (byte_4C2338F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_NoTitleDialog_EndOpen__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2338F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.onClick = onClick;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onClick, (int32_t)onClick, v13, v14);
  v16 = message ? message : (System_String_o *)StringLiteral_1/*""*/;
  NoTitleDialog__SetLabelText(this, this->fields.messageLabel, v16, v15);
  NoTitleDialog__SetLabelText(this, this->fields.buttonDecideLabel, decideTxt, v17);
  NoTitleDialog__SetLabelText(this, this->fields.buttonCancelLabel, cancleTxt, v18);
  gameObject = (UnityEngine_GameObject_o *)this->fields.closeBtn;
  if ( !gameObject )
LABEL_9:
    sub_1C2D6EC(gameObject, v12);
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  AndroidBackKeyManager__AddBackBtn(v19, 0);
  this->fields.isButtonEnable = 0;
  v20 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_NoTitleDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0);
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
  UIWidget_o *window; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C23390 & 1) == 0 )
  {
    sub_1C2D490(&NoTitleDialog_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23390 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        if ( !NoTitleDialog_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NoTitleDialog_TypeInfo);
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
        sub_1C2D6EC(messageLabel, v8);
      }
    }
  }
}


UnityEngine_GameObject_o *NoTitleDialog__get_closeBtnObject(NoTitleDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C23392 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23392 = 1;
  }
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeBtn, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeBtn;
  if ( !v6 )
    sub_1C2D6EC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}