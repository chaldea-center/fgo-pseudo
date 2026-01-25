void PresentBoxOverDialog___ctor(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CE8EBC & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CE8EBC = 1;
  }
  this->fields.MESSAGE_FONT_SIZE = 30;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PresentBoxOverDialog__Close(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentBoxOverDialog__Close_32875040(this, 0, v2);
}


void PresentBoxOverDialog__Close_32875040(
        PresentBoxOverDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_4CE8EB8 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_PresentBoxOverDialog_EndClose__);
    byte_4CE8EB8 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C7BA8C(&this->fields.closeEndFunc, callback);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_PresentBoxOverDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void PresentBoxOverDialog__EndClose(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeEndFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeEndFunc; // t1

  PresentBoxOverDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = &this->fields.closeEndFunc;
  v4 = closeEndFunc;
  if ( closeEndFunc )
  {
    *p_closeEndFunc = 0;
    sub_1C7BA8C(p_closeEndFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void PresentBoxOverDialog__EndOpen(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void PresentBoxOverDialog__Init(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *closeBtnLabel; // x20
  UnityEngine_Object_o *presentBoxBtnLabel; // x20

  if ( (byte_4CE8EB6 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE8EB6 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_27;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_27;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  v4 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    titleLabel = this->fields.titleLabel;
    if ( !titleLabel )
      goto LABEL_27;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    titleLabel = this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_27;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  closeBtnLabel = (UnityEngine_Object_o *)this->fields.closeBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtnLabel, 0, 0) )
  {
    titleLabel = this->fields.closeBtnLabel;
    if ( !titleLabel )
      goto LABEL_27;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  presentBoxBtnLabel = (UnityEngine_Object_o *)this->fields.presentBoxBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(presentBoxBtnLabel, 0, 0) )
  {
    titleLabel = this->fields.presentBoxBtnLabel;
    if ( !titleLabel )
      goto LABEL_27;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !titleLabel )
LABEL_27:
    sub_1C7BD40(titleLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PresentBoxOverDialog__OnClickClose(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct PresentBoxOverDialog_ClickDelegate_o **p_clickFunc; // x19
  struct PresentBoxOverDialog_ClickDelegate_o *v6; // x20
  struct PresentBoxOverDialog_ClickDelegate_o *clickFunc; // t1

  if ( (byte_4CE8EB9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_PresentBoxOverDialog_OnClickClose__);
    byte_4CE8EB9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PresentBoxOverDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PresentBoxOverDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_PresentBoxOverDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    clickFunc = this->fields.clickFunc;
    p_clickFunc = &this->fields.clickFunc;
    v6 = clickFunc;
    if ( clickFunc )
    {
      *p_clickFunc = 0;
      sub_1C7BA8C(p_clickFunc, 0);
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v6->fields.invoke_impl)(
        v6->fields.method_code,
        0,
        v6->fields.method);
    }
  }
}


void PresentBoxOverDialog__OnClickPresentBox(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct PresentBoxOverDialog_ClickDelegate_o **p_clickFunc; // x19
  struct PresentBoxOverDialog_ClickDelegate_o *v6; // x20
  struct PresentBoxOverDialog_ClickDelegate_o *clickFunc; // t1

  if ( (byte_4CE8EBA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_PresentBoxOverDialog_OnClickPresentBox__);
    byte_4CE8EBA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PresentBoxOverDialog_OnClickPresentBox__;
    if ( (*((_BYTE *)Method_PresentBoxOverDialog_OnClickPresentBox__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_PresentBoxOverDialog_OnClickPresentBox__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickFunc = this->fields.clickFunc;
    p_clickFunc = &this->fields.clickFunc;
    v6 = clickFunc;
    if ( clickFunc )
    {
      *p_clickFunc = 0;
      sub_1C7BA8C(p_clickFunc, 0);
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v6->fields.invoke_impl)(
        v6->fields.method_code,
        1,
        v6->fields.method);
    }
  }
}


void PresentBoxOverDialog__Open(
        PresentBoxOverDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        PresentBoxOverDialog_ClickDelegate_o *func,
        int32_t fontSize,
        const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x23
  __int64 v12; // x1
  UILabel_o *v13; // x0
  UnityEngine_Object_o *messageLabel; // x22
  UnityEngine_Object_o *closeBtnLabel; // x20
  UILabel_o *v16; // x20
  UnityEngine_Object_o *presentBoxBtnLabel; // x20
  UILabel_o *v18; // x20
  System_Action_o *v19; // x20

  if ( (byte_4CE8EB7 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_PresentBoxOverDialog_EndOpen__);
    sub_1C7BAE8(&StringLiteral_9675/*"OPEN_PRESENT_BOX"*/);
    sub_1C7BAE8(&StringLiteral_3691/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4CE8EB7 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.clickFunc = func;
    sub_1C7BA8C(&this->fields.clickFunc, func);
    titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
    {
      v13 = this->fields.titleLabel;
      if ( !v13 )
        goto LABEL_33;
      UILabel__set_text(v13, title, 0);
    }
    messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
    {
      if ( !fontSize )
        fontSize = this->fields.MESSAGE_FONT_SIZE;
      v13 = this->fields.messageLabel;
      if ( !v13 )
        goto LABEL_33;
      UILabel__set_fontSize(v13, fontSize, 0);
      v13 = this->fields.messageLabel;
      if ( !v13 )
        goto LABEL_33;
      WrapControlText__textAdjust(v13, message, v13->fields.mFontSize, 0, 0);
      v13 = this->fields.messageLabel;
      if ( !v13 )
        goto LABEL_33;
      UILabel__set_text(v13, message, 0);
    }
    closeBtnLabel = (UnityEngine_Object_o *)this->fields.closeBtnLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeBtnLabel, 0, 0) )
    {
      v16 = this->fields.closeBtnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3691/*"COMMON_CONFIRM_CLOSE"*/, 0);
      if ( !v16 )
        goto LABEL_33;
      UILabel__set_text(v16, (System_String_o *)v13, 0);
    }
    presentBoxBtnLabel = (UnityEngine_Object_o *)this->fields.presentBoxBtnLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(presentBoxBtnLabel, 0, 0) )
      goto LABEL_32;
    v18 = this->fields.presentBoxBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9675/*"OPEN_PRESENT_BOX"*/, 0);
    if ( v18 )
    {
      UILabel__set_text(v18, (System_String_o *)v13, 0);
LABEL_32:
      this->fields.state = 1;
      v19 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_PresentBoxOverDialog_EndOpen__, 0);
      BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0, 0);
      return;
    }
LABEL_33:
    sub_1C7BD40(v13, v12);
  }
}


System_String_o *PresentBoxOverDialog__get_closeBtnPath(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CE8EBB & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_15701/*"Window/CloseButton"*/);
    byte_4CE8EBB = 1;
  }
  return (System_String_o *)StringLiteral_15701/*"Window/CloseButton"*/;
}


void PresentBoxOverDialog_ClickDelegate___ctor(
        PresentBoxOverDialog_ClickDelegate_o *this,
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
  sub_1C7BA8C(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA9054;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA900C;
}


System_IAsyncResult_o *PresentBoxOverDialog_ClickDelegate__BeginInvoke(
        PresentBoxOverDialog_ClickDelegate_o *this,
        bool isPresentBoxOpen,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isPresentBoxOpen;
  if ( (byte_4CE8EBD & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    byte_4CE8EBD = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void PresentBoxOverDialog_ClickDelegate__EndInvoke(
        PresentBoxOverDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void PresentBoxOverDialog_ClickDelegate__Invoke(
        PresentBoxOverDialog_ClickDelegate_o *this,
        bool isPresentBoxOpen,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isPresentBoxOpen,
    this->fields.method);
}