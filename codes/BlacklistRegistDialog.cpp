void __fastcall BlacklistRegistDialog___ctor(BlacklistRegistDialog_o *this, const MethodInfo *method)
{
  CommonConfirmDialog___ctor((CommonConfirmDialog_o *)this, 0LL);
}


void __fastcall BlacklistRegistDialog__Open(
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
  __int64 v16; // x1
  UILabel_o *v17; // x0
  System_String_o *v18; // x1
  UnityEngine_Object_o *messageLabel; // x24
  System_String_o *v20; // x1
  UnityEngine_Object_o *messageLabel_sub; // x22
  System_String_o *v22; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UILabel_o *v24; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  UILabel_o *v26; // x20
  System_Action_o *v27; // x20

  if ( (byte_4A5663E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CommonConfirmDialog_EndOpen__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3759/*"COMMON_CONFIRM_NO"*/);
    sub_1B885B0(&StringLiteral_3763/*"COMMON_CONFIRM_YES"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5663E = 1;
  }
  this->fields.clickFunc = func;
  sub_1B88554(&this->fields.clickFunc, func);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v17 = this->fields.titleLabel;
    if ( !v17 )
      goto LABEL_48;
    if ( title )
      v18 = title;
    else
      v18 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v17, v18, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    if ( fontsize_main )
    {
      v17 = this->fields.messageLabel;
      if ( !v17 )
        goto LABEL_48;
      UILabel__set_fontSize(v17, fontsize_main, 0LL);
    }
    v17 = this->fields.messageLabel;
    if ( !v17 )
      goto LABEL_48;
    if ( message_main )
      v20 = message_main;
    else
      v20 = (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(v17, v20, v17->fields.mFontSize, 0, 0, 0LL);
  }
  messageLabel_sub = (UnityEngine_Object_o *)this->fields.messageLabel_sub;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel_sub, 0LL, 0LL) )
  {
    if ( fontsize_sub )
    {
      v17 = this->fields.messageLabel_sub;
      if ( !v17 )
        goto LABEL_48;
      UILabel__set_fontSize(v17, fontsize_sub, 0LL);
    }
    v17 = this->fields.messageLabel_sub;
    if ( v17 )
    {
      if ( message_sub )
        v22 = message_sub;
      else
        v22 = (System_String_o *)StringLiteral_1/*""*/;
      WrapControlText__textAdjust(v17, v22, v17->fields.mFontSize, 0, 0, 0LL);
      goto LABEL_33;
    }
LABEL_48:
    sub_1B8880C(v17, v16);
  }
LABEL_33:
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    v24 = this->fields.buttonDecideLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3763/*"COMMON_CONFIRM_YES"*/, 0LL);
    if ( !v24 )
      goto LABEL_48;
    UILabel__set_text(v24, (System_String_o *)v17, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    v26 = this->fields.buttonCancelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3759/*"COMMON_CONFIRM_NO"*/, 0LL);
    if ( v26 )
    {
      UILabel__set_text(v26, (System_String_o *)v17, 0LL);
      goto LABEL_47;
    }
    goto LABEL_48;
  }
LABEL_47:
  *(_WORD *)&this->fields.isButtonEnable = 256;
  v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0LL);
}