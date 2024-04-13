void __fastcall TextLabelScrollDialog___ctor(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E4F31 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4F31 = 1;
  }
  this->fields.state = 2;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TextLabelScrollDialog__Init(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  UnityEngine_Object_o *decideLabel; // x20
  UILabel_o *v21; // x20
  struct System_Action_o **p_decideAction; // x19

  if ( (byte_42E4F2C & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42E4F2C = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_19;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_19;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  decideLabel = (UnityEngine_Object_o *)this->fields.decideLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(decideLabel, 0LL, 0LL) )
  {
    v21 = this->fields.decideLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( v21 )
    {
      UILabel__set_text(v21, (System_String_o *)titleLabel, 0LL);
      goto LABEL_18;
    }
LABEL_19:
    sub_B5D69C(titleLabel, v17);
  }
LABEL_18:
  this->fields.closeAction = 0LL;
  sub_B5D560(&this->fields.closeAction);
  this->fields.decideAction = 0LL;
  p_decideAction = &this->fields.decideAction;
  sub_B5D560(p_decideAction);
  *((_DWORD *)p_decideAction + 4) = 8;
  p_decideAction[1] = (struct System_Action_o *)0x100000002LL;
}


void __fastcall TextLabelScrollDialog__OnClickCloseButton(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t closeSE; // w20
  System_Action_o *v12; // x20

  if ( (byte_42E4F2E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_TextLabelScrollDialog__OnClickCloseButton_b__14_0__, v8, v9, v10);
    byte_42E4F2E = 1;
  }
  if ( !this->fields.state )
  {
    closeSE = this->fields.closeSE;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(closeSE, 0LL);
  }
  this->fields.state = 2;
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_TextLabelScrollDialog__OnClickCloseButton_b__14_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
}


void __fastcall TextLabelScrollDialog__OnClickDecideButton(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t decideSE; // w20
  System_Action_o *v12; // x20

  if ( (byte_42E4F2F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_TextLabelScrollDialog__OnClickDecideButton_b__15_0__, v8, v9, v10);
    byte_42E4F2F = 1;
  }
  if ( !this->fields.state )
  {
    decideSE = this->fields.decideSE;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(decideSE, 0LL);
  }
  this->fields.state = 1;
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_TextLabelScrollDialog__OnClickDecideButton_b__15_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
}


void __fastcall TextLabelScrollDialog__Open(
        TextLabelScrollDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_Action_o *closeAction,
        System_Action_o *decideAction,
        const MethodInfo *method)
{
  __int64 v11; // x1
  UILabel_o *titleLabel; // x0
  const MethodInfo *v13; // x1

  ((void (__fastcall *)(TextLabelScrollDialog_o *, void *, System_String_o *, System_Action_o *, System_Action_o *, const MethodInfo *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image,
    message,
    closeAction,
    decideAction,
    method);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel || (UILabel__set_text(titleLabel, title, 0LL), (titleLabel = this->fields.messageLabel) == 0LL) )
    sub_B5D69C(titleLabel, v11);
  UILabel__set_text(titleLabel, message, 0LL);
  this->fields.closeAction = closeAction;
  sub_B5D560(&this->fields.closeAction);
  this->fields.decideAction = decideAction;
  sub_B5D560(&this->fields.decideAction);
  TextLabelScrollDialog__ResetScrollPosition(this, v13);
  this->fields.state = 0;
}


void __fastcall TextLabelScrollDialog__ResetScrollPosition(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  struct UIScrollView_o *scrollView; // x20
  float height; // s0
  struct UILabel_o *v9; // x8
  int v10; // w8

  if ( (byte_42E4F2D & 1) == 0 )
  {
    sub_B5D5C4(&NGUITools_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4F2D = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject(messageLabel, 0LL);
  if ( (BYTE3(NGUITools_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__UpdateWidgetCollider_46199640(gameObject, 1, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_15;
  messageLabel = *(UnityEngine_Component_o **)&scrollView->fields.mPlane.fields.m_Normal.fields.x;
  if ( !messageLabel )
    goto LABEL_15;
  height = UIPanel__get_height((UIPanel_o *)messageLabel, 0LL);
  v9 = this->fields.messageLabel;
  if ( !v9 )
    goto LABEL_15;
  v10 = height <= (float)v9->fields.mHeight ? 1 : 4;
  HIDWORD(scrollView->fields.onDragStarted) = v10;
  messageLabel = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !messageLabel )
LABEL_15:
    sub_B5D69C(messageLabel, method);
  UIScrollView__ResetPosition((UIScrollView_o *)messageLabel, 0LL);
}


void __fastcall TextLabelScrollDialog__SetCloseSE(
        TextLabelScrollDialog_o *this,
        int32_t seKind,
        const MethodInfo *method)
{
  this->fields.closeSE = seKind;
}


void __fastcall TextLabelScrollDialog__SetDecideSE(
        TextLabelScrollDialog_o *this,
        int32_t seKind,
        const MethodInfo *method)
{
  this->fields.decideSE = seKind;
}


void __fastcall TextLabelScrollDialog___OnClickCloseButton_b__14_0(
        TextLabelScrollDialog_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.closeAction, 0LL);
  ((void (__fastcall *)(TextLabelScrollDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
}


void __fastcall TextLabelScrollDialog___OnClickDecideButton_b__15_0(
        TextLabelScrollDialog_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.decideAction, 0LL);
  ((void (__fastcall *)(TextLabelScrollDialog_o *, void *))this->klass->vtable._7_Init.method)(
    this,
    this->klass[1]._1.image);
}


System_String_o *__fastcall TextLabelScrollDialog__get_closeBtnPath(
        TextLabelScrollDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E4F30 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15669/*"Window/CloseButton"*/, (_DWORD)method, v2, v3);
    byte_42E4F30 = 1;
  }
  return (System_String_o *)StringLiteral_15669/*"Window/CloseButton"*/;
}