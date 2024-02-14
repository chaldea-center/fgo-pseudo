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
  UILabel_o *v22; // x0
  System_String_o *v23; // x1
  UnityEngine_Object_o *messageLabel; // x24
  System_String_o *v25; // x1
  UnityEngine_Object_o *messageLabel_sub; // x22
  System_String_o *v27; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UILabel_o *v29; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  UILabel_o *v33; // x20
  System_Action_o *v34; // x20

  if ( (byte_42140AC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, title);
    sub_B0D8A4(&Method_CommonConfirmDialog_EndOpen__, v15);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v16);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_3277/*"COMMON_CONFIRM_NO"*/, v18);
    sub_B0D8A4(&StringLiteral_3280/*"COMMON_CONFIRM_YES"*/, v19);
    sub_B0D8A4(&StringLiteral_1/*""*/, v20);
    byte_42140AC = 1;
  }
  this->fields.clickFunc = func;
  sub_B0D840(
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
    v22 = this->fields.titleLabel;
    if ( !v22 )
      goto LABEL_55;
    if ( title )
      v23 = title;
    else
      v23 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v22, v23, 0LL);
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
      v22 = this->fields.messageLabel;
      if ( !v22 )
        goto LABEL_55;
      UILabel__set_fontSize(v22, fontsize_main, 0LL);
    }
    v22 = this->fields.messageLabel;
    if ( !v22 )
      goto LABEL_55;
    if ( message_main )
      v25 = message_main;
    else
      v25 = (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(v22, v25, v22->fields.mFontSize, 0, 0, 0LL);
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
      v22 = this->fields.messageLabel_sub;
      if ( !v22 )
        goto LABEL_55;
      UILabel__set_fontSize(v22, fontsize_sub, 0LL);
    }
    v22 = this->fields.messageLabel_sub;
    if ( v22 )
    {
      if ( message_sub )
        v27 = message_sub;
      else
        v27 = (System_String_o *)StringLiteral_1/*""*/;
      WrapControlText__textAdjust(v22, v27, v22->fields.mFontSize, 0, 0, 0LL);
      goto LABEL_36;
    }
LABEL_55:
    sub_B0D97C(v22);
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
    v29 = this->fields.buttonDecideLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3280/*"COMMON_CONFIRM_YES"*/, 0LL);
    if ( !v29 )
      goto LABEL_55;
    UILabel__set_text(v29, (System_String_o *)v22, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    v33 = this->fields.buttonCancelLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3277/*"COMMON_CONFIRM_NO"*/, 0LL);
    if ( v33 )
    {
      UILabel__set_text(v33, (System_String_o *)v22, 0LL);
      goto LABEL_54;
    }
    goto LABEL_55;
  }
LABEL_54:
  *(_WORD *)&this->fields.isButtonEnable = 256;
  v34 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v31, v32);
  System_Action___ctor(v34, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v34, 0, 0LL);
}