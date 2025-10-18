void BlacklistRegistDialog___ctor(BlacklistRegistDialog_o *this, const MethodInfo *method)
{
  CommonConfirmDialog___ctor((CommonConfirmDialog_o *)this, 0);
}


void BlacklistRegistDialog__Open(
        BlacklistRegistDialog_o *this,
        System_String_o *title,
        System_String_o *message_main,
        System_String_o *message_sub,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize_main,
        int32_t fontsize_sub,
        const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x25
  UILabel_o *v16; // x0
  System_String_o *v17; // x1
  UnityEngine_Object_o *messageLabel; // x24
  System_String_o *v19; // x1
  UnityEngine_Object_o *messageLabel_sub; // x22
  System_String_o *v21; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UILabel_o *v23; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  UILabel_o *v25; // x20
  System_Action_o *v26; // x20

  if ( (byte_4C3DE7E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CommonConfirmDialog_EndOpen__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_3688/*"COMMON_CONFIRM_NO"*/);
    sub_1C37058(&StringLiteral_3693/*"COMMON_CONFIRM_YES"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3DE7E = 1;
  }
  this->fields.clickFunc = func;
  sub_1C36FFC(&this->fields.clickFunc, func);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    v16 = this->fields.titleLabel;
    if ( !v16 )
      goto LABEL_48;
    if ( title )
      v17 = title;
    else
      v17 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v16, v17, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    if ( fontsize_main )
    {
      v16 = this->fields.messageLabel;
      if ( !v16 )
        goto LABEL_48;
      UILabel__set_fontSize(v16, fontsize_main, 0);
    }
    v16 = this->fields.messageLabel;
    if ( !v16 )
      goto LABEL_48;
    if ( message_main )
      v19 = message_main;
    else
      v19 = (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(v16, v19, v16->fields.mFontSize, 0, 0);
  }
  messageLabel_sub = (UnityEngine_Object_o *)this->fields.messageLabel_sub;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel_sub, 0, 0) )
  {
    if ( fontsize_sub )
    {
      v16 = this->fields.messageLabel_sub;
      if ( !v16 )
        goto LABEL_48;
      UILabel__set_fontSize(v16, fontsize_sub, 0);
    }
    v16 = this->fields.messageLabel_sub;
    if ( v16 )
    {
      if ( message_sub )
        v21 = message_sub;
      else
        v21 = (System_String_o *)StringLiteral_1/*""*/;
      WrapControlText__textAdjust(v16, v21, v16->fields.mFontSize, 0, 0);
      goto LABEL_33;
    }
LABEL_48:
    sub_1C372B4(v16);
  }
LABEL_33:
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    v23 = this->fields.buttonDecideLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMMON_CONFIRM_YES"*/, 0);
    if ( !v23 )
      goto LABEL_48;
    UILabel__set_text(v23, (System_String_o *)v16, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    v25 = this->fields.buttonCancelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3688/*"COMMON_CONFIRM_NO"*/, 0);
    if ( v25 )
    {
      UILabel__set_text(v25, (System_String_o *)v16, 0);
      goto LABEL_47;
    }
    goto LABEL_48;
  }
LABEL_47:
  *(_WORD *)&this->fields.isButtonEnable = 256;
  v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0, 0);
}