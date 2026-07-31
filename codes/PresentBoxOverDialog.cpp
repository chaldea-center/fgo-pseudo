void PresentBoxOverDialog___ctor(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_5932B69 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5932B69 = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.MESSAGE_FONT_SIZE = 30;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PresentBoxOverDialog__Close(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentBoxOverDialog__Close_38898400(this, 0, v2);
}


void PresentBoxOverDialog__Close_38898400(
        PresentBoxOverDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_5932B65 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PresentBoxOverDialog_EndClose__);
    byte_5932B65 = 1;
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
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_21FFEBC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PresentBoxOverDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void PresentBoxOverDialog__EndClose(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  PresentBoxOverDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0;
    sub_21FFBF4(p_closeEndFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void PresentBoxOverDialog__EndOpen(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void PresentBoxOverDialog__Init(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x2
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *closeBtnLabel; // x20
  __int64 v11; // x2
  UnityEngine_Object_o *presentBoxBtnLabel; // x20

  if ( (byte_5932B63 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932B63 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_27;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_27;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  v6 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
  {
    titleLabel = this->fields.titleLabel;
    if ( !titleLabel )
      goto LABEL_27;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v7);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    titleLabel = this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_27;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  closeBtnLabel = (UnityEngine_Object_o *)this->fields.closeBtnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v9);
  if ( UnityEngine_Object__op_Inequality(closeBtnLabel, 0, 0) )
  {
    titleLabel = this->fields.closeBtnLabel;
    if ( !titleLabel )
      goto LABEL_27;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  presentBoxBtnLabel = (UnityEngine_Object_o *)this->fields.presentBoxBtnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v11);
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
    sub_21FFECC(titleLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PresentBoxOverDialog__OnClickClose(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_clickFunc; // x19
  struct PresentBoxOverDialog_ClickDelegate_o *v12; // x20
  struct PresentBoxOverDialog_ClickDelegate_o *clickFunc; // t1

  if ( (byte_5932B66 & 1) == 0 )
  {
    sub_21FFC50(&Method_PresentBoxOverDialog_OnClickClose__);
    byte_5932B66 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PresentBoxOverDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PresentBoxOverDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PresentBoxOverDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    clickFunc = this->fields.clickFunc;
    p_clickFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc;
    v12 = clickFunc;
    if ( clickFunc )
    {
      p_clickFunc->klass = 0;
      sub_21FFBF4(p_clickFunc, 0, v5, v6, v7, v8, v9, v10);
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v12->fields.invoke_impl)(
        v12->fields.method_code,
        0,
        v12->fields.method);
    }
  }
}


void PresentBoxOverDialog__OnClickPresentBox(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_clickFunc; // x19
  struct PresentBoxOverDialog_ClickDelegate_o *v12; // x20
  struct PresentBoxOverDialog_ClickDelegate_o *clickFunc; // t1

  if ( (byte_5932B67 & 1) == 0 )
  {
    sub_21FFC50(&Method_PresentBoxOverDialog_OnClickPresentBox__);
    byte_5932B67 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PresentBoxOverDialog_OnClickPresentBox__;
    if ( (*((_BYTE *)Method_PresentBoxOverDialog_OnClickPresentBox__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PresentBoxOverDialog_OnClickPresentBox__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickFunc = this->fields.clickFunc;
    p_clickFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc;
    v12 = clickFunc;
    if ( clickFunc )
    {
      p_clickFunc->klass = 0;
      sub_21FFBF4(p_clickFunc, 0, v5, v6, v7, v8, v9, v10);
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v12->fields.invoke_impl)(
        v12->fields.method_code,
        1,
        v12->fields.method);
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
  bool v6; // w6
  bool v7; // w7
  int32_t MESSAGE_FONT_SIZE; // w21
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *titleLabel; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  UILabel_o *v18; // x0
  UnityEngine_Object_o *messageLabel; // x22
  __int64 v20; // x2
  UnityEngine_Object_o *closeBtnLabel; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  UILabel_o *v24; // x20
  UnityEngine_Object_o *presentBoxBtnLabel; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  UILabel_o *v28; // x20
  System_Action_o *v29; // x20

  MESSAGE_FONT_SIZE = fontSize;
  if ( (byte_5932B64 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_PresentBoxOverDialog_EndOpen__);
    sub_21FFC50(&StringLiteral_10035/*"OPEN_PRESENT_BOX"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    byte_5932B64 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.clickFunc = func;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc,
      (int32_t)func,
      message,
      (System_String_o *)func,
      fontSize,
      (int32_t)method,
      v6,
      v7);
    titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
    if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
    {
      v18 = this->fields.titleLabel;
      if ( !v18 )
        goto LABEL_33;
      UILabel__set_text(v18, title, 0);
    }
    messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
    if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
    {
      if ( !MESSAGE_FONT_SIZE )
        MESSAGE_FONT_SIZE = this->fields.MESSAGE_FONT_SIZE;
      v18 = this->fields.messageLabel;
      if ( !v18 )
        goto LABEL_33;
      UILabel__set_fontSize(v18, MESSAGE_FONT_SIZE, 0);
      v18 = this->fields.messageLabel;
      if ( !v18 )
        goto LABEL_33;
      WrapControlText__textAdjust(v18, message, v18->fields.mFontSize, 0, 0);
      v18 = this->fields.messageLabel;
      if ( !v18 )
        goto LABEL_33;
      UILabel__set_text(v18, message, 0);
    }
    closeBtnLabel = (UnityEngine_Object_o *)this->fields.closeBtnLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v20);
    if ( UnityEngine_Object__op_Inequality(closeBtnLabel, 0, 0) )
    {
      v24 = this->fields.closeBtnLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
      v18 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
      if ( !v24 )
        goto LABEL_33;
      UILabel__set_text(v24, (System_String_o *)v18, 0);
    }
    presentBoxBtnLabel = (UnityEngine_Object_o *)this->fields.presentBoxBtnLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
    if ( !UnityEngine_Object__op_Inequality(presentBoxBtnLabel, 0, 0) )
      goto LABEL_32;
    v28 = this->fields.presentBoxBtnLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
    v18 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10035/*"OPEN_PRESENT_BOX"*/, 0);
    if ( v28 )
    {
      UILabel__set_text(v28, (System_String_o *)v18, 0);
LABEL_32:
      this->fields.state = 1;
      v29 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v29, (Il2CppObject *)this, Method_PresentBoxOverDialog_EndOpen__, 0);
      BaseDialog__Open((BaseDialog_o *)this, v29, 0, 0, 0);
      return;
    }
LABEL_33:
    sub_21FFECC(v18, v16);
  }
}


System_String_o *PresentBoxOverDialog__get_closeBtnPath(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  if ( (byte_5932B68 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16229/*"Window/CloseButton"*/);
    byte_5932B68 = 1;
  }
  return (System_String_o *)StringLiteral_16229/*"Window/CloseButton"*/;
}


void PresentBoxOverDialog_ClickDelegate___ctor(
        PresentBoxOverDialog_ClickDelegate_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_1FED8EC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FED8A4;
}


System_IAsyncResult_o *PresentBoxOverDialog_ClickDelegate__BeginInvoke(
        PresentBoxOverDialog_ClickDelegate_o *this,
        bool isPresentBoxOpen,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isPresentBoxOpen;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void PresentBoxOverDialog_ClickDelegate__EndInvoke(
        PresentBoxOverDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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