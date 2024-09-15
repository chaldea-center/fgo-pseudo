void __fastcall TextLabelScrollDialog___ctor(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A2CC7A & 1) == 0 )
  {
    sub_1B761C0(&BaseDialog_TypeInfo, method);
    byte_4A2CC7A = 1;
  }
  this->fields.state = 2;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall TextLabelScrollDialog__Init(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *closeLabel; // x20
  UnityEngine_Object_o *decideLabel; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  UILabel_o *v13; // x20
  ServantStatusBattleListViewItem_o *p_decideAction; // x19
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A2CC75 & 1) == 0 )
  {
    sub_1B761C0(&LocalizationManager_TypeInfo, method);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v3);
    sub_1B761C0(&StringLiteral_3756/*"COMMON_CONFIRM_DECIDE"*/, v4);
    sub_1B761C0(&StringLiteral_3755/*"COMMON_CONFIRM_CLOSE"*/, v5);
    sub_1B761C0(&StringLiteral_1/*""*/, v6);
    byte_4A2CC75 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_16;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !closeLabel )
    goto LABEL_16;
  UILabel__set_text(closeLabel, (System_String_o *)titleLabel, 0LL);
  decideLabel = (UnityEngine_Object_o *)this->fields.decideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(decideLabel, 0LL, 0LL) )
  {
    v13 = this->fields.decideLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( v13 )
    {
      UILabel__set_text(v13, (System_String_o *)titleLabel, 0LL);
      goto LABEL_15;
    }
LABEL_16:
    sub_1B7641C(titleLabel, v7);
  }
LABEL_15:
  this->fields.closeAction = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.closeAction, 0, v11, v12);
  this->fields.decideAction = 0LL;
  p_decideAction = (ServantStatusBattleListViewItem_o *)&this->fields.decideAction;
  sub_1B76164(p_decideAction, 0, v15, v16);
  p_decideAction->fields.selectNum = 8;
  p_decideAction->monitor = (void *)0x100000002LL;
}


void __fastcall TextLabelScrollDialog__OnClickCloseButton(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4A2CC77 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_TextLabelScrollDialog_OnClickCloseButton__, v3);
    sub_1B761C0(&Method_TextLabelScrollDialog__OnClickCloseButton_b__14_0__, v4);
    byte_4A2CC77 = 1;
  }
  if ( !this->fields.state )
  {
    v5 = Method_TextLabelScrollDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_TextLabelScrollDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B761D8(Method_TextLabelScrollDialog_OnClickCloseButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B761A4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, this->fields.closeSE, 0LL);
  }
  this->fields.state = 2;
  v7 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TextLabelScrollDialog__OnClickCloseButton_b__14_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall TextLabelScrollDialog__OnClickDecideButton(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4A2CC78 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_TextLabelScrollDialog_OnClickDecideButton__, v3);
    sub_1B761C0(&Method_TextLabelScrollDialog__OnClickDecideButton_b__15_0__, v4);
    byte_4A2CC78 = 1;
  }
  if ( !this->fields.state )
  {
    v5 = Method_TextLabelScrollDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_TextLabelScrollDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B761D8(Method_TextLabelScrollDialog_OnClickDecideButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B761A4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, this->fields.decideSE, 0LL);
  }
  this->fields.state = 1;
  v7 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TextLabelScrollDialog__OnClickDecideButton_b__15_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x1

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
    sub_1B7641C(titleLabel, v11);
  UILabel__set_text(titleLabel, message, 0LL);
  this->fields.closeAction = closeAction;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.closeAction, (int32_t)closeAction, v13, v14);
  this->fields.decideAction = decideAction;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.decideAction, (int32_t)decideAction, v15, v16);
  TextLabelScrollDialog__ResetScrollPosition(this, v17);
  this->fields.state = 0;
}


void __fastcall TextLabelScrollDialog__ResetScrollPosition(TextLabelScrollDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  struct UIScrollView_o *scrollView; // x20
  float height; // s0
  struct UILabel_o *v7; // x8
  int v8; // w8

  if ( (byte_4A2CC76 & 1) == 0 )
  {
    sub_1B761C0(&NGUITools_TypeInfo, method);
    byte_4A2CC76 = 1;
  }
  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(messageLabel, 0LL);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  NGUITools__UpdateWidgetCollider_46748504(gameObject, 1, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  messageLabel = (UnityEngine_Component_o *)scrollView->fields.mPanel;
  if ( !messageLabel )
    goto LABEL_14;
  height = UIPanel__get_height((UIPanel_o *)messageLabel, 0LL);
  v7 = this->fields.messageLabel;
  if ( !v7 )
    goto LABEL_14;
  v8 = height <= (float)v7->fields.mHeight ? 1 : 4;
  scrollView->fields.contentPivot = v8;
  messageLabel = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !messageLabel )
LABEL_14:
    sub_1B7641C(messageLabel, method);
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
  if ( (byte_4A2CC79 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_15637/*"Window/CloseButton"*/, method);
    byte_4A2CC79 = 1;
  }
  return (System_String_o *)StringLiteral_15637/*"Window/CloseButton"*/;
}