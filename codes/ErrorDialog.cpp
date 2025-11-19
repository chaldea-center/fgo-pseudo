void ErrorDialog___ctor(ErrorDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CB662F & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB662F = 1;
  }
  *(_QWORD *)&this->fields.messageLabelPositionYDefault = 0x10441700000LL;
  this->fields.messageLabelPositionYNoTitle = 36.0;
  *(_OWORD *)&this->fields.messageLabelHeightNoTitle = xmmword_CED3C0;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ErrorDialog__AdjustLayoutWhetherNoTitle(ErrorDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0
  struct UILabel_o *titleLabel; // x8
  char v5; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_o *v7; // x8
  System_String_o *v8; // x20

  if ( (byte_4CB6628 & 1) == 0 )
  {
    sub_1C6BA08(&ScriptMessageLabel_TypeInfo);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    byte_4CB6628 = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_19;
  UILabel__set_fontSize(messageLabel, this->fields.DEFAULT_FONT_SIZE, 0);
  if ( this->fields.isAdjustedLayoutNoTitle )
  {
    titleLabel = this->fields.titleLabel;
    if ( !titleLabel )
      goto LABEL_19;
    messageLabel = (UILabel_o *)System_String__IsNullOrEmpty(titleLabel->fields.mText, 0);
    if ( !this->fields.messageLabel )
      goto LABEL_19;
    v5 = (char)messageLabel;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.messageLabel, 0);
    if ( (v5 & 1) != 0 )
    {
      GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.messageLabelPositionYNoTitle, 0);
      messageLabel = this->fields.messageLabel;
      if ( !messageLabel )
        goto LABEL_19;
      UIWidget__set_height((UIWidget_o *)messageLabel, this->fields.messageLabelHeightNoTitle, 0);
      v7 = this->fields.messageLabel;
      if ( !v7 )
        goto LABEL_19;
      messageLabel = (UILabel_o *)v7->fields.mText;
      if ( !messageLabel )
        goto LABEL_19;
      v8 = System_String__Replace_64013356(
             (System_String_o *)messageLabel,
             (System_String_o *)StringLiteral_43/*"\n"*/,
             string_TypeInfo->static_fields->Empty,
             0);
      if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
      if ( ScriptMessageLabel__StrlenByDisp(v8, 0) > this->fields.MAX_NUM_CHARACTERS_WITHOUT_ADJUST_FONT_SIZE )
      {
        messageLabel = this->fields.messageLabel;
        if ( messageLabel )
        {
          UILabel__set_fontSize(messageLabel, this->fields.ADJUSTED_FONT_SIZE, 0);
          return;
        }
LABEL_19:
        sub_1C6BC60(messageLabel, method);
      }
    }
    else
    {
      GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.messageLabelPositionYDefault, 0);
      messageLabel = this->fields.messageLabel;
      if ( !messageLabel )
        goto LABEL_19;
      UIWidget__set_height((UIWidget_o *)messageLabel, this->fields.messageLabelHeightDefault, 0);
    }
  }
}


void ErrorDialog__Close(ErrorDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ErrorDialog__Close_42499240(this, 0, v2);
}


void ErrorDialog__Close_42499240(ErrorDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4CB6629 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ErrorDialog_EndClose__);
    byte_4CB6629 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ErrorDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void ErrorDialog__EndClose(ErrorDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeEndFunc; // t1

  ErrorDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (CGThumbnailListItem_o *)&this->fields.closeEndFunc;
  v8 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0;
    sub_1C6B9AC(p_closeEndFunc, 0, v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
  }
}


void ErrorDialog__EndOpen(ErrorDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void ErrorDialog__Init(ErrorDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *decideLabel; // x20
  UnityEngine_Object_o *cancelLabel; // x20
  UnityEngine_Object_o *sendLabel; // x20
  UnityEngine_Object_o *noSendLabel; // x20

  if ( (byte_4CB6624 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB6624 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_26;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  decideLabel = (UnityEngine_Object_o *)this->fields.decideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(decideLabel, 0, 0) )
  {
    titleLabel = this->fields.decideLabel;
    if ( !titleLabel )
      goto LABEL_26;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  cancelLabel = (UnityEngine_Object_o *)this->fields.cancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelLabel, 0, 0) )
  {
    titleLabel = this->fields.cancelLabel;
    if ( !titleLabel )
      goto LABEL_26;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  sendLabel = (UnityEngine_Object_o *)this->fields.sendLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sendLabel, 0, 0) )
  {
    titleLabel = this->fields.sendLabel;
    if ( !titleLabel )
      goto LABEL_26;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  noSendLabel = (UnityEngine_Object_o *)this->fields.noSendLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noSendLabel, 0, 0) )
  {
    titleLabel = this->fields.noSendLabel;
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      goto LABEL_25;
    }
LABEL_26:
    sub_1C6BC60(titleLabel, method);
  }
LABEL_25:
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ErrorDialog__OnClickCancel(ErrorDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ErrorDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CB662B & 1) == 0 )
  {
    sub_1C6BA08(&Method_ErrorDialog_OnClickCancel__);
    byte_4CB662B = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ErrorDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ErrorDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ErrorDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        clickFunc->fields.method);
  }
}


void ErrorDialog__OnClickClose(ErrorDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ErrorDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CB662C & 1) == 0 )
  {
    sub_1C6BA08(&Method_ErrorDialog_OnClickClose__);
    byte_4CB662C = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ErrorDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ErrorDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ErrorDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        clickFunc->fields.method);
  }
}


void ErrorDialog__OnClickDecide(ErrorDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ErrorDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CB662A & 1) == 0 )
  {
    sub_1C6BA08(&Method_ErrorDialog_OnClickDecide__);
    byte_4CB662A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ErrorDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ErrorDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ErrorDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


void ErrorDialog__OnClickDecide2(ErrorDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ErrorDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4CB662D & 1) == 0 )
  {
    sub_1C6BA08(&Method_ErrorDialog_OnClickDecide2__);
    byte_4CB662D = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ErrorDialog_OnClickDecide2__;
    if ( (*((_BYTE *)Method_ErrorDialog_OnClickDecide2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ErrorDialog_OnClickDecide2__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


void ErrorDialog__OnEnable(ErrorDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0
  UnityEngine_Transform_o *v5; // x0

  if ( (byte_4CB662E & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_15640/*"Window/CloseButton"*/);
    sub_1C6BA08(&StringLiteral_15642/*"Window/ExitButton"*/);
    sub_1C6BA08(&StringLiteral_15638/*"Window/CancelButton"*/);
    byte_4CB662E = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45210584(transform, (System_String_o *)StringLiteral_15642/*"Window/ExitButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45210584(v4, (System_String_o *)StringLiteral_15640/*"Window/CloseButton"*/, 0);
  v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45210584(v5, (System_String_o *)StringLiteral_15638/*"Window/CancelButton"*/, 0);
}


void ErrorDialog__Open(ErrorDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // [xsp+0h] [xbp-20h]
  System_Nullable_Vector2__o v3; // 0:x6.12

  *(_QWORD *)&v3.fields.hasValue = 0;
  v3.fields.value.fields.y = 0.0;
  ErrorDialog__Open_42497048(this, 0, 0, 0, 1, -1.0, 1, v3, v2);
}


void ErrorDialog__Open_42497048(
        ErrorDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        ErrorDialog_ClickDelegate_o *func,
        bool ableToCloseTapOutDialog,
        float closeButtonY,
        int32_t messageEffect,
        System_Nullable_Vector2__o effectDistance,
        const MethodInfo *method)
{
  bool hasValue; // w21
  __int64 v17; // x1
  UILabel_o *titleLabel; // x0
  System_String_o *v19; // x1
  const MethodInfo_392D2F4 *v20; // x2
  UILabel_o *messageLabel; // x22
  UnityEngine_Vector2_o Value; // kr00_8
  UnityEngine_Object_o *decideLabel; // x21
  UILabel_o *v24; // x21
  System_String_o *decideTextCode; // x22
  UnityEngine_Object_o *cancelLabel; // x21
  UILabel_o *v27; // x21
  System_String_o *cancelTextCode; // x22
  UnityEngine_Object_o *sendLabel; // x21
  UILabel_o *v30; // x21
  System_String_o *sendTextCode; // x22
  UnityEngine_Object_o *noSendLabel; // x21
  UILabel_o *v33; // x21
  System_String_o *noSendTextCode; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x1
  System_Action_o *v38; // x20
  System_Nullable_Vector2__o v39; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector2__o v40; // 0:x0.12

  hasValue = effectDistance.fields.hasValue;
  v39 = effectDistance;
  if ( (byte_4CB6626 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ErrorDialog_EndOpen__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_System_Nullable_Vector2__get_HasValue__);
    sub_1C6BA08(&Method_System_Nullable_Vector2__get_Value__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB6626 = 1;
  }
  this->fields.clickFunc = func;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    (int32_t)message,
    (const MethodInfo *)func);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_51;
  if ( title )
    v19 = title;
  else
    v19 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(titleLabel, v19, 0);
  if ( message )
  {
    titleLabel = this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_51;
    UILabel__set_text(titleLabel, message, 0);
    titleLabel = this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_51;
    UILabel__set_effectStyle(titleLabel, messageEffect, 0);
    messageLabel = this->fields.messageLabel;
    if ( hasValue )
    {
      *(_QWORD *)&v40.fields.hasValue = &v39;
      LODWORD(v40.fields.value.fields.y) = Method_System_Nullable_Vector2__get_Value__;
      Value = System_Nullable_Vector2___get_Value(v40, v20);
      if ( !messageLabel )
        goto LABEL_51;
    }
    else
    {
      if ( !byte_4CB66ED )
      {
        titleLabel = (UILabel_o *)sub_1C6BA08(&UnityEngine_Vector2_TypeInfo);
        byte_4CB66ED = 1;
      }
      Value = UnityEngine_Vector2_TypeInfo->static_fields->oneVector;
      if ( !messageLabel )
        goto LABEL_51;
    }
    UILabel__set_effectDistance(messageLabel, Value, 0);
  }
  decideLabel = (UnityEngine_Object_o *)this->fields.decideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(decideLabel, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.decideTextCode, 0) )
  {
    v24 = this->fields.decideLabel;
    decideTextCode = this->fields.decideTextCode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    titleLabel = (UILabel_o *)LocalizationManager__Get(decideTextCode, 0);
    if ( !v24 )
      goto LABEL_51;
    UILabel__set_text(v24, (System_String_o *)titleLabel, 0);
  }
  cancelLabel = (UnityEngine_Object_o *)this->fields.cancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelLabel, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.cancelTextCode, 0) )
  {
    v27 = this->fields.cancelLabel;
    cancelTextCode = this->fields.cancelTextCode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    titleLabel = (UILabel_o *)LocalizationManager__Get(cancelTextCode, 0);
    if ( !v27 )
      goto LABEL_51;
    UILabel__set_text(v27, (System_String_o *)titleLabel, 0);
  }
  sendLabel = (UnityEngine_Object_o *)this->fields.sendLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sendLabel, 0, 0) && !System_String__IsNullOrEmpty(this->fields.sendTextCode, 0) )
  {
    v30 = this->fields.sendLabel;
    sendTextCode = this->fields.sendTextCode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    titleLabel = (UILabel_o *)LocalizationManager__Get(sendTextCode, 0);
    if ( !v30 )
      goto LABEL_51;
    UILabel__set_text(v30, (System_String_o *)titleLabel, 0);
  }
  noSendLabel = (UnityEngine_Object_o *)this->fields.noSendLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noSendLabel, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.noSendTextCode, 0) )
  {
    v33 = this->fields.noSendLabel;
    noSendTextCode = this->fields.noSendTextCode;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    titleLabel = (UILabel_o *)LocalizationManager__Get(noSendTextCode, 0);
    if ( v33 )
    {
      UILabel__set_text(v33, (System_String_o *)titleLabel, 0);
      goto LABEL_49;
    }
LABEL_51:
    sub_1C6BC60(titleLabel, v17);
  }
LABEL_49:
  titleLabel = this->fields.cancelLabel;
  if ( !titleLabel )
    goto LABEL_51;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, closeButtonY, 0);
  ErrorDialog__SetAbleToCloseTapOutDialog(this, ableToCloseTapOutDialog, v36);
  ErrorDialog__AdjustLayoutWhetherNoTitle(this, v37);
  this->fields.isButtonEnable = 0;
  v38 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_ErrorDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v38, 0, 0, 0);
}


void ErrorDialog__Open_42498072(ErrorDialog_o *this, System_String_o *message, const MethodInfo *method)
{
  const MethodInfo *v3; // [xsp+0h] [xbp-20h]
  System_Nullable_Vector2__o v4; // 0:x6.12

  *(_QWORD *)&v4.fields.hasValue = 0;
  v4.fields.value.fields.y = 0.0;
  ErrorDialog__Open_42497048(this, 0, message, 0, 1, -1.0, 1, v4, v3);
}


void ErrorDialog__Open_42498128(
        ErrorDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        const MethodInfo *method)
{
  const MethodInfo *v4; // [xsp+0h] [xbp-20h]
  System_Nullable_Vector2__o v5; // 0:x6.12

  *(_QWORD *)&v5.fields.hasValue = 0;
  v5.fields.value.fields.y = 0.0;
  ErrorDialog__Open_42497048(this, title, message, 0, 1, -1.0, 1, v5, v4);
}


void ErrorDialog__Open_42498176(
        ErrorDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancleTxt,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  ErrorDialog__Open_42498184(this, title, message, decideTxt, cancleTxt, 0, v6);
}


void ErrorDialog__Open_42498184(
        ErrorDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancleTxt,
        ErrorDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  __int64 v13; // x1
  UILabel_o *titleLabel; // x0
  System_String_o *v15; // x1
  System_String_o *v16; // x1
  UnityEngine_Object_o *decideLabel; // x22
  UnityEngine_Object_o *cancelLabel; // x21
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1
  System_Action_o *v21; // x20

  if ( (byte_4CB6625 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ErrorDialog_EndOpen__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB6625 = 1;
  }
  this->fields.clickFunc = func;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    (int32_t)message,
    (const MethodInfo *)decideTxt);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_22;
  v15 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(titleLabel, v15, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_22;
  if ( message )
    v16 = message;
  else
    v16 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(titleLabel, v16, 0);
  decideLabel = (UnityEngine_Object_o *)this->fields.decideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(decideLabel, 0, 0) )
  {
    titleLabel = this->fields.decideLabel;
    if ( !titleLabel )
      goto LABEL_22;
    UILabel__set_text(titleLabel, decideTxt, 0);
  }
  cancelLabel = (UnityEngine_Object_o *)this->fields.cancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cancelLabel, 0, 0) )
  {
    titleLabel = this->fields.cancelLabel;
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, cancleTxt, 0);
      goto LABEL_21;
    }
LABEL_22:
    sub_1C6BC60(titleLabel, v13);
  }
LABEL_21:
  ErrorDialog__SetAbleToCloseTapOutDialog(this, 1, v19);
  ErrorDialog__AdjustLayoutWhetherNoTitle(this, v20);
  this->fields.isButtonEnable = 0;
  v21 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_ErrorDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v21, 0, 0, 0);
}


void ErrorDialog__SetAbleToCloseTapOutDialog(
        ErrorDialog_o *this,
        bool ableToCloseTapOutDialog,
        const MethodInfo *method)
{
  UnityEngine_Object_o *maskSprite; // x21
  __int64 v6; // x1
  struct UISprite_o *v7; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4CB6627 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB6627 = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
  {
    v7 = this->fields.maskSprite;
    if ( !v7 )
      goto LABEL_13;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)v7,
                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (struct UISprite_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      if ( Component_object )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, ableToCloseTapOutDialog, 0);
        return;
      }
LABEL_13:
      sub_1C6BC60(v7, v6);
    }
  }
}


void ErrorDialog_ClickDelegate___ctor(
        ErrorDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA2430;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA23E8;
}


System_IAsyncResult_o *ErrorDialog_ClickDelegate__BeginInvoke(
        ErrorDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4CB6630 & 1) == 0 )
  {
    sub_1C6BA08(&bool_TypeInfo);
    byte_4CB6630 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v9, callback, object);
}


void ErrorDialog_ClickDelegate__EndInvoke(
        ErrorDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void ErrorDialog_ClickDelegate__Invoke(ErrorDialog_ClickDelegate_o *this, bool isDecide, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}