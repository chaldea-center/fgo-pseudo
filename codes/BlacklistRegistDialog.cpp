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
  UILabel_o *v25; // x0
  struct UILabel_o *v26; // x0
  System_String_o *v27; // x1
  UnityEngine_Object_o *messageLabel_sub; // x22
  UILabel_o *v29; // x0
  struct UILabel_o *v30; // x0
  System_String_o *v31; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UILabel_o *v33; // x20
  System_String_o *v34; // x0
  UnityEngine_Object_o *buttonCancelLabel; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  UILabel_o *v40; // x20
  System_String_o *v41; // x0
  System_Action_o *v42; // x20

  if ( (byte_40F9095 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, title);
    sub_B16FFC(&Method_CommonConfirmDialog_EndOpen__, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_3255, v18);
    sub_B16FFC(&StringLiteral_3258, v19);
    sub_B16FFC(&StringLiteral_1, v20);
    byte_40F9095 = 1;
  }
  this->fields.clickFunc = func;
  sub_B16F98(
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
      v23 = (System_String_o *)StringLiteral_1;
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
      v25 = this->fields.messageLabel;
      if ( !v25 )
        goto LABEL_55;
      UILabel__set_fontSize(v25, fontsize_main, 0LL);
    }
    v26 = this->fields.messageLabel;
    if ( !v26 )
      goto LABEL_55;
    if ( message_main )
      v27 = message_main;
    else
      v27 = (System_String_o *)StringLiteral_1;
    WrapControlText__textAdjust(v26, v27, v26->fields.mFontSize, 0, 0, 0LL);
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
      v29 = this->fields.messageLabel_sub;
      if ( !v29 )
        goto LABEL_55;
      UILabel__set_fontSize(v29, fontsize_sub, 0LL);
    }
    v30 = this->fields.messageLabel_sub;
    if ( v30 )
    {
      if ( message_sub )
        v31 = message_sub;
      else
        v31 = (System_String_o *)StringLiteral_1;
      WrapControlText__textAdjust(v30, v31, v30->fields.mFontSize, 0, 0, 0LL);
      goto LABEL_36;
    }
LABEL_55:
    sub_B170D4();
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
    v33 = this->fields.buttonDecideLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3258, 0LL);
    if ( !v33 )
      goto LABEL_55;
    UILabel__set_text(v33, v34, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    v40 = this->fields.buttonCancelLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3255, 0LL);
    if ( v40 )
    {
      UILabel__set_text(v40, v41, 0LL);
      goto LABEL_54;
    }
    goto LABEL_55;
  }
LABEL_54:
  *(_WORD *)&this->fields.isButtonEnable = 256;
  v42 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
  System_Action___ctor(v42, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v42, 0, 0LL);
}