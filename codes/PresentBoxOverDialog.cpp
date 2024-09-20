void __fastcall PresentBoxOverDialog___ctor(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5F3C9 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5F3C9 = 1;
  }
  this->fields.MESSAGE_FONT_SIZE = 30;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentBoxOverDialog__Close(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentBoxOverDialog__Close_46144496(this, 0LL, v2);
}


void __fastcall PresentBoxOverDialog__Close_46144496(
        PresentBoxOverDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A5F3C5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PresentBoxOverDialog_EndClose__);
    byte_4A5F3C5 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PresentBoxOverDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall PresentBoxOverDialog__EndClose(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeEndFunc; // t1

  PresentBoxOverDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc;
  v6 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1B88554(p_closeEndFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall PresentBoxOverDialog__EndOpen(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PresentBoxOverDialog__Init(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *closeBtnLabel; // x20
  UnityEngine_Object_o *presentBoxBtnLabel; // x20

  if ( (byte_4A5F3C3 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5F3C3 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_27;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_27;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  v4 = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    titleLabel = this->fields.titleLabel;
    if ( !titleLabel )
      goto LABEL_27;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    titleLabel = this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_27;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  closeBtnLabel = (UnityEngine_Object_o *)this->fields.closeBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtnLabel, 0LL, 0LL) )
  {
    titleLabel = this->fields.closeBtnLabel;
    if ( !titleLabel )
      goto LABEL_27;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  presentBoxBtnLabel = (UnityEngine_Object_o *)this->fields.presentBoxBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(presentBoxBtnLabel, 0LL, 0LL) )
  {
    titleLabel = this->fields.presentBoxBtnLabel;
    if ( !titleLabel )
      goto LABEL_27;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
LABEL_27:
    sub_1B8880C(titleLabel, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentBoxOverDialog__OnClickClose(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_clickFunc; // x19
  struct PresentBoxOverDialog_ClickDelegate_o *v8; // x20
  struct PresentBoxOverDialog_ClickDelegate_o *clickFunc; // t1

  if ( (byte_4A5F3C6 & 1) == 0 )
  {
    sub_1B885B0(&Method_PresentBoxOverDialog_OnClickClose__);
    byte_4A5F3C6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PresentBoxOverDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_PresentBoxOverDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PresentBoxOverDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    clickFunc = this->fields.clickFunc;
    p_clickFunc = (ServantStatusBattleListViewItem_o *)&this->fields.clickFunc;
    v8 = clickFunc;
    if ( clickFunc )
    {
      p_clickFunc->klass = 0LL;
      sub_1B88554(p_clickFunc, 0, v5, v6);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v8->fields.m_target)(
        v8->fields.original_method_info,
        0LL,
        *(_QWORD *)&v8->fields.extra_arg);
    }
  }
}


void __fastcall PresentBoxOverDialog__OnClickPresentBox(PresentBoxOverDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_clickFunc; // x19
  struct PresentBoxOverDialog_ClickDelegate_o *v8; // x20
  struct PresentBoxOverDialog_ClickDelegate_o *clickFunc; // t1

  if ( (byte_4A5F3C7 & 1) == 0 )
  {
    sub_1B885B0(&Method_PresentBoxOverDialog_OnClickPresentBox__);
    byte_4A5F3C7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PresentBoxOverDialog_OnClickPresentBox__;
    if ( (*((_BYTE *)Method_PresentBoxOverDialog_OnClickPresentBox__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_PresentBoxOverDialog_OnClickPresentBox__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    p_clickFunc = (ServantStatusBattleListViewItem_o *)&this->fields.clickFunc;
    v8 = clickFunc;
    if ( clickFunc )
    {
      p_clickFunc->klass = 0LL;
      sub_1B88554(p_clickFunc, 0, v5, v6);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v8->fields.m_target)(
        v8->fields.original_method_info,
        1LL,
        *(_QWORD *)&v8->fields.extra_arg);
    }
  }
}


void __fastcall PresentBoxOverDialog__Open(
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

  if ( (byte_4A5F3C4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_PresentBoxOverDialog_EndOpen__);
    sub_1B885B0(&StringLiteral_9644/*"OPEN_PRESENT_BOX"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4A5F3C4 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.clickFunc = func;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.clickFunc,
      (int32_t)func,
      (int32_t)message,
      (int32_t)func);
    titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
    {
      v13 = this->fields.titleLabel;
      if ( !v13 )
        goto LABEL_33;
      UILabel__set_text(v13, title, 0LL);
    }
    messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
    {
      if ( !fontSize )
        fontSize = this->fields.MESSAGE_FONT_SIZE;
      v13 = this->fields.messageLabel;
      if ( !v13 )
        goto LABEL_33;
      UILabel__set_fontSize(v13, fontSize, 0LL);
      v13 = this->fields.messageLabel;
      if ( !v13 )
        goto LABEL_33;
      WrapControlText__textAdjust(v13, message, v13->fields.mFontSize, 0, 0, 0LL);
      v13 = this->fields.messageLabel;
      if ( !v13 )
        goto LABEL_33;
      UILabel__set_text(v13, message, 0LL);
    }
    closeBtnLabel = (UnityEngine_Object_o *)this->fields.closeBtnLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeBtnLabel, 0LL, 0LL) )
    {
      v16 = this->fields.closeBtnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
      if ( !v16 )
        goto LABEL_33;
      UILabel__set_text(v16, (System_String_o *)v13, 0LL);
    }
    presentBoxBtnLabel = (UnityEngine_Object_o *)this->fields.presentBoxBtnLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(presentBoxBtnLabel, 0LL, 0LL) )
      goto LABEL_32;
    v18 = this->fields.presentBoxBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9644/*"OPEN_PRESENT_BOX"*/, 0LL);
    if ( v18 )
    {
      UILabel__set_text(v18, (System_String_o *)v13, 0LL);
LABEL_32:
      this->fields.state = 1;
      v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_PresentBoxOverDialog_EndOpen__, 0LL);
      BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0LL);
      return;
    }
LABEL_33:
    sub_1B8880C(v13, v12);
  }
}


System_String_o *__fastcall PresentBoxOverDialog__get_closeBtnPath(
        PresentBoxOverDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5F3C8 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15643/*"Window/CloseButton"*/);
    byte_4A5F3C8 = 1;
  }
  return (System_String_o *)StringLiteral_15643/*"Window/CloseButton"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxOverDialog_ClickDelegate___ctor(
        PresentBoxOverDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D3D20;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D3CD8;
}


System_IAsyncResult_o *__fastcall PresentBoxOverDialog_ClickDelegate__BeginInvoke(
        PresentBoxOverDialog_ClickDelegate_o *this,
        bool isPresentBoxOpen,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isPresentBoxOpen;
  if ( (byte_4A5F3CA & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A5F3CA = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall PresentBoxOverDialog_ClickDelegate__EndInvoke(
        PresentBoxOverDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall PresentBoxOverDialog_ClickDelegate__Invoke(
        PresentBoxOverDialog_ClickDelegate_o *this,
        bool isPresentBoxOpen,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isPresentBoxOpen,
    *(_QWORD *)&this->fields.extra_arg);
}