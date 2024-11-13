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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  UnityEngine_Object_o *titleLabel; // x25
  __int64 v29; // x1
  UILabel_o *v30; // x0
  System_String_o *v31; // x1
  UnityEngine_Object_o *messageLabel; // x24
  System_String_o *v33; // x1
  UnityEngine_Object_o *messageLabel_sub; // x22
  System_String_o *v35; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x20
  __int64 v37; // x1
  UILabel_o *v38; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  UILabel_o *v43; // x20
  System_Action_o *v44; // x20

  if ( (byte_4B11560 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, title, message_main);
    sub_1BCA7E0(&Method_CommonConfirmDialog_EndOpen__, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v25, v26);
    byte_4B11560 = 1;
  }
  this->fields.clickFunc = func;
  sub_1BCA784(&this->fields.clickFunc, func);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v30 = this->fields.titleLabel;
    if ( !v30 )
      goto LABEL_48;
    if ( title )
      v31 = title;
    else
      v31 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v30, v31, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    if ( fontsize_main )
    {
      v30 = this->fields.messageLabel;
      if ( !v30 )
        goto LABEL_48;
      UILabel__set_fontSize(v30, fontsize_main, 0LL);
    }
    v30 = this->fields.messageLabel;
    if ( !v30 )
      goto LABEL_48;
    if ( message_main )
      v33 = message_main;
    else
      v33 = (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(v30, v33, v30->fields.mFontSize, 0, 0, 0LL);
  }
  messageLabel_sub = (UnityEngine_Object_o *)this->fields.messageLabel_sub;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  if ( UnityEngine_Object__op_Inequality(messageLabel_sub, 0LL, 0LL) )
  {
    if ( fontsize_sub )
    {
      v30 = this->fields.messageLabel_sub;
      if ( !v30 )
        goto LABEL_48;
      UILabel__set_fontSize(v30, fontsize_sub, 0LL);
    }
    v30 = this->fields.messageLabel_sub;
    if ( v30 )
    {
      if ( message_sub )
        v35 = message_sub;
      else
        v35 = (System_String_o *)StringLiteral_1/*""*/;
      WrapControlText__textAdjust(v30, v35, v30->fields.mFontSize, 0, 0, 0LL);
      goto LABEL_33;
    }
LABEL_48:
    sub_1BCAA3C(v30, v29);
  }
LABEL_33:
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    v38 = this->fields.buttonDecideLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
    v30 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_YES"*/, 0LL);
    if ( !v38 )
      goto LABEL_48;
    UILabel__set_text(v38, (System_String_o *)v30, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    v43 = this->fields.buttonCancelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
    v30 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"COMMON_CONFIRM_NO"*/, 0LL);
    if ( v43 )
    {
      UILabel__set_text(v43, (System_String_o *)v30, 0LL);
      goto LABEL_47;
    }
    goto LABEL_48;
  }
LABEL_47:
  *(_WORD *)&this->fields.isButtonEnable = 256;
  v44 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v40, v41, v42);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v44, 0, 0LL);
}