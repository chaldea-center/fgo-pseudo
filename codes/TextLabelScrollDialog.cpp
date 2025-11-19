void TextLabelScrollDialog___ctor(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CB4F7F & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB4F7F = 1;
  }
  this->fields.state = 2;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void TextLabelScrollDialog__Init(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  UnityEngine_Object_o *decideLabel; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UILabel_o *v9; // x20
  CGThumbnailListItem_o *p_decideAction; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4CB4F7A & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_3678/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C6BA08(&StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB4F7A = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_16;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0);
  decideLabel = (UnityEngine_Object_o *)this->fields.decideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(decideLabel, 0, 0) )
  {
    v9 = this->fields.decideLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3678/*"COMMON_CONFIRM_DECIDE"*/, 0);
    if ( v9 )
    {
      UILabel__set_text(v9, (System_String_o *)titleLabel, 0);
      goto LABEL_15;
    }
LABEL_16:
    sub_1C6BC60(titleLabel, v3);
  }
LABEL_15:
  this->fields.closeAction = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeAction, 0, v7, v8);
  this->fields.decideAction = 0;
  p_decideAction = (CGThumbnailListItem_o *)&this->fields.decideAction;
  sub_1C6B9AC(p_decideAction, 0, v11, v12);
  p_decideAction->fields.selectNum = 8;
  p_decideAction->monitor = (void *)0x100000002LL;
}


void TextLabelScrollDialog__OnClickCloseButton(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4CB4F7C & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_TextLabelScrollDialog_OnClickCloseButton__);
    sub_1C6BA08(&Method_TextLabelScrollDialog__OnClickCloseButton_b__14_0__);
    byte_4CB4F7C = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_TextLabelScrollDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_TextLabelScrollDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_TextLabelScrollDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.closeSE, 0, 0);
  }
  this->fields.state = 2;
  v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_TextLabelScrollDialog__OnClickCloseButton_b__14_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void TextLabelScrollDialog__OnClickDecideButton(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4CB4F7D & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_TextLabelScrollDialog_OnClickDecideButton__);
    sub_1C6BA08(&Method_TextLabelScrollDialog__OnClickDecideButton_b__15_0__);
    byte_4CB4F7D = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_TextLabelScrollDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_TextLabelScrollDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_TextLabelScrollDialog_OnClickDecideButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.decideSE, 0, 0);
  }
  this->fields.state = 1;
  v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_TextLabelScrollDialog__OnClickDecideButton_b__15_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
}


void TextLabelScrollDialog__Open(
        TextLabelScrollDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_Action_o *closeAction,
        System_Action_o *decideAction,
        const MethodInfo *method)
{
  __int64 v11; // x1
  UILabel_o *titleLabel; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1

  ((void (__fastcall *)(TextLabelScrollDialog_o *, const MethodInfo *, System_String_o *, System_Action_o *, System_Action_o *, const MethodInfo *))this->klass->vtable._7_Init.methodPtr)(
    this,
    this->klass->vtable._7_Init.method,
    message,
    closeAction,
    decideAction,
    method);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel || (UILabel__set_text(titleLabel, title, 0), (titleLabel = this->fields.messageLabel) == 0) )
    sub_1C6BC60(titleLabel, v11);
  UILabel__set_text(titleLabel, message, 0);
  this->fields.closeAction = closeAction;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeAction, (int32_t)closeAction, v13, v14);
  this->fields.decideAction = decideAction;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.decideAction, (int32_t)decideAction, v15, v16);
  TextLabelScrollDialog__ResetScrollPosition(this, v17);
  this->fields.state = 0;
}


void TextLabelScrollDialog__ResetScrollPosition(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  struct UIScrollView_o *scrollView; // x20
  float height; // s0
  struct UILabel_o *v7; // x8
  int v8; // w8

  if ( (byte_4CB4F7B & 1) == 0 )
  {
    sub_1C6BA08(&NGUITools_TypeInfo);
    byte_4CB4F7B = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(messageLabel, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__UpdateWidgetCollider_49650460(gameObject, 1, 0);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  messageLabel = (UnityEngine_Component_o *)scrollView->fields.mPanel;
  if ( !messageLabel )
    goto LABEL_14;
  height = UIPanel__get_height((UIPanel_o *)messageLabel, 0);
  v7 = this->fields.messageLabel;
  if ( !v7 )
    goto LABEL_14;
  v8 = height <= (float)v7->fields.mHeight ? 1 : 4;
  scrollView->fields.contentPivot = v8;
  messageLabel = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !messageLabel )
LABEL_14:
    sub_1C6BC60(messageLabel, method);
  UIScrollView__ResetPosition((UIScrollView_o *)messageLabel, 0);
}


void TextLabelScrollDialog__SetCloseSE(TextLabelScrollDialog_o *this, int32_t seKind, const MethodInfo *method)
{
  this->fields.closeSE = seKind;
}


void TextLabelScrollDialog__SetDecideSE(TextLabelScrollDialog_o *this, int32_t seKind, const MethodInfo *method)
{
  this->fields.decideSE = seKind;
}


void TextLabelScrollDialog___OnClickCloseButton_b__14_0(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.closeAction, 0);
  ((void (__fastcall *)(TextLabelScrollDialog_o *, const MethodInfo *))this->klass->vtable._7_Init.methodPtr)(
    this,
    this->klass->vtable._7_Init.method);
}


void TextLabelScrollDialog___OnClickDecideButton_b__15_0(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.decideAction, 0);
  ((void (__fastcall *)(TextLabelScrollDialog_o *, const MethodInfo *))this->klass->vtable._7_Init.methodPtr)(
    this,
    this->klass->vtable._7_Init.method);
}


System_String_o *TextLabelScrollDialog__get_closeBtnPath(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CB4F7E & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_15640/*"Window/CloseButton"*/);
    byte_4CB4F7E = 1;
  }
  return (System_String_o *)StringLiteral_15640/*"Window/CloseButton"*/;
}