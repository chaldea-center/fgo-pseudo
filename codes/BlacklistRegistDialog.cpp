void __fastcall BlacklistRegistDialog___ctor(BlacklistRegistDialog_o *this, const MethodInfo *method)
{
  CommonConfirmDialog___ctor((CommonConfirmDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_Object_o *titleLabel; // x25
  __int64 v22; // x1
  UILabel_o *v23; // x0
  System_String_o *v24; // x1
  UnityEngine_Object_o *messageLabel; // x24
  System_String_o *v26; // x1
  UnityEngine_Object_o *messageLabel_sub; // x22
  System_String_o *v28; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UILabel_o *v30; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  UILabel_o *v32; // x20
  System_Action_o *v33; // x20

  if ( (byte_41875E9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, title);
    sub_B2C35C(&Method_CommonConfirmDialog_EndOpen__, v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, v18);
    sub_B2C35C(&StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, v19);
    sub_B2C35C(&StringLiteral_1/*""*/, v20);
    byte_41875E9 = 1;
  }
  this->fields.clickFunc = func;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    (System_String_array **)message_main,
    (System_String_array **)message_sub,
    (System_Boolean_array **)func,
    *(System_Int32_array ***)&fontsize_main,
    *(System_Int32_array **)&fontsize_sub,
    (System_Int32_array *)method);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v23 = this->fields.titleLabel;
    if ( !v23 )
      goto LABEL_55;
    if ( title )
      v24 = title;
    else
      v24 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v23, v24, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    if ( fontsize_main )
    {
      v23 = this->fields.messageLabel;
      if ( !v23 )
        goto LABEL_55;
      UILabel__set_fontSize(v23, fontsize_main, 0LL);
    }
    v23 = this->fields.messageLabel;
    if ( !v23 )
      goto LABEL_55;
    if ( message_main )
      v26 = message_main;
    else
      v26 = (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(v23, v26, v23->fields.mFontSize, 0, 0, 0LL);
  }
  messageLabel_sub = (UnityEngine_Object_o *)this->fields.messageLabel_sub;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel_sub, 0LL, 0LL) )
  {
    if ( fontsize_sub )
    {
      v23 = this->fields.messageLabel_sub;
      if ( !v23 )
        goto LABEL_55;
      UILabel__set_fontSize(v23, fontsize_sub, 0LL);
    }
    v23 = this->fields.messageLabel_sub;
    if ( v23 )
    {
      if ( message_sub )
        v28 = message_sub;
      else
        v28 = (System_String_o *)StringLiteral_1/*""*/;
      WrapControlText__textAdjust(v23, v28, v23->fields.mFontSize, 0, 0, 0LL);
      goto LABEL_36;
    }
LABEL_55:
    sub_B2C434(v23, v22);
  }
LABEL_36:
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0LL, 0LL) )
  {
    v30 = this->fields.buttonDecideLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3267/*"COMMON_CONFIRM_YES"*/, 0LL);
    if ( !v30 )
      goto LABEL_55;
    UILabel__set_text(v30, (System_String_o *)v23, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    v32 = this->fields.buttonCancelLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, 0LL);
    if ( v32 )
    {
      UILabel__set_text(v32, (System_String_o *)v23, 0LL);
      goto LABEL_54;
    }
    goto LABEL_55;
  }
LABEL_54:
  *(_WORD *)&this->fields.isButtonEnable = 256;
  v33 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0LL);
}