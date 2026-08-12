void TextLabelScrollDialog___ctor(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_596F471 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596F471 = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.state = 2;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void TextLabelScrollDialog__Init(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *closeLabel; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *decideLabel; // x20
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UILabel_o *v18; // x20
  MissionNaviTransitionBoardItem_o *p_decideAction; // x19
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_596F46C & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F46C = 1;
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
  if ( !closeLabel )
    goto LABEL_16;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0);
  decideLabel = (UnityEngine_Object_o *)this->fields.decideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( UnityEngine_Object__op_Inequality(decideLabel, 0, 0) )
  {
    v18 = this->fields.decideLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
    titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
    if ( v18 )
    {
      UILabel__set_text(v18, (System_String_o *)titleLabel, 0);
      goto LABEL_15;
    }
LABEL_16:
    sub_2213CDC(titleLabel, v3);
  }
LABEL_15:
  this->fields.closeAction = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeAction, 0, v12, v13, v14, v15, v16, v17);
  this->fields.decideAction = 0;
  p_decideAction = (MissionNaviTransitionBoardItem_o *)&this->fields.decideAction;
  sub_2213A04(p_decideAction, 0, v20, v21, v22, v23, v24, v25);
  p_decideAction->fields.selectNum = 8;
  p_decideAction->monitor = (void *)0x100000002LL;
}


void TextLabelScrollDialog__OnClickCloseButton(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_596F46E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_TextLabelScrollDialog_OnClickCloseButton__);
    sub_2213A60(&Method_TextLabelScrollDialog__OnClickCloseButton_b__14_0__);
    byte_596F46E = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_TextLabelScrollDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_TextLabelScrollDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_TextLabelScrollDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.closeSE, 0, 0);
  }
  v5 = System_Action_TypeInfo;
  this->fields.state = 2;
  v6 = (System_Action_o *)sub_2213CCC(v5);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_TextLabelScrollDialog__OnClickCloseButton_b__14_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void TextLabelScrollDialog__OnClickDecideButton(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_596F46F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_TextLabelScrollDialog_OnClickDecideButton__);
    sub_2213A60(&Method_TextLabelScrollDialog__OnClickDecideButton_b__15_0__);
    byte_596F46F = 1;
  }
  if ( !this->fields.state )
  {
    v3 = Method_TextLabelScrollDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_TextLabelScrollDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_TextLabelScrollDialog_OnClickDecideButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.decideSE, 0, 0);
  }
  v5 = System_Action_TypeInfo;
  this->fields.state = 1;
  v6 = (System_Action_o *)sub_2213CCC(v5);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_TextLabelScrollDialog__OnClickDecideButton_b__15_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x1

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
    sub_2213CDC(titleLabel, v11);
  UILabel__set_text(titleLabel, message, 0);
  this->fields.closeAction = closeAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeAction,
    (int32_t)closeAction,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.decideAction = decideAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.decideAction,
    (int32_t)decideAction,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  TextLabelScrollDialog__ResetScrollPosition(this, v25);
  this->fields.state = 0;
}


void TextLabelScrollDialog__ResetScrollPosition(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *messageLabel; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  struct UIScrollView_o *scrollView; // x20
  float height; // s0
  struct UILabel_o *v9; // x8
  int v10; // w8

  if ( (byte_596F46D & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_596F46D = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(messageLabel, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v4, v5);
  NGUITools__UpdateWidgetCollider_56414228(gameObject, 1, 0);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  messageLabel = (UnityEngine_Component_o *)scrollView->fields.mPanel;
  if ( !messageLabel )
    goto LABEL_14;
  height = UIPanel__get_height((UIPanel_o *)messageLabel, 0);
  v9 = this->fields.messageLabel;
  if ( !v9 )
    goto LABEL_14;
  messageLabel = (UnityEngine_Component_o *)this->fields.scrollView;
  v10 = height <= (float)v9->fields.mHeight ? 1 : 4;
  scrollView->fields.contentPivot = v10;
  if ( !messageLabel )
LABEL_14:
    sub_2213CDC(messageLabel, method);
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
  if ( (byte_596F470 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16261/*"Window/CloseButton"*/);
    byte_596F470 = 1;
  }
  return (System_String_o *)StringLiteral_16261/*"Window/CloseButton"*/;
}