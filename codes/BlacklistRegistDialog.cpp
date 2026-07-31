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
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *titleLabel; // x25
  __int64 v18; // x1
  __int64 v19; // x2
  UILabel_o *v20; // x0
  System_String_o *v21; // x1
  UnityEngine_Object_o *messageLabel; // x24
  __int64 v23; // x2
  System_String_o *v24; // x1
  UnityEngine_Object_o *messageLabel_sub; // x22
  __int64 v26; // x2
  System_String_o *v27; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  UILabel_o *v31; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  UILabel_o *v35; // x20
  System_Action_o *v36; // x20

  if ( (byte_5933310 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CommonConfirmDialog_EndOpen__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_3826/*"COMMON_CONFIRM_NO"*/);
    sub_21FFC50(&StringLiteral_3831/*"COMMON_CONFIRM_YES"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5933310 = 1;
  }
  this->fields.clickFunc = func;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
    (int32_t)func,
    message_main,
    message_sub,
    (int32_t)func,
    fontsize_main,
    fontsize_sub,
    (bool)method);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    v20 = this->fields.titleLabel;
    if ( !v20 )
      goto LABEL_48;
    if ( title )
      v21 = title;
    else
      v21 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v20, v21, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    if ( fontsize_main )
    {
      v20 = this->fields.messageLabel;
      if ( !v20 )
        goto LABEL_48;
      UILabel__set_fontSize(v20, fontsize_main, 0);
    }
    v20 = this->fields.messageLabel;
    if ( !v20 )
      goto LABEL_48;
    if ( message_main )
      v24 = message_main;
    else
      v24 = (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(v20, v24, v20->fields.mFontSize, 0, 0);
  }
  messageLabel_sub = (UnityEngine_Object_o *)this->fields.messageLabel_sub;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v23);
  if ( UnityEngine_Object__op_Inequality(messageLabel_sub, 0, 0) )
  {
    if ( fontsize_sub )
    {
      v20 = this->fields.messageLabel_sub;
      if ( !v20 )
        goto LABEL_48;
      UILabel__set_fontSize(v20, fontsize_sub, 0);
    }
    v20 = this->fields.messageLabel_sub;
    if ( v20 )
    {
      if ( message_sub )
        v27 = message_sub;
      else
        v27 = (System_String_o *)StringLiteral_1/*""*/;
      WrapControlText__textAdjust(v20, v27, v20->fields.mFontSize, 0, 0);
      goto LABEL_33;
    }
LABEL_48:
    sub_21FFECC(v20, v18);
  }
LABEL_33:
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v26);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    v31 = this->fields.buttonDecideLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29, v30);
    v20 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_YES"*/, 0);
    if ( !v31 )
      goto LABEL_48;
    UILabel__set_text(v31, (System_String_o *)v20, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v30);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    v35 = this->fields.buttonCancelLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
    v20 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3826/*"COMMON_CONFIRM_NO"*/, 0);
    if ( v35 )
    {
      UILabel__set_text(v35, (System_String_o *)v20, 0);
      goto LABEL_47;
    }
    goto LABEL_48;
  }
LABEL_47:
  *(_WORD *)&this->fields.isButtonEnable = 256;
  v36 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v36, 0, 0, 0);
}