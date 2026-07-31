void ErrorDialog___ctor(ErrorDialog_o *this, const MethodInfo *method)
{
  BaseDialog_c *v3; // x0
  int v4; // w8

  if ( (byte_59386A4 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_59386A4 = 1;
  }
  v3 = BaseDialog_TypeInfo;
  *(_QWORD *)&this->fields.messageLabelPositionYDefault = 0x10441700000LL;
  *(_OWORD *)&this->fields.messageLabelHeightNoTitle = xmmword_E935E0;
  v4 = *(&v3->_2.cctor_finished + 1);
  this->fields.messageLabelPositionYNoTitle = 36.0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(v3, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ErrorDialog__AdjustLayoutWhetherNoTitle(ErrorDialog_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0
  struct UILabel_o *titleLabel; // x8
  bool IsNullOrEmpty; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_o *v7; // x8
  __int64 v8; // x1
  System_String_o *v9; // x20
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_593869D & 1) == 0 )
  {
    sub_21FFC50(&ScriptMessageLabel_TypeInfo);
    sub_21FFC50(&StringLiteral_43/*"\n"*/);
    byte_593869D = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_20;
  UILabel__set_fontSize(messageLabel, this->fields.DEFAULT_FONT_SIZE, 0);
  if ( this->fields.isAdjustedLayoutNoTitle )
  {
    titleLabel = this->fields.titleLabel;
    if ( !titleLabel )
      goto LABEL_20;
    IsNullOrEmpty = System_String__IsNullOrEmpty(titleLabel->fields.mText, 0);
    messageLabel = this->fields.messageLabel;
    if ( IsNullOrEmpty )
    {
      if ( !messageLabel )
        goto LABEL_20;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0);
      GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.messageLabelPositionYNoTitle, 0);
      messageLabel = this->fields.messageLabel;
      if ( !messageLabel )
        goto LABEL_20;
      UIWidget__set_height((UIWidget_o *)messageLabel, this->fields.messageLabelHeightNoTitle, 0);
      v7 = this->fields.messageLabel;
      if ( !v7 )
        goto LABEL_20;
      messageLabel = (UILabel_o *)v7->fields.mText;
      if ( !messageLabel )
        goto LABEL_20;
      v9 = System_String__Replace_75490096(
             (System_String_o *)messageLabel,
             (System_String_o *)StringLiteral_43/*"\n"*/,
             **(System_String_o ***)(qword_594C0B8 + 184),
             0);
      if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v8);
      if ( ScriptMessageLabel__StrlenByDisp(v9, 0) > this->fields.MAX_NUM_CHARACTERS_WITHOUT_ADJUST_FONT_SIZE )
      {
        messageLabel = this->fields.messageLabel;
        if ( messageLabel )
        {
          UILabel__set_fontSize(messageLabel, this->fields.ADJUSTED_FONT_SIZE, 0);
          return;
        }
LABEL_20:
        sub_21FFECC(messageLabel, method);
      }
    }
    else
    {
      if ( !messageLabel )
        goto LABEL_20;
      v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0);
      GameObjectExtensions__SetLocalPositionY(v10, this->fields.messageLabelPositionYDefault, 0);
      messageLabel = this->fields.messageLabel;
      if ( !messageLabel )
        goto LABEL_20;
      UIWidget__set_height((UIWidget_o *)messageLabel, this->fields.messageLabelHeightDefault, 0);
    }
  }
}


void ErrorDialog__Close(ErrorDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ErrorDialog__Close_48964176(this, 0, v2);
}


void ErrorDialog__Close_48964176(ErrorDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_593869E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ErrorDialog_EndClose__);
    byte_593869E = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc,
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
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ErrorDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void ErrorDialog__EndClose(ErrorDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeEndFunc; // t1

  ErrorDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc;
  v12 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0;
    sub_21FFBF4(p_closeEndFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void ErrorDialog__EndOpen(ErrorDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void ErrorDialog__Init(ErrorDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *decideLabel; // x20
  UnityEngine_Object_o *cancelLabel; // x20
  UnityEngine_Object_o *sendLabel; // x20
  UnityEngine_Object_o *noSendLabel; // x20

  if ( (byte_5938699 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938699 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(decideLabel, 0, 0) )
  {
    titleLabel = this->fields.decideLabel;
    if ( !titleLabel )
      goto LABEL_26;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  cancelLabel = (UnityEngine_Object_o *)this->fields.cancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(cancelLabel, 0, 0) )
  {
    titleLabel = this->fields.cancelLabel;
    if ( !titleLabel )
      goto LABEL_26;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  sendLabel = (UnityEngine_Object_o *)this->fields.sendLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(sendLabel, 0, 0) )
  {
    titleLabel = this->fields.sendLabel;
    if ( !titleLabel )
      goto LABEL_26;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  noSendLabel = (UnityEngine_Object_o *)this->fields.noSendLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(noSendLabel, 0, 0) )
  {
    titleLabel = this->fields.noSendLabel;
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      goto LABEL_25;
    }
LABEL_26:
    sub_21FFECC(titleLabel, method);
  }
LABEL_25:
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ErrorDialog__OnClickCancel(ErrorDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct ErrorDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_59386A0 & 1) == 0 )
  {
    sub_21FFC50(&Method_ErrorDialog_OnClickCancel__);
    byte_59386A0 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ErrorDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ErrorDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ErrorDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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

  if ( (byte_59386A1 & 1) == 0 )
  {
    sub_21FFC50(&Method_ErrorDialog_OnClickClose__);
    byte_59386A1 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ErrorDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ErrorDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ErrorDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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

  if ( (byte_593869F & 1) == 0 )
  {
    sub_21FFC50(&Method_ErrorDialog_OnClickDecide__);
    byte_593869F = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ErrorDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ErrorDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ErrorDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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

  if ( (byte_59386A2 & 1) == 0 )
  {
    sub_21FFC50(&Method_ErrorDialog_OnClickDecide2__);
    byte_59386A2 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ErrorDialog_OnClickDecide2__;
    if ( (*((_BYTE *)Method_ErrorDialog_OnClickDecide2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ErrorDialog_OnClickDecide2__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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

  if ( (byte_59386A3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16229/*"Window/CloseButton"*/);
    sub_21FFC50(&StringLiteral_16231/*"Window/ExitButton"*/);
    sub_21FFC50(&StringLiteral_16227/*"Window/CancelButton"*/);
    byte_59386A3 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(transform, (System_String_o *)StringLiteral_16231/*"Window/ExitButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(v4, (System_String_o *)StringLiteral_16229/*"Window/CloseButton"*/, 0);
  v5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(v5, (System_String_o *)StringLiteral_16227/*"Window/CancelButton"*/, 0);
}


void ErrorDialog__Open(ErrorDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // [xsp+0h] [xbp-20h]
  System_Nullable_Vector2__o v3; // 0:x6.12

  *(_QWORD *)&v3.fields.hasValue = 0;
  v3.fields.value.fields.y = 0.0;
  ErrorDialog__Open_48961988(this, 0, 0, 0, 1, -1.0, 1, v3, v2);
}


void ErrorDialog__Open_48961988(
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
  const MethodInfo_45B47EC *v20; // x2
  UILabel_o *messageLabel; // x22
  UnityEngine_Vector2_o Value; // kr00_8
  UnityEngine_Object_o *decideLabel; // x21
  __int64 v24; // x1
  UILabel_o *v25; // x21
  System_String_o *decideTextCode; // x22
  UnityEngine_Object_o *cancelLabel; // x21
  __int64 v28; // x1
  UILabel_o *v29; // x21
  System_String_o *cancelTextCode; // x22
  UnityEngine_Object_o *sendLabel; // x21
  __int64 v32; // x1
  UILabel_o *v33; // x21
  System_String_o *sendTextCode; // x22
  UnityEngine_Object_o *noSendLabel; // x21
  UILabel_o *v36; // x21
  System_String_o *noSendTextCode; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x1
  System_Action_c *v41; // x0
  System_Action_o *v42; // x20
  System_Nullable_Vector2__o v43; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Vector2__o v44; // 0:x0.12

  hasValue = effectDistance.fields.hasValue;
  v43 = effectDistance;
  if ( (byte_593869B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ErrorDialog_EndOpen__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_Vector2__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_Vector2__get_Value__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593869B = 1;
  }
  this->fields.clickFunc = func;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    message,
    (System_String_o *)func,
    ableToCloseTapOutDialog,
    messageEffect,
    effectDistance.fields.hasValue,
    SLOBYTE(effectDistance.fields.value.fields.y));
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
      *(_QWORD *)&v44.fields.hasValue = &v43;
      LODWORD(v44.fields.value.fields.y) = Method_System_Nullable_Vector2__get_Value__;
      Value = System_Nullable_Vector2___get_Value(v44, v20);
      if ( !messageLabel )
        goto LABEL_51;
    }
    else
    {
      if ( !byte_59373DF )
      {
        titleLabel = (UILabel_o *)sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
        byte_59373DF = 1;
      }
      Value = UnityEngine_Vector2_TypeInfo->static_fields->oneVector;
      if ( !messageLabel )
        goto LABEL_51;
    }
    UILabel__set_effectDistance(messageLabel, Value, 0);
  }
  decideLabel = (UnityEngine_Object_o *)this->fields.decideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality(decideLabel, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.decideTextCode, 0) )
  {
    v25 = this->fields.decideLabel;
    decideTextCode = this->fields.decideTextCode;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
    titleLabel = (UILabel_o *)LocalizationManager__Get(decideTextCode, 0);
    if ( !v25 )
      goto LABEL_51;
    UILabel__set_text(v25, (System_String_o *)titleLabel, 0);
  }
  cancelLabel = (UnityEngine_Object_o *)this->fields.cancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  if ( UnityEngine_Object__op_Inequality(cancelLabel, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.cancelTextCode, 0) )
  {
    v29 = this->fields.cancelLabel;
    cancelTextCode = this->fields.cancelTextCode;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
    titleLabel = (UILabel_o *)LocalizationManager__Get(cancelTextCode, 0);
    if ( !v29 )
      goto LABEL_51;
    UILabel__set_text(v29, (System_String_o *)titleLabel, 0);
  }
  sendLabel = (UnityEngine_Object_o *)this->fields.sendLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  if ( UnityEngine_Object__op_Inequality(sendLabel, 0, 0) && !System_String__IsNullOrEmpty(this->fields.sendTextCode, 0) )
  {
    v33 = this->fields.sendLabel;
    sendTextCode = this->fields.sendTextCode;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
    titleLabel = (UILabel_o *)LocalizationManager__Get(sendTextCode, 0);
    if ( !v33 )
      goto LABEL_51;
    UILabel__set_text(v33, (System_String_o *)titleLabel, 0);
  }
  noSendLabel = (UnityEngine_Object_o *)this->fields.noSendLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
  if ( UnityEngine_Object__op_Inequality(noSendLabel, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.noSendTextCode, 0) )
  {
    v36 = this->fields.noSendLabel;
    noSendTextCode = this->fields.noSendTextCode;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
    titleLabel = (UILabel_o *)LocalizationManager__Get(noSendTextCode, 0);
    if ( v36 )
    {
      UILabel__set_text(v36, (System_String_o *)titleLabel, 0);
      goto LABEL_49;
    }
LABEL_51:
    sub_21FFECC(titleLabel, v17);
  }
LABEL_49:
  titleLabel = this->fields.cancelLabel;
  if ( !titleLabel )
    goto LABEL_51;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, closeButtonY, 0);
  ErrorDialog__SetAbleToCloseTapOutDialog(this, ableToCloseTapOutDialog, v39);
  ErrorDialog__AdjustLayoutWhetherNoTitle(this, v40);
  v41 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v42 = (System_Action_o *)sub_21FFEBC(v41);
  System_Action___ctor(v42, (Il2CppObject *)this, Method_ErrorDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v42, 0, 0, 0);
}


void ErrorDialog__Open_48963012(ErrorDialog_o *this, System_String_o *message, const MethodInfo *method)
{
  const MethodInfo *v3; // [xsp+0h] [xbp-20h]
  System_Nullable_Vector2__o v4; // 0:x6.12

  *(_QWORD *)&v4.fields.hasValue = 0;
  v4.fields.value.fields.y = 0.0;
  ErrorDialog__Open_48961988(this, 0, message, 0, 1, -1.0, 1, v4, v3);
}


void ErrorDialog__Open_48963068(
        ErrorDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        const MethodInfo *method)
{
  const MethodInfo *v4; // [xsp+0h] [xbp-20h]
  System_Nullable_Vector2__o v5; // 0:x6.12

  *(_QWORD *)&v5.fields.hasValue = 0;
  v5.fields.value.fields.y = 0.0;
  ErrorDialog__Open_48961988(this, title, message, 0, 1, -1.0, 1, v5, v4);
}


void ErrorDialog__Open_48963116(
        ErrorDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancleTxt,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6

  ErrorDialog__Open_48963124(this, title, message, decideTxt, cancleTxt, 0, v6);
}


void ErrorDialog__Open_48963124(
        ErrorDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancleTxt,
        ErrorDialog_ClickDelegate_o *func,
        const MethodInfo *method)
{
  bool v7; // w7
  __int64 v14; // x1
  UILabel_o *titleLabel; // x0
  System_String_o *v16; // x1
  System_String_o *v17; // x1
  __int64 v18; // x1
  UnityEngine_Object_o *decideLabel; // x22
  UnityEngine_Object_o *cancelLabel; // x21
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1
  System_Action_c *v23; // x0
  System_Action_o *v24; // x20

  if ( (byte_593869A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ErrorDialog_EndOpen__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593869A = 1;
  }
  this->fields.clickFunc = func;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    message,
    decideTxt,
    (int32_t)cancleTxt,
    (int32_t)func,
    (bool)method,
    v7);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_22;
  v16 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(titleLabel, v16, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_22;
  if ( message )
    v17 = message;
  else
    v17 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(titleLabel, v17, 0);
  decideLabel = (UnityEngine_Object_o *)this->fields.decideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality(decideLabel, 0, 0) )
  {
    titleLabel = this->fields.decideLabel;
    if ( !titleLabel )
      goto LABEL_22;
    UILabel__set_text(titleLabel, decideTxt, 0);
  }
  cancelLabel = (UnityEngine_Object_o *)this->fields.cancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(cancelLabel, 0, 0) )
  {
    titleLabel = this->fields.cancelLabel;
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, cancleTxt, 0);
      goto LABEL_21;
    }
LABEL_22:
    sub_21FFECC(titleLabel, v14);
  }
LABEL_21:
  ErrorDialog__SetAbleToCloseTapOutDialog(this, 1, v21);
  ErrorDialog__AdjustLayoutWhetherNoTitle(this, v22);
  v23 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v24 = (System_Action_o *)sub_21FFEBC(v23);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_ErrorDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ErrorDialog__SetAbleToCloseTapOutDialog(
        ErrorDialog_o *this,
        bool ableToCloseTapOutDialog,
        const MethodInfo *method)
{
  UnityEngine_Object_o *maskSprite; // x21
  __int64 v6; // x1
  struct UISprite_o *v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_593869C & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593869C = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, ableToCloseTapOutDialog);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
  {
    v7 = this->fields.maskSprite;
    if ( !v7 )
      goto LABEL_13;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)v7,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    v7 = (struct UISprite_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      if ( Component_object )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, ableToCloseTapOutDialog, 0);
        return;
      }
LABEL_13:
      sub_21FFECC(v7, v6);
    }
  }
}


void ErrorDialog_ClickDelegate___ctor(
        ErrorDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FFACC8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFAC80;
}


System_IAsyncResult_o *ErrorDialog_ClickDelegate__BeginInvoke(
        ErrorDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void ErrorDialog_ClickDelegate__EndInvoke(
        ErrorDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void ErrorDialog_ClickDelegate__Invoke(ErrorDialog_ClickDelegate_o *this, bool isDecide, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}