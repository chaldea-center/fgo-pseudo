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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  UnityEngine_Object_o *titleLabel; // x25
  __int64 v34; // x1
  UILabel_o *v35; // x0
  System_String_o *v36; // x1
  UnityEngine_Object_o *messageLabel; // x24
  System_String_o *v38; // x1
  UnityEngine_Object_o *messageLabel_sub; // x22
  System_String_o *v40; // x1
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UILabel_o *v42; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  UILabel_o *v44; // x20
  System_Action_o *v45; // x20

  if ( (byte_42E7E70 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)title, (_DWORD)message_main, message_sub);
    sub_B5D5C4(&Method_CommonConfirmDialog_EndOpen__, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    byte_42E7E70 = 1;
  }
  this->fields.clickFunc = func;
  sub_B5D560(
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
    v35 = this->fields.titleLabel;
    if ( !v35 )
      goto LABEL_55;
    if ( title )
      v36 = title;
    else
      v36 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(v35, v36, 0LL);
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
      v35 = this->fields.messageLabel;
      if ( !v35 )
        goto LABEL_55;
      UILabel__set_fontSize(v35, fontsize_main, 0LL);
    }
    v35 = this->fields.messageLabel;
    if ( !v35 )
      goto LABEL_55;
    if ( message_main )
      v38 = message_main;
    else
      v38 = (System_String_o *)StringLiteral_1/*""*/;
    WrapControlText__textAdjust(v35, v38, v35->fields.mFontSize, 0, 0, 0LL);
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
      v35 = this->fields.messageLabel_sub;
      if ( !v35 )
        goto LABEL_55;
      UILabel__set_fontSize(v35, fontsize_sub, 0LL);
    }
    v35 = this->fields.messageLabel_sub;
    if ( v35 )
    {
      if ( message_sub )
        v40 = message_sub;
      else
        v40 = (System_String_o *)StringLiteral_1/*""*/;
      WrapControlText__textAdjust(v35, v40, v35->fields.mFontSize, 0, 0, 0LL);
      goto LABEL_36;
    }
LABEL_55:
    sub_B5D69C(v35, v34);
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
    v42 = this->fields.buttonDecideLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v35 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, 0LL);
    if ( !v42 )
      goto LABEL_55;
    UILabel__set_text(v42, (System_String_o *)v35, 0LL);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0LL, 0LL) )
  {
    v44 = this->fields.buttonCancelLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v35 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, 0LL);
    if ( v44 )
    {
      UILabel__set_text(v44, (System_String_o *)v35, 0LL);
      goto LABEL_54;
    }
    goto LABEL_55;
  }
LABEL_54:
  *(_WORD *)&this->fields.isButtonEnable = 256;
  v45 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v45, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v45, 0, 0LL);
}